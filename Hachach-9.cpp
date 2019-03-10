#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>

using namespace std;

struct employee
{
	char first[30];
	char last[30];
	double rate;
	int id;
};

class company
{
	private:
		employee employees[100];
		int numEmployee;
	public:
		void insert(int id, char firstname[], char lastname[], double rate);
		void search(int id);
		void search(char lastname[]);
		void print();
		void init();
};

void readIn(company& comp);

int main()
{
	int choice = 0;
	int id;
	char last[30];
	company myComp = company();
	
//	Read in from file	
	readIn(myComp);
		
	while(choice < 4)
	{
		cout << "Select your option:" << endl;
		cout << "1. Search employee by lastname" << endl;
		cout << "2. Search employee by ID" << endl;
		cout << "3. Print list of all employees" << endl;
		cout << "4. Exit" << endl;
		cout << "-> ";
		cin >> choice;
		
		switch(choice)
		{
			case 1:
				cout << "Enter the employee's last name: ";
				cin >> last;
				myComp.search(last);
					break;
			case 2:
				cout << "Enter the ID of the employee: ";
				cin >> id;
				myComp.search(id);
					break;
			case 3:
				myComp.print();
					break;
			default:
				"The program will now exit.";
		}
		
		cout << endl;
	} 
	system("pause");
	return 0;	
}

void company::insert(int id, char firstname[], char lastname[], double rate)
{
	int i = 0;
	bool done = false;
	
	while(!done)
	{
		if(employees[i].id == 0)
		{
			strcpy(employees[i].first, firstname);	
			strcpy(employees[i].last, lastname);
			employees[i].id = id;
			employees[i].rate = rate;
			
			done = true;
		}
		else
			i++;
	}		
}

void company :: search(int id)
{
	bool found = false;
	for(int i = 0; i < 100; i++)
	{
		if(employees[i].id == id)  
		{
			cout << "Name: "  << employees[i].first << " " << employees[i].last << ", ID: " 
				<< employees[i].id << ", Salary: $" << employees[i].rate << endl;
			found = true;
		}
			
	}
//	If id is not found print out error
	if(!found)
		cout << "ID not found";
	cout << endl << endl;
}

void company :: search(char lastname[])
{
	bool found = false;
	for(int i = 0; i < 100; i++)
	{
		
//	Compare string to the parameter
		if(strcmp(employees[i].last, lastname) == 0)
		{	
			cout << "Name: "  << employees[i].first << " " << employees[i].last << " ID: " 
				<< employees[i].id << " Salary" << employees[i].rate<< endl;
			found = true;
		}	
	}
	
//	If last name is not found print error
	if(!found)
		cout << "Last name not found.";
	cout << endl << endl;
}
void company :: print()
{
	int i = 0;
	
	cout.setf(ios::showpoint | ios::fixed);
	cout.precision(2);
	
	cout << "\tFirst Name     " << "Last Name    " << "Emp ID    " << "Salary Rate" << endl;

	while(employees[i].id != 0)
	{
		cout << "\t " << setw(9) << employees[i].first << "    " << setw(9) << employees[i].last << "    " << setw(5) << employees[i].id
			<< "    " << setw(11) << employees[i].rate << endl;
		i++;
	}
}
void company :: init()
{
	for(int i = 0; i < 100; i++)
	{
		strcpy(employees[i].first, " ");
		strcpy(employees[i].last, " ");
		employees[i].id = 0;
		employees[i].rate = 0;
	}
}

void readIn(company& comp)
{
	char fname[30], lname[30];
	int id;
	double salary;
	
//	Initialize array 
	comp.init();
	ifstream myfile("testdata.txt");
	if(myfile.is_open())
	{
		myfile >>id >>fname >> lname >> salary;
		while(!myfile.eof())
		{
			comp.insert(id,fname,lname,salary);
			myfile >> id >> fname >> lname >> salary;
		}
		myfile.close();
	}
	else
		cout << "Unable to open file";
}
