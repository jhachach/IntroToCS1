#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>

using namespace std;

struct customer
{
	double balance;
	int ID;
};

class bankAccount
{
	public: 
		customer accounts[100];
		bankAccount(int totalAccnt);
		int getNumAccounts(){return numAccounts;}
	private:
		int numAccounts;
};

void search(int high, bankAccount bank, int id);

int main()
{
	srand(time(NULL));
	bankAccount bank = bankAccount(40);
	int id;
	
	
	for(int i = 0; i < bank.getNumAccounts(); i++)
	{
		if(i == 0)
			bank.accounts[0].ID = rand()%101 +1000000;
		else
			bank.accounts[i].ID = bank.accounts[i-1].ID + rand()%101;
		bank.accounts[i].balance = (rand()%1000001) *.078;
	}
	for (int i = 0; i < bank.getNumAccounts(); i++)
	cout << i+1 << " " << bank.accounts[i].ID << " " << bank.accounts[i].balance << endl;
	do
	{
		cout << "Enter the account number (0 to exit): ";
		cin >> id;
		if(id != 0)
			search(bank.getNumAccounts() -1, bank, id);
	}while(id !=0);
}

bankAccount :: bankAccount(int totalAccnt)
{
	numAccounts = totalAccnt;
}
void search(int high, bankAccount bank, int id)
{
	int highbound = high, low = 0, mid, comparisons = 0;
	bool found = false;

	while(low <= highbound && !found)
		{
			mid = (low + highbound)/2;
			comparisons++;
			if(id == bank.accounts[mid].ID)
			{
				found = true;
				cout << comparisons << " Comparisons were used to find ID " << id << " with balance " << bank.accounts[mid].balance << endl << endl; 
			}
			else if(id < bank.accounts[mid].ID)
				highbound = mid -1;
			else
				low = mid +1;
			
		}
}

