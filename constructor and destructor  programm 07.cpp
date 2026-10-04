#include<iostream>
using namespace std;
class student{
public:
	student()
	{
			cout<<"constructor is called"<<endl;
	}
	~student()
	{
			cout<< "Desturctor is  called"<<endl;
	}
};
int main()
{
	student s;
	cout<<"object is created "<<endl;
	return 0;
}
