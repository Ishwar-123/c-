#include<iostream>
#include<string>
using namespace std;
-`
class abc{
	public:
		string car="BMW";
};
class xyz:public abc{
	public:
		int car_year=1991;
};
class pqr:public xyz{
	public:
		string car_model="F900R";
};
int main(){
	abc obj;
	xyz obj1;
	pqr obj2;
	cout<<obj.car<<endl;
	cout<<obj1.car_year<<endl;
	cout<<obj2.car_model;
}

