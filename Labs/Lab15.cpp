#include <iostream>
#include <time.h>
#include <cstdlib>
#include <cstdio>
#include <iomanip>

using namespace std;
const int MIN = 0;
const int MAX = 100;

int getNum(const int min, const int max);
void printArray(int a[], int size);
int search(int a[], int size, int x);
int main()
{
	int index, x;
	int a[100];
	int size = 100;
	
	srand(time(NULL));
	
	for(int i = 0; i < size; i++)
	{
		a[i] = getNum(MIN, MAX) + a[i-1];
	}
	
	printArray(a, size);
	
	cout << "Please enter a search value: ";
	cin >> x;
	index = search(a,size, x);
	cout << endl << "Array[" << index << "] = " << a[index] <<endl;
	
	return 0;
}

int getNum(const int min, const int max)
{
	return rand() % max + min;
}

void printArray(int a[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
		if((i+1) % 10 == 0 )
			cout << endl;
	}
	cout << endl;
}

int search(int a[], int size, int x)
{	
	int mid;
	int lb = 0;
	int ub = size-1; 
	while(lb <= ub) 
	{
		mid = (lb + ub) / 2; 
		if(x == a[mid])
			return mid;
		else if(x < a[mid])
			ub = mid - 1;
		else
			lb = mid + 1;
	}
	
	return -1;
}
