#include<iostream>
#include<string>
using namespace std;
class perent{
	public:
		int Jamin=100;
};
class child1:public perent{
	public:
	float Jamin1=33.33;
};
class child2:public perent{
	public:
	float Jamin2=33.33;
};
class child3:public perent{
	public:
	float Jamin3=33.33;
};
int main(){
	perent obj;
	child1 obj1;
	child2 obj2;
	child3 obj3;
	cout<<obj.Jamin<<endl;
	cout<<obj1.Jamin1<<endl;
	cout<<obj2.Jamin2<<endl;
	cout<<obj3.Jamin3<<endl;
}
