#include<iostream>
using namespace std;
class Address{
	public:
		string addressLine,city,state;
		Address(string addressLine,string city,string state){
			this ->addressLine=addressLine;
			this ->city=city;
			this ->state=state;
		}
};
class Employee{
	private:
		Address*address;
	public:
		int id;
		string name;
	Employee(int id,string name,Address*address){
		this ->id=id;
		this ->name=name;
		this ->address=address;
	}
	void display(){
		cout<<"Emp Id:"<<id<<endl<<"Emp Name:"<<name<<endl<<"Emp Address:"<<address ->addressLine<<address ->city<<address ->state<<endl;
		
	}
};
int main(){
	Address a=Address("100 Feet Road,","anand,","Gujrat");
	Employee emp=Employee(1,"One",&a);
	Employee emp1=Employee(2,"Two",&a);
	emp.display();
	emp1.display();
	
}

