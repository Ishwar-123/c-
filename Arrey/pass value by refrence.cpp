#include<iostream>
using namespace std;
int a,b;
void swap(int &a,int &b){
	 a=a+b;
	 b=a-b;
	 a=a-b;
}
int main(){
	cout<<"Enter the Value of A:-";
	cin>>a;
	cout<<"Enter the Value of B:-";
	cin>>b;	
	cout<<"Before Swap:-"<<a<<" & "<<b<<endl;
	swap(a,b);
	cout<<"After Swap:-"<<a<<" & "<<b;	
}
