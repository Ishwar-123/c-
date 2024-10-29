#include <iostream>
using namespace std;
int i,n,choice,sum=0,last,tem, no, rem, revers = 0;
//prime number
void prime(){
//	 int i,n;
	 bool prime=true;	 
	 if(n == 0 || n == 1){
	 	prime=false;
	 }
	 for(i=2;i<=n/2;i++){
	 	if(n%i==0){
	 		prime=false;
	 		break;
		 }
	 }
	 if(prime){
	 	cout<<"your number is prime";
	 }
	 else{
	 	cout<<"your number is not prime";
	 }
}
void arm(){
	//	armstrong number

	tem=n;
	while(n>0)
	{
		last=n%10;//(153/10=15.3)
		sum=sum+(last*last*last);//(0+
		n=n/10;
	}
	
	if(tem==sum){
		cout<<"the num is armstorng";
	}
	else{
		cout<<"the num is not armstrong";
	}
}
//pelindrom
void peli(){
    n = no;
    while (no != 0) {
        rem = no % 10;
        revers = revers * 10 + rem;
        no /= 10;
    }
    if (n == revers) {
        cout << "The number is a palindrome." <<endl;
    } else {
        cout << "The number is not a palindrome." <<endl;
    }
}


int main() {
	cout<<"Enter Any Number:-";
	cin>>n;
	cout<<"1.prime"<<endl;
	cout<<"2.armstrong"<<endl;
	cout<<"3.pelindrom"<<endl;
		cout<<"Select Any";
	cin>>choice;
	switch(choice){
		case 1:
			prime();
			break;
		case 2:
			arm();
			break;
		case 3:
			peli();
			break;
		default :
			cout<<"invalid";
	}

}
