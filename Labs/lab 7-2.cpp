#include <iostream>
using namespace std;

int main()
{
	int input =0;
	
	cout << "Select a cell phone carrier" << endl;
	cout << "1. AT&T" << endl;
	cout << "2. T-Mobile" << endl;
	cout << "3. Verizon" << endl;
	cout << "4. Sprint" << endl;
	cout << ">>";
	cin >> input;

	switch(input)
	{
		case 1: cout << "You chose AT&T" << endl;
			break;
		case 2: cout << "You chose T-Mobile" << endl;
			break;
		case 3: cout << "You chose Verizon" << endl;
			break;
		case 4: cout << "You chose Sprint" << endl;
			break;
		default: cout << "Invalid Choice" << endl;
	}
	
	char grade;
	cout << "Insert your clss letter grade >> ";
	cin >> grade;
	
	switch(grade)
	{
		case 'A':
		case 'B':
		case 'C':
		case 'D': cout << "You passed!" << endl; 
			break;
		default: cout << "You Failed!" << endl;
	}
	cout << endl;
	
	cout << "Insert your class letter grade--> ";
	cin >> grade;
	if(grade == 'A' || grade == 'a' || grade == 'B' ||grade == 'b' || grade == 'C' || grade == 'c' || grade == 'D' || grade == 'd')
		cout << "You Passed!" << endl;
	else 
		cout << "You Failed!" << endl;
		
	return 0;
}
			
