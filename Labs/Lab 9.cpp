#include <iostream>

using namespace std;

int getNumber();
int add(int a, int b);
int subtract(int a, int b);
void output(int a, int b);

int main()
{
	int number1, number2, number3;
	int sum, difference;
	
	number1 = getNumber();
	number2 = getNumber();
	
	sum = add(number1,number2);
	difference = subtract(number1, number2);
	
	output(sum, difference);
	
	system("pause");
}

int getNumber()
{
	int num1;
	cin >> num1;
	
	return num1;
}
int add(int a, int b)
{
	return a+b;
}

int subtract(int a, int b)
{
	return a-b;
}

void output(int a, int b)
{
	cout << "Sum: " << a << endl;
	cout << "Difference: " << b << endl;
}
