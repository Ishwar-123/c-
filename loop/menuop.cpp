#include<iostream>
using namespace std;

int main(){
    int choice, pizza,tea,burger,frenkey,rd, total;
    char y = 'y';

    cout << "----------------- Hotel Dhamo -----------------" << endl;

    while (y == 'y') {
        cout << "1. Pizza (300/-)" << endl;
        cout << "2. Tea (600/-)" << endl;
        cout << "3. Burger (400/-)" << endl;
        cout << "4. Frenkey (600/-)" << endl;
        cout << "5. Russian Drink (6000/-)" << endl << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout<< "Pizza is Here" <<endl;
                cout<< "Select The Quantity of Pizza: ";
                cin>>pizza;
                total = 300*pizza;
                break;

            case 2:
   				cout<<"Tea is Hear"<<endl;
   				cout<<"Select The Quantity of Tea:";
   				cin>>tea;
   				total=600*tea;
   				cout<<"your bill Is - " <<total;
   				break;
            case 3:
   				cout<<"Berger is Hear"<<endl;
   				cout<<"Select The Quantity of Berger:";
   				cin>>burger;
   				total=400*burger;
   				cout<<"your bill Is - " <<total;
   				break;
            case 4:
   				cout<<"Frenkey is Hear"<<endl;
   				cout<<"Select The Quantity of Frenkey:";
   				cin>>frenkey;
   				total=600*frenkey;
   				cout<<"your bill Is - " <<total;
   				break;
            case 5:
   				cout<<"Russian Drink is Hear"<<endl;
   				cout<<"Select The Quantity of Russian Drink:";
   				cin>>rd;
   				total=6000*rd;
   				cout<<"your bill Is - " <<total;
   				break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }

        cout<< "Do you need anything else? (y/n): ";
        cin >> y;
    }

    cout << "Your bill is - "<< total<<endl<<"Thank You";
}
