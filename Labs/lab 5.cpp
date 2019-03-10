#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int coursenumber;
	int totalCourses = 0;
	
	cout << "What classes would you like to add? ";
	cin >> coursenumber;
	
	while(coursenumber > 0)
	{
		cout << "COSC " << coursenumber << " has been added" << endl;
		totalCourses++;
		cout << "What class would you like to add? ";
		cin >> coursenumber;
	}
	cout << "You are enrolled in "	<< totalCourses << " class(es)" << endl`;
	
	system("pause");
	
		
	return 0;
}
