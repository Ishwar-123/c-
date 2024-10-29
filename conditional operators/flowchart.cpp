#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter The Value of A:- ";
    cin>>a; 
	cout<<"Enter The Value of B:- ";
    cin>>b; 
	cout<<"Enter The Value of C:- ";
    cin>>c; 
	if(a>b){
		if(a>c){
			cout<<"A is bigger";
		}
		else{
			cout<<"C is bigger";
		}
}
    else{
    	if(b>c){
    		cout<<"B is bigger";
		}
		else{
			cout<<"C is Bigerr";
		}
	}
}
