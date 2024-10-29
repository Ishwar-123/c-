#include<iostream>
using namespace std;
int main (){
	int age;
	cout<<"Enter The Age: ";
	cin>>age;
	if(age>18){
		cout<<"eligible for license";
	}
	else if(age==18){
		cout<<"eligible for learning license";
	}
    else{
     	cout<<"not eligible";
	}
}
