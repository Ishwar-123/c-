#include <iostream>
using namespace std;
int n,ans,choice;
void squre(){
	ans=n*n;
	cout<<"The Squre of "<<n<<" is "<<ans;
}
void cube(){
	ans=n*n*n;
	cout<<"The cube of "<<n<<" is "<<ans;
}
void raisto4(){
	ans=n*n*n*n;
	cout<<"The raisto4 of "<<n<<" is "<<ans;
}


int main() {
	cout<<"Enter Any Number:-";
	cin>>n;
	cout<<"1.Squre"<<endl;
	cout<<"2.Cube"<<endl;
	cout<<"3.Raise to 4"<<endl;
		cout<<"Select Any";
	cin>>choice;
	switch(choice){
		case 1:
			squre();
			break;
		case 2:
			cube();
			break;
		case 3:
			raisto4();
			break;
		default :
			cout<<"invalid";
	}

}
