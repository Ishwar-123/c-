#include<iostream>
#include<string>
using namespace std;
class abc{
	public:
		string car="BMW";
};
class xyz:public abc{
	public:
		int car_year=1991;
};
int main(){
	abc obj;
	xyz obj1;
	cout<<obj.car<<endl;
	cout<<obj1.car_year;
}

