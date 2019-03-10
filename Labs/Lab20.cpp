#include<iostream>

using namespace std;

/*class xClass
{
	public:
		void func();
		void print() const;
		xClass();
		xClass(int, double);
	private:
		int u;
		double w;
};

	A. 2
	B. 2
	C. 2
	D. void func()
		{
			u = 10;
			w = 15.3;
		}
	E	void print()
		{
			cout << u << " " << w << endl;
		}
	f	xcClass()
		{
			u =0;
			w =0;
		}
	g	x.print();
	h	xClass t = xClass(25, 35.0);		
*/	

class testClass
{
	public: 
		int sum();
		void print() const;
		testClass();
		testClass(int a, int b);
	private:
		int x;
		int y;
};
class romanType
{
	public:
		void convert(char[] a);
		void print();
};
int main()
{
	testClass a = testClass();
	testClass b = testClass(35,65);
	cout << a.sum() << " " << b.sum() << endl;
	a.print();
	b.print();
	
}

testClass:: sum()
{
	return x +y;
}

void testClass:: print() const
{
	cout << x << " " << y<< endl;
}

testClass:: testClass()
{
	x = 0;
	y = 0;
}

testClass:: testClass(int a, int b)
{
	x = a;
	y = b;
}
