#include<iostream>
using namespace std;
int a,b;
class perent{
	public :
		int op=0;
};
//   
class child1: perent{
	public :
		int addition=a+b;
};
//	
class child2:public perent{
	public :
		int substaction=a-b;
};
// 
class child3:public perent{
	public :
		int multiple=a*b;
};
// 
class child4:public perent{
	public :
		int divide=a/b;
};
int main(){
		cout<<"Enter A value:-";
		cin>>a;
		cout<<"Enter B value:-";
		cin>>b;	
	perent obj;
	child1 obj1;
	child2 obj2;
	child3 obj3;
	child4 obj4;
	cout<<"Addition="<<obj1.addition<<endl;
	cout<<"substaction="<<obj2.substaction<<endl;
	cout<<"multiple="<<obj3.multiple<<endl;
	cout<<"divide="<<obj4.divide<<endl;
}
