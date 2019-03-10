#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cstdlib>
#include <time.h>

using namespace std;
const int MIN = 0, MAX = 100;

int getNum(int min, int max);
void initGame(int &bomb, int &min, int &max);
void PlayGame(int bomb, int min, int max);
int getNum(int min, int max);

int main()
{
	int bomb, min, max;
	
//	Initialize values to each variable and 
	initGame(bomb, min, max);
	
//	Play the game
	PlayGame(bomb, min, max);
	
	system("pause");
	return 0;
}
void initGame(int &bomb, int& min, int &max)
{
	srand(time(NULL));
	
//	Assign bomb a random number between 1 and 100
	bomb = rand() %(MAX-MIN+1) + MIN;
	min = MIN;
	max = MAX;
	cout << "Enter a number within the range (inclusive) specified when asked." << endl;
}

int getNum(int min, int max)
{
	int num, errorCounts = 0;
	bool outsideRange;
	
	do
	{
		cout << "[" << setw(2) << min << ", " << setw(3) << max << "]: ";
		cin >> num;

//	check to see if inputted number is betweeen the range
		if(outsideRange = (num<min || num>max))
		{
			cout << "The numer is outside the range specefied " << endl;
//	If the use input is outside range 3 times prompt an error message.	
			if(++errorCounts %3 == 0) cout << endl << "	Hello! Pay Attention." << endl << endl;
		}
		
	}while(outsideRange);
}

bool gameOver(int bomb, int count)
{
	cout << "You hit the bomb(" << bomb << ") in" << count << " steps." << endl;
	cout << "Game Over" << endl << endl;
	
	return true;
}
void PlayGame(int bomb, int min, int max)
{
	bool over = false;
	int count = 0, num;
	
	do 
	{
		num = getNum(min,max);
		count++;
		
//	If num is equal to the bomb then call gameOver to end it
		if(num == bomb)
		{
			gameOver(bomb,count);
			over = true;
		}

//	If num is less than bomb then assign the minimum value to be one greater than num
		else if(num < bomb)
			min = num+1;
		else 
			max = num -1;
	}while(!over);
}
