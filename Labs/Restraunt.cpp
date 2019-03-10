#include <iostream>
using namespace std;

int main()
{
	int Hamburg, Hdog, Drink = 0;
	double HamTotal, DogTotal, DrTotal = 0.0;
	double Tax = .0825;
	double Total = 0;
	
//	User input for Hamburgers	
	cout << "How many hamburgers do you want? " ;
	cin >> Hamburg;
	cout << endl;
	
// 	Input for Hotdogs	
	cout << "How many hotdogs do you want? ";
	cin >> Hdog;
	cout << endl;
	
// 	Input for Drinks	
	cout << "How many drinks do you want? " ;
	cin >> Drink;
	cout << endl << endl;
	
//	Calculate Totals	
	HamTotal = Hamburg * 1.5;
	DogTotal = Hdog * 1.35;
	DrTotal = Drink * 1.25;
	
//	Set outpout format
	cout.setf(ios::fixed | ios::showpoint);
	cout.precision(2);
	
// Output indiviudal Totals	
	cout << "Hamburger Total: $" << HamTotal << endl;
	cout << "Hotdog Total: $" << DogTotal << endl;
	cout << "Drink Toal: $" << DrTotal << endl << endl;
	
//	Calculate complete totals	
	Total = (HamTotal + DogTotal + DrTotal);
	Tax = Tax * Total;
	Total = Tax + Total;
	
// Output final totals and tax
	cout << "Tax Total: $" << Tax << endl;
	cout <<  "FInal Total $" << Total << endl;
			
	return 0;	
}
