
#include <iostream>
using namespace std;

int main() {
//	Calculate Avg
    int size,i;
    float num,sum=0,avg;
    cout << "Enter the number of values: ";
    cin >> size;
    for ( i = 1; i <= size; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        sum=sum+num;
    }
    cout<<"sum is :-"<<sum<<endl;
    avg=sum/size;
    cout<<"avg is:-"<<avg;
    

}
