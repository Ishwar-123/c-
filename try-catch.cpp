#include<iostream>
using namespace std;
int main(){
	try{
		int age=10;
		if(age>=18){
			cout<<"Eligible";
		}
		else{
			throw(age);
		}
	}
	catch(int num){
		cout<<"Not Eligible"<<endl;
		cout<<"Your Age Is :-"<<num;
	}
}
