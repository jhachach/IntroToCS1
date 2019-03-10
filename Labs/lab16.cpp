	#include <iostream>
#include <cstdlib>


using namespace std;
const int num_of_rows = 3;
const int num_of_cols = 3;
void printInv(int stock[][num_of_cols]);

int main()
{
	enum carType{GM, FORD, TOYOTA
	};
	enum colorType{RED, BROWN, BLACK
	};
	

	
	int inStock[num_of_rows][num_of_cols];
	for(int r =0; r < num_of_rows; r++)
	{
		for(int c = 0; c < num_of_cols; c++)
		{
			inStock[r][c] = 4; 
		}
	}
	printInv(inStock);
}

void printInv(int stock[][num_of_cols])
{
	for(int r = 0; r < num_of_rows; r++)
	{
		for(int c = 0; c < num_of_cols; c++)
			cout << stock[r][c] << " ";
		cout << endl;
		
	}
}
