#include <iostream>
#include <string>
using namespace std;
int main(){
	string firstname, lastname,accountno1,accountno2;
    string mobileno;
    int pin1,pin2;
    cout<<"ENTER YOUR FIRST NAME: ";
    cin>>firstname;
    cout<<"ENTER YOUR LAST NAME: ";
    cin>>lastname;
    cout<<"ENTER YOUR MOBILE NO: ";
    cin>>mobileno;
    cout<<"ENTER YOUR ACCOUNT NO: ";
    cin>>accountno1;
    cout<<"PLEASE ENTER SIX DIGIT PIN: ";
    cin>>pin1;
    cout<<"YOUR ACCOUNT CREATED SUCCESSFULLY"<<endl;
//    
	cout<<"PLEASE RE-ENTER PIN FOR SEE THE INFORMATION ABOUT YOUR ACCOUNT :";
	cin>>pin2;
	cout<<"enter account no:";
	cin>>accountno2;
	if(pin1==pin2 && accountno1==accountno2){
		cout<<"your first name is:"<<firstname<<endl;
		cout<<"your last name is:"<<lastname<<endl;
		cout<<"your mobile no is:"<<mobileno<<endl;
	}
	else{
		cout<<"account was not exist";
	}
}
