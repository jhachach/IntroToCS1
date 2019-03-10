#include <iostream>
using namespace std;

void getInput(int &n1, int &n2, int &n3, int &n4);
int computeMax(int n1, int n2, int n3, int n4);
int computeMin(int n1, int n2, int n3, int n4);
void computeSum( int n1, int n2, int n3, int n4, int &sum);
void Print( int max, int min, int sum);


int main()
{
	int num1, num2, num3, num4;
	int max, min, sum;
	
	getInput(num1, num2, num3, num4);
	max = computeMax(num1, num2, num3, num4);
	min = computeMin(num1, num2, num3, num4);
	computeSum(num1, num2, num3, num4, sum);
	Print(max,min,sum);
	
	return 0;
}
void getInput(int &n1, int &n2, int &n3, int &n4)
{
	cout << "Please enter a number -->";
	cin >> n1;
	cout << "Please enter second number --> ";
	cin >> n2;
	cout << "Please enter third number --> ";
	cin >> n3;
	cout << "Please enter fourth number --> ";
	cin >> n4;
	
}

int computeMax(int n1, int n2, int n3, int n4)
{
	int max = n1;
	
	if (n2 > max)
		max = n2;
	if(n3 > max)
		max = n3;
	if(n4 > max)
		max = n4;
		
	return max;
}

int computeMin(int n1, int n2, int n3, int n4)
{
	int min = n1;
	
	if(n2 < min)
		min = n2;
	if(n3 < min)
		min = n3;
	if(n4 < min)
		min = n4;
		
	return min;
}

void computeSum( int n1, int n2, int n3, int n4, int &sum)
{
	sum = n1 + n2 + n3 + n4;
}

void Print( int max, int min, int sum)
{
	cout << "Maximum: " << max << endl;
	cout << "Minimum:  " << min << endl;
	cout << "Sum: " << sum << endl;
}
