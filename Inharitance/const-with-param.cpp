#include<iostream>
using namespace std;
class Bike{
	public:
			string name;
			string model;
			int year;
			Bike(string a,string b,int c){
				name=a;
				model=b;
				year=c;
			}
};
int main(){
	Bike obj("Samsung","S24 Ultra",2024);
	cout<<obj.name<<endl;
	cout<<obj.model<<endl;
	cout<<obj.year<<endl;	
}

