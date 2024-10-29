#include<iostream>
using namespace std;
int main(){
	try{
		int age=10;
		if(age>=18){
			cout<<"Eligible";
		}
		else{
			throw 404;
		}
	}
	catch(...){
		cout<<"Not Eligible"<<endl;
	}
}
