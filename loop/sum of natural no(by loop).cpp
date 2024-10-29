#include<iostream>
using namespace std;
int main(){
//	Sum Of Natural Numbers
	int n,i,sum=0;
	cout<<"enter any number:-";
	cin>>n;
	do{
		sum=sum+i;
		i++;
	}
	while(i<=n);
	cout<<"sum of your natrul number is:-"<<sum;
}
