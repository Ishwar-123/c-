#include <iostream>
using namespace std;

class Address {
public:
    string addressLine, city, state;
    
    Address(string addressLine, string city, string state) {
        this->addressLine = addressLine;
        this->city = city;
        this->state = state;
    }
};

class Employee {
private:
    Address* address; // Pointer to Address object
public:
    Employee(Address* addr) : address(addr) {} // Constructor to initialize address
    void display();
};

void Employee::display() {
    cout << address->addressLine << " " << address->city << " " << address->state << endl;
}

int main() {
    int n, id;
    string name;
    
    cout << "How many employees' data you need: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter employee's id number: ";
        cin >> id;
        cout << "Enter employee's name: ";
        cin >> name;

        // Create Address object dynamically
        Address* addr = new Address("town hall,", "anand,", "gujarat");
        Employee emp(addr); // Pass the Address to Employee
        cout << "Your id: " << id << endl;
        cout << "Your name: " << name << endl;
        emp.display();

//        delete addr; // Free the dynamically allocated memory
    }

    return 0;
}
