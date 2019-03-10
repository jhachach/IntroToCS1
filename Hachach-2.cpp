// Jason Hachach
// TA: Shengrong Yin
// 2/17/2016
// COSC 1410

#include <iostream>

using namespace std;
int main()
{
	int year, month, days;
	int entries = 0;
	bool LeapYear, done;
	char answer;
	do
	{
		do
		{
			cout << "Please enter a year ---> ";
			cin >> year;
			
			if (year < 1)
				cout << "Invalid Year Entered" << endl << endl;
			else
			{
				cout << "Please enter a month ---> ";
				cin >> month;
				cout << endl;
				
				if( month < 1 || month > 12)
					cout << "Invalid month. Please enter a month between 1 and 12" << endl << endl;
					
				else if ( month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 )
						cout << "The month " << month << " of " << year <<" has 31 days." << endl << endl;
					
				else if(month == 2)
				{
					if(year % 400 == 0)
						LeapYear = true;
					else if(year % 100 == 0)
						LeapYear = false;
					else if(year % 4 == 0 )
						LeapYear = true;
					else
						LeapYear = false;
						
					if (LeapYear)
						cout << "The month " << month << " of " << year << "  has 29 days and is a leap year." << endl;
					else
						cout << "The month " << month << " of " << year << " is not a leap year." << endl;		
				}
				else
					cout << "The month " << month << " of " << year << " has 30 days." << endl;
			}	
			if(year > 0)
				if(month > 0 && month < 13)
					done = true;
			else 
				done = false;
		}while(!done);
		
		cout << "Would you like to enter another year? (Y/N) ";
		cin >> answer;
		cout << endl;
		
		if (answer == 'y'|| answer =='Y')
			done = false;			
		else
			done = true;
		
		entries++;
	}while(!done);
	
	cout << "Number of entries: " << entries;
	system("PAUSE");
	
	return 0;
}
