#include<iostream>
using namespace std;
class student{
private:
	int id;
	string name;
public:
	student(int i,string n)
	{
		id=i;
		name=n;
	}
	student(const student &s)
	{
		id=s.id;
		name=s.name;
	}
	void display()
	{
		cout<<"ID:"<<id<<endl;
		cout<<"name:"<<name<<endl;
	}
};
int main(){
	student s1(101,"Deepthi");
	student s2(s1);
	cout<<"original object:"<<endl;
	s1.display();
	cout<<"\ncopied object:"<<endl;
	s2.display();
	return 0;
}
