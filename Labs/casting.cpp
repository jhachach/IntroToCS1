#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int test1, test2, test3;
	double avg1, avg2, avg3;
	
	cout << "Enter three test scores" << endl;
	cin >> test1 >> test2 >> test3;
	
	avg1 = (test1 + test2 + test3)/3;
	avg2 = (static_cast<double> (test1+ test2 + test3 )/3);
	avg3 = ((double)(test1 + test2 + test3)/3);
	
	cout << "Average 1 = " << avg1 << endl;
	cout << "Average 2 = " << avg2 << endl;
	cout << "Average 3 = " << avg3 << endl;
	
	return 0;
}
