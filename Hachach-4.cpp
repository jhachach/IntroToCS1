#include <iostream>
using namespace std;

double calcBill (int channels, char type);


const double baseResFee = 29.99;
const double baseBusFee = 49.99;
const int ResAddChan = 10;
const int BusAddChan = 20;

int main()
{
	char accType;
	int accnumber, addChans;
	double total;

	do
	{	
		cout << "Please enter your Account Number ---> ";
		cin >> accType >> accnumber;
		
		if(accType == 'R' || accType == 'r' || accType == 'b' || accType == 'B')
			if(accnumber < 99999)
			{
				cout << "How many channels would you like to add? ";
				cin >> addChans;
			}
			else
				cout << "Error Account number is not found" << endl << endl;
		else
			cout << "Invalid Account Type. Please try again" << endl << endl;

		
	}while((accType != 'R' && accType != 'r' && accType != 'b' && accType != 'B') || accnumber > 99999);
	
	total = calcBill(addChans,accType);
	
	cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
	cout << "Account Number: " << accType << accnumber << endl;
	cout << "Amount due: $" << total << endl;
	
	system("pause");
	
	return 0;
	
	
}

double calcBill(int channels, char type)
{
	double total;
	double tax = 0.15;
	switch(type)
	{
		case 'r':
			total = baseResFee + (ResAddChan * channels); break;
		
		case 'R': 
			total = baseResFee + (ResAddChan * channels); break;
		
		case 'B':
			total = baseBusFee + (BusAddChan * channels); break;
		
		case 'b':
			total = baseBusFee + (BusAddChan * channels); break;		
	}
	total = total + (total * tax);
	return total;
}
