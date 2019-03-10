// Jason Hachach
// COSC 1410
// TA: Shengrong Yin
// 3/21/2016

#include <iostream>
#include <time.h>
#include <cmath>
#include <cstdlib>

using namespace std;

int getScore(int min, int max);
void getStats(int numScores, int &maxScore, int & minScore, double & std, double &avg);
void printStats(int numScores, int max, int min, double average, double std);

int main()
{
	int numScores = 100;
	int maxScore, minScore;
	double avg, std;
	
	srand(time(NULL));
	
	cout << "The scores are:" << endl;
	getStats(numScores, maxScore, minScore, std, avg);
	printStats(numScores, maxScore, minScore, avg, std);
	
	return 0;
}

int getScore(int min, int max)
{
	int score;
	score = rand() % max + min;
	
	return score;
	
}

void getStats(int numScores, int &maxScore, int & minScore, double & std, double &avg)
{
	int score, sum = 0 , max, min;
	
	minScore = 100;
	maxScore = 0;
	 
	for(int i = 1; i <= numScores; i++)
	{
		if(i <= 20)
		{
			min = 0;
			max = 101;
		}
		
		else
		{
			min = 40;
			max = 31;
		}
		
		score = getScore(min, max);
		
		if(score < minScore)
			minScore = score;
		if(score > maxScore)
			maxScore = score;
			
		avg += score;
		sum += pow(score,2);
		
		cout << i << ": " << score << endl;
	}
	
	avg = avg / numScores;
	std = sqrt((sum/numScores) - pow(avg,2));

}

void printStats(int numScores,int max, int min, double average, double std)
{
	cout << "\nNumber of Scores: " << numScores << endl;
	cout << "Average: " << average << endl;
	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;
	cout << "Std Deviation: " << std << endl;
	
}


