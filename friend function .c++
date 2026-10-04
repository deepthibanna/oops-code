#include<iostream>
using namespace std;
class  sum
{
private:
		int a,b;
public:
		void getdata(){
     	cout<<"enter the a and b values";
		cin>> a>>b;
		}
		friend int add(sum s);
};
	int add(sum s){
	return s.a+s.b;
	}
	int main()
	{
		sum s;
		s.getdata();
     	cout << "Addition = " << add(s);

		return 0;
		 
	}
