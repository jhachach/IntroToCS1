#include <iostream>
#include <iomanip>
#include <string.h>
#include <fstream>

using namespace std;

struct student
{
	int ID;
	string First, Last;
	char Letter;
	double grade1, grade2, grade3, avg;
};

class StudentList
{
	public:
		void sort(int size);
		void insert(int id, string first, string last, double g1,double g2, double g3, int index);
		void output();
		student getStudent(int index);
		StudentList();
		
	private:
		student students[100];	
};

int main(int argc, char* argv[])
{
	int i = 0;
	int ID, size =0;
	string first, last;
	double g1, g2, g3, avg;
	StudentList myStudent = StudentList();
	ifstream infile;
	ofstream outfile;
	
	infile.open(argv[1]);
	
	if(infile.fail())
	{
		cout << "File did not open" << endl;
		exit(1);
	}
	
	infile >> ID >> first >> last >> g1 >> g2 >> g3;
	while(!infile.eof())
	{
		myStudent.insert(ID,first,last,g1,g2,g3,i);
		i++;
		infile >> ID >> first >> last >> g1 >> g2 >> g3;
		size++;
	}
	myStudent.sort(size);
	
	infile.close();
	myStudent.output();
	
	
	
	
}


void StudentList::insert(int id, string first, string last, double g1,double g2, double g3, int index)
{
	students[index].ID = id;
	students[index].First = first;
	students[index].Last = last;
	students[index].grade1 = g1;
	students[index].grade2 = g2;
	students[index].grade3 = g3;
	students[index].avg = (g1 +g2 +g3)/3;
	
	if(students[index].avg >= 90)
		students[index].Letter = 'A';
	else if(students[index].avg >= 80)
		students[index].Letter = 'B';
	else if(students[index].avg >= 70)
		students[index].Letter = 'C';
	else if(students[index].avg >=60)
		students[index].Letter = 'D';
	else
		students[index].Letter = 'F';
}
	
void StudentList::output()
{
	ofstream outfile;
	outfile.open("prog10out.txt");
	
	cout.setf(ios::fixed | ios::showpoint);
	cout.precision(2);
	
	outfile.setf(ios::fixed | ios::showpoint);
	outfile.precision(2);
	for(int i = 0; students[i].ID != 0; i++)
	{
		outfile << students[i].ID << " " << students[i].First << " " << students[i].Last << " " << students[i].grade1 << " "
			<< students[i].grade2 << " " << students[i].grade3 << " " << students[i].grade3 << " " << students[i].avg << " " 
			<< students[i].Letter << endl;
		cout<< students[i].ID << " " << students[i].First << " " << students[i].Last << " " << students[i].grade1 << " "
			<< students[i].grade2 << " " << students[i].grade3 << " " << students[i].grade3 << " " << students[i].avg << " " 
			<< students[i].Letter << endl;
	}
}
void StudentList::sort(int size)
{
	
	int min;
	string tmpf, tmpl;
	double tmp1, tmp2, tmp3,tmpa;
	char tmpc;
	for(int i = 0; i < size -1; i++)
	{
		min = i;
		
		for(int j = i+1; j < size; j++)
		{
			if(students[j].avg < students[min].avg)
				min = j;
			j++;
				
		}
		if(min != 1)
		{
			tmpf = students[i].First;
			students[i].First = students[min].First;
			students[min].First = tmpf;
			
			tmpl = students[i].Last;
			students[i].Last = students[min].Last;
			students[min].Last = tmpl;
			
			tmp1 = students[i].grade1;
			students[i].grade1 = students[min].grade1;
			students[min].grade1 = tmp1;
			
			tmp2 = students[i].grade2;
			students[i].grade2 = students[min].grade2;
			students[min].grade2 = tmp2;			
			
			tmp1 = students[i].grade3;
			students[i].grade3 = students[min].grade3;
			students[min].grade3 = tmp3;			
						
			tmpa = students[i].avg;
			students[i].avg = students[min].avg;
			students[min].avg = tmpa;
			
			tmpc = students[i].Letter;
			students[i].Letter = students[min].Letter;
			students[min].grade1 = tmpc;
			
					
			
		}
	}
}

StudentList::StudentList()
{
	for(int i =0; i < 100; i++)
	{
		students[i].ID = 0;
		students[i].First = "";
		students[i].Last = "";
		students[i].grade1 = 0;
		students[i].grade2 = 0;
		students[i].grade3 = 0;
		students[i].avg = 0;
	}
}
