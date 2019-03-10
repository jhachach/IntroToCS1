#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
	int size = 95;
	int character[size][2];
	string userinput;
	
			
	for(int i = 0; i < size; i++)
	{
		character[i][0] = ' ' + i;
		character[i][1] = 0;
		cout << (char)character[i][0] << "  " << character[i][1] << endl;
	}
	cout << "enter a statement ";
	getline(cin,userinput);
	cout << userinput;
	
	for(int i = 0; i < size; i++)
	{
		for(int k =0 ; k < userinput.size(); k++)
		{
			if(userinput[k] == character[i][0])
				character[i][1]++;
		}
	}
	for(int i = 0; i < size; i++)
		cout << (char)character[i][0] << "  " << character[i][1] << endl;
	
	return 0;
}
