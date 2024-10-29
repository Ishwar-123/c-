#include<iostream>
using namespace std;
int main(){
	int sub1,sub2,sub3,sub4,sub5,sub6,total,per;
	char grade;
	cout<<"Enter sub1 marks(out of 100):";
	cin>>sub1;
	cout<<"Enter sub2 marks(out of 100):";
	cin>>sub2;
	cout<<"Enter sub3 marks(out of 100):";
	cin>>sub3;
	cout<<"Enter sub4 marks(out of 100):";
	cin>>sub4;
	cout<<"Enter sub5 marks(out of 100):";
	cin>>sub5;
	cout<<"Enter sub6 marks(out of 100):";
	cin>>sub6;
	total=sub1+sub2+sub3+sub4+sub5+sub6;
	cout<<"Total is(out of 600):"<<total<<endl;
	per=total*100/600;
	cout<<"Your percentage is(out of 100%):"<<per<<endl;
	switch (per / 10) {
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
    }
    cout<<"your grade is:"<<grade;
}
