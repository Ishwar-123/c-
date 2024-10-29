#include<iostream>
using namespace std;
int main(){
	 int val1,val2,total;
     char choice;
     cout<<"Addition(+)"<<endl;
     cout<<"Substraction(-)"<<endl;
     cout<<"Mutification(*)"<<endl;
     cout<<"Dividetion(/)"<<endl;
     cout<<"Choose Any Operator:-";
     cin>>choice;
     switch(choice){
//     	addition
     	case '+':
     		cout<<"Enter The vlue of A:-";
     		cin>>val1;
     		cout<<"Enter The vlue of B:-";
     		cin>>val2;
     		total=val1+val2;
     		cout<<"Total is:- "<<total<<endl;
     		cout<<"thank you";
     		break;
//     		minus
     	case '-':
     		cout<<"Enter The vlue of A:-";
     		cin>>val1;
     		cout<<"Enter The vlue of B:-";
     		cin>>val2;
     		total=val1-val2;
     		cout<<"Total is:- "<<total<<endl;
     		cout<<"thank you";
     		break;
//     		multification
     	case '*':
     		cout<<"Enter The vlue of A:-";
     		cin>>val1;
     		cout<<"Enter The vlue of B:-";
     		cin>>val2;
     		total=val1*val2;
     		cout<<"Total is:- "<<total<<endl;
     		cout<<"thank you";
     		break;
//     		dividetion
     	case '/':
     		cout<<"Enter The vlue of A:-";
     		cin>>val1;
     		cout<<"Enter The vlue of B:-";
     		cin>>val2;
     		total=val1/val2;
     		cout<<"Total is:- "<<total<<endl;
     		cout<<"thank you";
     		break;
	 }
}
