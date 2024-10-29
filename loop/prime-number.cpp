
#include <iostream>
using namespace std;
   
int main() {
//	Prime Number(Avibhajya)
	 int i,n;
	 bool prime=true;
	 
	 cout<<"enter eny number:-";
	 cin>>n;
	 
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


