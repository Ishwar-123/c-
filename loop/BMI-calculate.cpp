#include<iostream>
using namespace std;
int main(){
//	BMI calculate
	float height,weight,bmi;
	cout<<"Enter Your Height(In-feet):- ";
	cin>>height;
	cout<<"Enter Your Weight(In-KGs):- ";
	cin>>weight;
	height=height*0.3048;
	cout<<"Your Height Is "<<height<<"Meter"<<endl;
	bmi=weight / (height * height);
	cout<<"Your BMI is:-"<<bmi;
}
