#include <iostream>
using namespace std;
int a,b,c,choice;
void addition(){
	c=a+b;
    cout<<"Value of C is"<<c;
}
void substration(){
   c=a-b;
   cout<<"Value of C is"<<c;
}
void multification(){
   c=a*b;
   cout<<"Value of C is"<<c;
}
void dividation(){
   c=a/b;
   cout<<"Value of C is"<<c;
}

int main() {
   cout<<"Enter The Value Of A:";
   cin>>a;
   cout<<"Enter The Value of B:";
   cin>>b;
	cout<<"1.addition"<<endl;
	cout<<"2.substration"<<endl;
	cout<<"3.multification"<<endl;
	cout<<"4.dividation"<<endl;	
	cout<<"Select Any:-";
	cin>>choice;
	switch(choice){
		case 1:
			addition();
			break;
		case 2:
			substration();
			break;
		case 3:
			multification();
			break;
		case 4:
			dividation();
			break;			
		default :
			cout<<"invalid";
	}

}
