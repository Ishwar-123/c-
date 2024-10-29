#include<iostream>
using namespace std;
int main(){
	  //driving license generator
	  int age;
	  cout <<"Enter your age:" <<endl;
	  cin>>age; 
      
	  if(age >=18) {
	  	
	  	//Nested IF
	  	
	  	if(age==18) {
	  		cout<<"your age is"<<age<<"so youre Eligible for a learing license."<<endl;
		  }
		  else {
		  	cout<<"your age is"<<age<<"so youre Eligible for a learing license."<<endl;
		  }
	  } 
	  else{
	  	cout<<"youre age is"<<age<<"so youre Eligible for a license."<<endl;
	  	cout<<"TRY AGAIN WHEN YOURE 18..!"<<endl;
	  	
	  }
}
