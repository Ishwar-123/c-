#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter Eny Number";
	cin>>a;
	if(a>=0){
		if(a>0){
			cout<<"your nermber is positive";
		}
		else if(a==0){
			cout<<"your nermber is zero";
		}
	}
	else{
		if(0>a){
			cout<<"your nermber is negetiv";
		}
		else{
			cout<<"invalid";
		}
	}
}
