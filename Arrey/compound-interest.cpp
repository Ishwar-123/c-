#include <iostream>
using namespace std;
int main() {
    float principal, rate, time;
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the annual interest rate (in %): ";
    cin >> rate;
    cout << "Enter the time in years: ";
    cin >> time;
    float amount = principal * (1 + rate / 100) * time; 
    float compoundinterest = amount - principal;
    cout << "Compound Interest: " << compoundinterest << endl;
    cout << "Total Amount after " << time << " years: " << amount << endl;
}

