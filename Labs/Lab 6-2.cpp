#include <iostream>

using namespace std;

int main()
{
	
	int num, sum, i = 0;
	
	cout << "**********SUM OF THREE NUMBERS *************" << endl << endl;
	cout  << "For Loop" << endl;
	
	while(i < 3)
	{
		cout << "Enter Number " << i+1 << ":";
		cin >> num;
		sum += num;
		i++;
	}
	
	cout << "The sum is :" << sum;
	
}
