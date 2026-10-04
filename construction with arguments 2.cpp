#include<iostream>
using namespace std;
class Account{
	string holder;
	double balance;
public:

	holder=name;
	balance=initialDeposit;
	cout<<"Account opened for"<<holder<<"with balance"<<endl;
};

void showBalance(){
	cout<<holder<<"s balance:"<<balance << endl;
}


int main(){
	Account acc1("Ravi",5000.0);
	Account acc2("Priya",10000.0);
	acc1.showBalance();
	acc2.showBalance();
	return 0;
}

