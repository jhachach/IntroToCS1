#include <iostream>
using namespace std;

double unitPrice(int len, int wid, double price);
double unitPrice(int D, double price);
void getInput(int &diameter, double &roundPrice, int &length, int &width, double &recPrice);
void output(double unitPriceRound, double unitPriceRec);

int main()
{
	int diameter, length, width;
	double priceRound, unitPriceRound, priceRec, unitPriceRec;
	
	getInput(diameter, priceRound, length, width, priceRec);
	
	
	
	unitPriceRec = unitPrice(length, width, priceRec);
	unitPriceRound = unitPrice(diameter, priceRound);
	
	    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << endl 
         << "Round pizza: Diameter = "
         << diameter << " inches\n"
         << "Price = $" << priceRound
         << " Per square inch = $" << unitPriceRound
         << endl
         << "Rectangular pizza: Length = "
         << length << " inches\n"
         << "Rectangular pizza: Width = "
         << width << " inches\n"
         << "Price = $" << priceRec
         << " Per square inch = $" << unitPriceRec
         << endl;

    output(unitPriceRound, unitPriceRec);
    system("pause");
    return 0;
}

double unitPrice(int len, int wid, double price)
{
	double unitPrice;
	int area;
	
	area = len * wid;
	unitPrice = price / area;
	
	return unitPrice;
}

double unitPrice(int D, double price)
{
	double unitPrice;
	int area;
	int r = D/2;
	
	area = 3.14 * (r*r);
	unitPrice = price / area;
	
	return unitPrice;
}

void getInput(int &diameter, double &roundPrice, int &length, int &width, double &recPrice)
{
	cout << "Wlcome to the Pizza Consumers Union. \n";
	
	cout << "Enter the diameter in inches of a round pizza ";
	cin >> diameter;
	cout << "Enter the price of a round pizza: $";
	cin >> roundPrice;
	
	cout << "Enter length and width in inches. \n";
	cin >> length >> width;
	cout << "Enter price of the rectangular pizza: $";
	cin >> recPrice;
	cout << endl;
}

void output(double unitPriceRound, double unitPriceRec)
{
 
    if (unitPriceRound < unitPriceRec)
        cout << "The round one is the better buy.\n";
    else
        cout << "The rectangular one is the better buy.\n";
    cout << "Buon Appetito!\n";
}
