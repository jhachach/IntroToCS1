#include <iostream>
using namespace std;

int getNumber(int LowBound, int HighBound);

int main()
{	
	cout << "Your number is " << getNumber(0,100) << endl;
	
	return 0;
}

int getNumber(int LowBound, int HighBound)
{
	int num1;
	int WrongAttempts = 0;
	
	do
	{
		cout << "Enter a number between 0 and 100: ";
		cin >> num1;
		
		if(num1 >= LowBound && num1 <= HighBound)
			return num1;
		else 
		{
			cout << "Number is not between " << LowBound <<" and "  << HighBound << endl << endl;
			WrongAttempts++;
			
			if(WrongAttempts % 3 == 0)
				cout << "WARNING! You have entered 3 wrong entries." << endl << endl;
		}
	}while(num1 <0 || num1 > 100);
}
