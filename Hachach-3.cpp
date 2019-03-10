// Jason Hachach
// Cosc 1410 Section 14154
// TA: Shengrong Yin
// 2/24/2016

#include <iostream>
using namespace std;

void DrawDiagonal(int length);
void DrawTriangle(int length);
void DrawGrid(int length);

int main()
{
	int option, size;
	
	do
	{
		cout << "Input the size of diagram: ";
		cin >> size;
		
		if(size < 1)
			cout << "Size beeds to be greater than 0" << endl << endl;
		
	}while(size <= 0);
	
	do
	{	
		cout << " Which Diagram do you want to print out" << endl;
		
		cout << "1 - Diagonal" << endl;
		cout << "2 - Triangle" << endl;
		cout << "3 - Grid Shape" << endl;
	
		cout << "-->";
		cin >> option;
	
		if(option == 1)
			DrawDiagonal(size);
		else if(option == 2)
			DrawTriangle(size);
		else if(option == 3)
			DrawGrid(size);
		else
		{
			cout << "Not a valid choice. Please choose from one of the following." << endl << endl;
			
		}
	}while(option < 1 || option > 3);	
	
	system("pause");
	
	return 0;
}

void DrawDiagonal(int length)
{
	for(int i=0; i < length; i++)
	{
		for(int k = 0; k <= i; k++)
		{
			cout << "  ";
		}
		cout << "#" << endl;
	}
	
	
}

void DrawTriangle(int length)
{
	for(int i = 0; i < length; i++)
	{
		for(int k = 0; k <= i; k++)
			cout << "*  ";
		cout << endl;
	}
}

void DrawGrid(int length)
{
	for( int i = 0; i <= length; i++)
	{
		for(int k = 0; k <= length ; k++)
		{
			if(k == i || length -i == k)
				cout << "O ";
			else
				cout << ". ";
		}
		cout << endl;
	}
}
