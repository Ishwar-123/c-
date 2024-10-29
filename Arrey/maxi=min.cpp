#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n]; 
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max){
        	 max = arr[i];
		}
        else{
		 min = arr[i];
		 }
    }
    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;
}

