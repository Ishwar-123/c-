#include <iostream>
using namespace std;

int main() {
//	Pelindrom Number
    int no, rem, revers = 0;

    cout << "Enter a number: ";
    cin >> no;

    int n = no; // store the original value of no in n

    while (no != 0) {
        rem = no % 10;
        revers = revers * 10 + rem;
        no /= 10;
    }
    if (n == revers) {
        cout << "The number is a palindrome." << endl;
    } 
	else {
        cout << "The number is not a palindrome." << endl;
    }
}
