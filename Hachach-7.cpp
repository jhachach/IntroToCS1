#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

const int NumRows = 6;
const int NumCols = 3;

void Reset(int seat[][NumCols]);
void print(int seat[][NumCols]);
void getSeat(int seat[][NumCols], int row, int col);
void getSeat(int seat[][NumCols], int row);
bool ifFull(int seat[][NumCols]);

int main()
{
	int a[NumRows][NumCols];
	int row;
	char col;
	bool done = false;

	for(int i =0; i < NumRows; i++)
		for(int k = 0; k < NumCols; k++)
			a[i][k] = 45;
			
	print(a);
	
	do
	{
		cout << "\nPlease enter the seat or row you want to reserve:  ";
		cin >> row >> col;
		if(col == '*')
		{
			getSeat(a, row);
			print(a);
		}
		else if(row == 0)
			Reset(a);
		else if(row = -1)
			done = true;
		else
		{
			getSeat(a, row, (int)col);
			print(a);
			done = ifFull(a);
		}
		
	}while(!done);
	
	cout << "Program will now exit" << endl;
	system("pause");
	
	return 0;

}

void print(int seat[][NumCols])
{
	char col ='A';
	cout << "- = Available	R = Reserved" << endl;
	cout << 0 << " ";
	for(int i = 0; i < NumCols; i++)
	{
		cout << col  << " ";
		col++;
	}
	cout << endl;
	for(int i = 0; i < NumRows; i++)
	{
		cout << i +1 << " ";
		for(int k = 0; k < NumCols; k++)
		{
			cout << (char)seat[i][k] << " ";
		}
		
		cout << endl;
	}
}

void Reset(int newSeat[][NumCols])
{
	for(int i =0; i < NumRows; i++)
		for(int k = 0; k < NumCols; k++)
			newSeat[i][k] = 45;
}

void getSeat(int seat[][NumCols], int row, int col)
{
	col= col -65;
	row = row -1;
	cout << col;
	if(seat[row][col] == 82)
		cout << "Seat is already Reserved" << endl;
	else
		seat[row][col] = 82;

}

void getSeat(int seat[][NumCols], int row)
{
	bool available = false;
	int i = 0;
	while(i < NumCols && !available)
	{
		if(seat[row][i] == 45)
		{
			available = true;
			for(int k = i; k < NumCols; k++)
			{
				seat[row][k] = 82;
			}
		}
	}
	if(!available)
		cout << "Error! Row is already Full" << endl;
}

bool ifFull(int seat[][NumCols])
{
	int sum;
	for(int i = 0; i < NumCols; i++)
	{
		for(int k = 0; k < NumCols; k++)
		{
			sum += seat[i][k];
		}
	}
	if(sum /(NumCols * NumRows) == 82)
		return true;
	else
		return false;
}
