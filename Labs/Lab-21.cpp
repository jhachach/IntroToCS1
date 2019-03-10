#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream inputFile;
	ofstream outputFile;
	string firstname, lastname;
	double testscore[5];
	double avg = 0;
	
	inputFile.open("test.txt");
	if(inputFile.fail())
		cout << "error";
	outputFile.open("lab21-output.txt");
	
	outputFile << fixed << showpoint;
	outputFile << setprecision(2);
	inputFile >> firstname >> lastname;
	
	for(int i =0; i <5; i++)
	{
		inputFile >> testscore[i];
	}
	

	
	for(int i =0; i <5; i++)
	{
		avg += testscore[1];
	}
	avg = avg/5;
	
	outputFile

	inputFile.close();
	outputFile.close();
	
	return 0;
	
	
}
