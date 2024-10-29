#include<iostream>
using namespace std;
int num1, num2, num3;
class Myclass{
    public:
        void setNum1();
        void setNum2();
        void setNum3();
        void addition();
};

void Myclass::setNum1(){
    cout << "enter the first num: ";
    cin >> num1;
}

void Myclass::setNum2(){
    cout << "enter the second num: ";
    cin >> num2;
}

void Myclass::setNum3(){
    cout << "enter the third num: ";
    cin >> num3;
}

void Myclass::addition(){
    int addition = num1 + num2 + num3;
    cout << "The addition is: " << addition << endl;
}

int main(){
    Myclass obj;
    obj.setNum1();
    obj.setNum2();
    obj.setNum3();
    obj.addition();
}
