#include<iostream>
using namespace std;
int main()
{
//	sum of first and last digit
	int n,first,last,sum;
	cout<<"enter any number:";
	cin>>n;
	last=n%10;
	cout<<"last num is:"<<last<<endl;
	while(n>10)
	{
		n=n/10;
	}
	cout<<"first num is:"<<n<<endl;
	sum=n+last;
	cout<<"sum of first and last digit:"<<sum;
}
