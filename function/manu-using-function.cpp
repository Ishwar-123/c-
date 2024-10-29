#include<iostream>
using namespace std;

int grandTotal=0;
void menu();

void pizza(){
    int total,Qnt;

    cout<<"Enter Quantity: ";
    cin>>Qnt;

    total=Qnt*89;
    cout<<"Total: "<<total<<endl;
    grandTotal+=total;
}

void burger(){
    int total,Qnt;
    cout<<"Enter Quantity: ";
    cin>>Qnt;

    total=Qnt*99;
    cout<<"Total: "<<total<<endl;
    grandTotal+=total;
}

void fries(){
    int total,Qnt;
    int grandTotal=0;
    cout<<"Enter Quantity: ";
    cin>>Qnt;
    
    total=Qnt*70;
    cout<<"Total: "<<total<< endl;
    grandTotal+=total;
}
void tea(){
    int total,Qnt;
    cout<<"Enter Quantity: ";
    cin>>Qnt;

    total = Qnt * 25;
    cout<<"Total: "<<total<<endl;
    grandTotal+=total;
}

void order(int choice){
    char YesNo;
    
    if(choice >= 1 && choice <= 4){
        switch(choice){
            case 1:
                cout<<"You Selected Pizza"<<endl;
                pizza();
                break;
            case 2:
                cout<<"You Selected Burger"<<endl;
                burger();
                break;
            case 3:
                cout<<"You Selected Fries"<<endl;
                fries();
                break;
            case 4:
                cout<<"You Selected Tea"<<endl;
                tea();
                break;
        }
        
        cout<<"Do you want anything else?...[press 'y'/'Y' or 'n'/'N']" << endl;
        cin>>YesNo;
        
        if(YesNo=='y' || YesNo=='Y'){
            cout<<endl;
            menu();
        } 
		else if(YesNo=='n' || YesNo=='N'){
            cout<<"Thank you!"<<endl<<"Your total bill is: "<<grandTotal<<" rs"<< endl;
        }
        else{
        	cout<<"Unauthorized Input"<<endl;
        	cout<<"Enter either capital 'Y/N' OR small 'y/n'..."<<endl;
		}
    }
}

void menu(){
    int choice;
    cout<<"----------- Welcome To OP Hotel ---------"<<endl;
    cout<<"1. Pizza 89rs" << endl;
    cout<<"2. Burger 99rs" << endl;
    cout<<"3. Fries 70rs" << endl;
    cout<<"4. Tea 25rs" << endl;
    
    cout<<"Enter Your Choice: ";
    cin>>choice;
    order(choice);
}
int main(){
    menu(); 
}

