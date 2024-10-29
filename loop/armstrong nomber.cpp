#include<iostream>
using namespace std;
int main()
{
//	armstrong number
	int n,sum=0,last,tem;
	cout<<"enter any num:";
	cin>>n;//153
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
