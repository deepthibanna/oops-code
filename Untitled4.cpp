#include<iostream>
using namespace std;
class student
{
public:
	int marks;
	student()
	{
		marks=0;
	}
	student(int m){
		marks =m
	}
	student(int m,int n
	{
		marks=m+n;
	}
	student(int m, int n,int x)
	{
		marks=m+n+x;
	}
	void display()
	{
		cou<<marks<<endl;
	}
};
int main()
{
	student s1;
	s1.display()
	s1.display(10)
    s1.dispaly(10,20)
    s1.display(10,20,30)
    return 0;
}
