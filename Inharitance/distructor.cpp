#include<iostream>
using namespace std;
class one{
	public:
	one(){
		cout<<"Constructor"<<endl;
	}
	~one(){
		cout<<"Distructor";
	}
};
int main(){
	one obj;
}

