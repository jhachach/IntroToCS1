// Jason Hachach
// COSC 1410
// TA: Shengrong Yin
// 3/23/2016

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <ctime>

using namespace std;

int getScore(int min, int max);
void getScores(int a[], int size);
void getStat(int a[], int size, double &stdev, int &min, int &max, double &mean);
char computeLetterGrade(int grade);
void curveGrades(int a[], int size, double mean, int max);

int main()
{
	int a[100];
	int size =100;
		
	int min, max;
	double mean =0 , stdev = 0;
	
	srand(time(NULL));
	
	getScores(a, size);
	getStat(a, size, stdev, min, max, mean);
	
	cout << "The curved grades are " << endl;
	curveGrades(a, size, mean , max);
	getStat(a, size, stdev, min, max, mean);
	
}

int getScore(int min, int max)
{
	return rand()% max + min;
}

void getScores(int a[], int size)
{
	int min, max;
	for(int i = 0; i < size; i++)
	{
		if(i <= 19)
		{
			min = 0;
			max = 101;
			
		}
		else if(i > 19 && i <= 49)
		{
			min = 40;
			max = 51;
		}
		else
		{
			min = 60;
			max = 21;
		}
		a[i] = getScore(min, max);
	}
	
}

void getStat(int a[], int size, double &stdev, int &min, int &max, double &mean)
{
	int numA = 0, numB = 0 , numC = 0, numD = 0, numF = 0;
	char LetterGrade;
	max = 0;
	min = 100;
	
	for(int i = 0; i < size; i++)
	{
		if(a[i] < min)
			min = a[i];
		if(a[i] > max)
			max = a[i];
		
		LetterGrade = computeLetterGrade(a[i]);
		
		switch(LetterGrade)
		{
			case 'A': numA++; 
				break;
			case 'B': numB++;
				break;
			case 'C': numC++;
				break;
			case 'D': numD++;
				break;
			default: numF++;
		}
		mean += a[i];	
		
		cout << "a[" << i << "] = " << a[i] << endl; 
	}
	
	mean = mean/size;
	for(int i = 0; i < size; i++)
	{
		stdev += pow(mean - a[i] ,2);
	}	
	stdev = sqrt(stdev/size);
	
	cout << "Mean is " << mean << endl;
	cout << "Standard Deviation is " << stdev << endl;
	cout << "Lowest Grade is " << min << endl;
	cout << "Highest Grade is " << max << endl << endl;
	
	cout << "There were a total of " << numA << " A's, " << numB << " B's, " << numC << " C's, "
		<< numD << " D's, and " << numF << " F's" << endl << endl;
}

char computeLetterGrade(int grade)
{
	if(grade>= 90)
		return 'A';
	else if(grade >= 80 && grade < 90)
		return 'B';
	else if(grade >= 70 && grade < 80)
		return 'C';
	else if(grade >= 60 && grade < 70)
		return 'D';
	else
		return 'F';
}

void curveGrades(int a[], int size, double mean, int max )
{
	for(int i =0; i < size; i++)
	{
		a[i] =  (a[i]-mean)/(max-mean)*25+75;
	}
}
