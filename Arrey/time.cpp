#include<iostream>
#include<ctime>
using namespace std;
int main(){
	time_t xyz;
	time(&xyz);
	cout<<ctime(&xyz);
}
