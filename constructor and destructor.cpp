#include<iostream>
using namespace std;
class HotelRoom{
	int roomNo;
public:
	HotelRoom(int r){
		roomNo=r;
		cout<<"Room"<<roomNo<<"booked."<<endl;
	}
      ~HotelRoom(){
      	cout<<"Room"<<roomNo<<"checked out."<<endl;
	  }
};
int main()
{
	cout<<"guest checking in...."<<endl;{
		 HotelRoom r1(101);
		 cout<<"guest staying..."<<endl;
	}
	cout<<"Guest has left the hotel."<<endl;
	return 0;
}
