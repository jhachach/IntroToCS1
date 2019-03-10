// Jason Hachach
// TA: Shengrong Yin
// COSC 1410
// 5/2/2016

#include <iostream>

using namespace std;

class dynArray
{
	public:
		void showArray();
		void addElem(int num);
		void removeElem();
		int menu();
		dynArray();
	private:
		void doubleSize();
		void halfSize();
		int *a;
		int arraySize, num_of_elements;
		
};

int main()
{
	dynArray a;
	bool done = false;
	while(!done)
	{
//										Give user input
		int choice = a.menu();
		switch(choice)
		{
			case 1:
				int num;
				cout << "Enter the integer you would like to enter: ";
				cin >> num;
				a.addElem(num); break;
			case 2:
				a.removeElem(); break;
			case 3:
				a.showArray(); break;
			case 4:
				done = true; break;
			default:
				cout << "Invalid Input. Please try again" << endl;			
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

dynArray::dynArray()
{
	arraySize = 2;
	a = new int[arraySize];
	num_of_elements =0;
}
dynArray::menu()
{
	int choice;
	
	cout << "1. Add Element" << endl;
	cout << "2. Remove Element" << endl;
	cout << "3. Show Array" << endl;
	cout << "4. Quit" << endl;
	cout << "Enter Choice -->";
	cin >> choice;
	
	return choice;
}

void dynArray::showArray()
{
	for(int i = 0; i < num_of_elements; i++)
		cout << "Array[" << i << "] = " << a[i] << endl;
	cout << endl;
} 

void dynArray::addElem(int num)
{
// 										Add num to end of array
	a[num_of_elements] = num;
	num_of_elements++;
	
// 										If the amount of numbers in the array matches the size double size
	if(num_of_elements == arraySize)
		doubleSize();
	showArray();
}

void dynArray::removeElem()
{
//										If array is empty, print out error message
	if(num_of_elements == 0)
		cout << "\nArray is empty." << endl;
	else
	{
		num_of_elements--;
		int *tempList = new int[num_of_elements];
		for(int i = 0; i <num_of_elements; i++)
			tempList[i] = a[i];
		delete []a;
		a = tempList;
		
//										Reduce size by half is size is 4 times more than elements
		if(num_of_elements == arraySize/4)
			halfSize();
		
		showArray();
	}
}
void dynArray::doubleSize()
{

	int *doubleList = new int[2*arraySize];
	
	for(int i = 0; i < num_of_elements; i++)
	{
		doubleList[i] = a[i];
	}

	delete []a;
	a = doubleList;
	arraySize = arraySize*2;
	cout << "\nArray size doubled to " << arraySize << endl;
	
}
void dynArray::halfSize()
{
	int *halfList = new int[arraySize/2];
	
	for(int i = 0; i < num_of_elements; i++)
	{
		halfList[i] = a[i];
	}

	delete []a;
	a = halfList;
	arraySize = arraySize/2;
	cout << "\nArray size reduced to " << arraySize << endl;
}
