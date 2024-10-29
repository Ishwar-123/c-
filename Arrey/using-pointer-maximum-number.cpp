#include<iostream>
using namespace std;

int main(){
	
	int a,b;
	int* ab=&a;
	int* abc=&b;
	
	cout<<"Enter the value A:-";
	cin>>a;
	cout<<"Enter the value B:-";
	cin>>b;
	
	if(*ab>*abc){
		cout<<"The A is Maximum";
	}
	else{
		cout<<"The B is Maximum";
	}
}
