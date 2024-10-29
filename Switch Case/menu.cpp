#include<iostream>
using namespace std;
int main(){
	int choice,pizza,total,tea,burger,frenkey;
   cout<<"----------------- Hotel Dhamo -----------------"<<endl;
   cout<<"1.Pizaa"<<endl;
   cout<<"2.Tea"<<endl;
   cout<<"3.Burger"<<endl;
   cout<<"4.Frenkey"<<endl;
   cout<<"Enter Your Choice:";
   cin>>choice;
   switch(choice){
   	case 1:
   		cout<<"Pizza is Hear"<<endl;
   		cout<<"Select The Quantity of Pizza:";
   		cin>>pizza;
   		total=300*pizza;
   		cout<<"your bill Is - " <<total;
   		break;
   	case 2:
   		cout<<"Tea is Hear"<<endl;
   		cout<<"Select The Quantity of Tea:";
   		cin>>tea;
   		total=600*tea;
   		cout<<"your bill Is - " <<total;
   		break;   		
   	case 3:
   		cout<<"Berger is Hear"<<endl;
   		cout<<"Select The Quantity of Berger:";
   		cin>>burger;
   		total=400*burger;
   		cout<<"your bill Is - " <<total;
   		break;
   	case 4:
   		cout<<"Frenkey is Hear"<<endl;
   		cout<<"Select The Quantity of Frenkey:";
   		cin>>frenkey;
   		total=600*frenkey;
   		cout<<"your bill Is - " <<total;
   		break;	
		   default:
		   cout<<"invalid";
		   break;	      		
   		
   }
}
