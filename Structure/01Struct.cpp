#include<iostream>
using namespace std;
int main(){
	struct{
		int age;
		string name;
	}myStruct;
	myStruct.age=10;
	myStruct.name="Dhamo";
	cout<<myStruct.age<<endl;
	cout<<myStruct.name<<endl;
}
