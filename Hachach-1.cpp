/***************************
*	1410
*	Program 1
*	Student: Jason Hachach
*	TA: Shengrong Yin
*	Date: 2/1/2016
***************************/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int NumFeet, NumInch, TotalInch;
	double centimeters;
	
	cout << "Enter the height for the number of feet: ";
	cin >> NumFeet,
	cout << endl;
	
	
	cout << "Enter the height for the number of inches: ";
	cin >> NumInch;
	cout << endl << endl;
	
	TotalInch = NumFeet*12 + NumInch;
	centimeters = TotalInch *2.54;
	
	cout << "The height is " << NumFeet <<  " feet and " << NumInch << " inch(es)." << endl;
	cout << "The height in inches = " << TotalInch << endl;
	cout << "The height entered is equal to " << centimeters << " centimeters" << endl;
	
	system("pause");
	return 0;
}
