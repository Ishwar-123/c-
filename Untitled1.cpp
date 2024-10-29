#include <iostream>
#include <string>
#include<ctime>
using namespace std;
int choice, balance = 0,deposit,withdraw;
int currentbalance1,currentbalance2,currentbalance3;
string acountnum="1234 1234 1234",firstname,lastname,mobileno;
//menu
void Menu(){
    cout<<" ===================== "<<endl;
    cout<<"| BANK OF RED & WHITE |"<<endl;
    cout<<"  ===================== "<<endl;
    cout<<"        MAIN MENU     "<<endl;
    cout<<"                      "<<endl;
    cout<<"1. OPEN AN ACCOUNT"<<endl;
    cout<<"2. BALANCE INQUIRY"<<endl;
    cout<<"3. DEPOSIT" <<endl;
    cout<<"4. WITHDRAW" <<endl;
    cout<<"5. TRANSACTION"<<endl;
    cout<<"6. MODIFY" <<endl;
    cout<<"7. QUIT" <<endl;
    cout<<"                      "<<endl;
    cout<<"Select Your Option (1-7): ";
    cin>>choice;
}
//account
void Account() {
    string firstname, lastname;
    string mobileno;
    cout<<"ENTER YOUR FIRST NAME: ";
    cin>>firstname;
    cout<<"ENTER YOUR LAST NAME: ";
    cin>>lastname;
    cout<<"ENTER YOUR MOBILE NO: ";
    cin>>mobileno;
    cout<<"PROVIDE YOUR INITIAL BALANCE: ";
    cin>>balance;
    cout<<endl << "**** ACCOUNT CREATED SUCCESSFULLY ****"<< endl;
    cout<<"YOUR FIRST NAME IS: "<<firstname<<endl;
    cout<<"YOUR LAST NAME IS: "<<lastname<<endl;
    cout<<"YOUR MOBILE IS: "<<mobileno<<endl;
    cout<<"YOUR ACCOUNT NO IS:"<<acountnum<<endl;
    cout<<"YOUR CURRENT BALANCE IS: "<<balance<<endl;
}
//balance inquiry
void Inquiry(){
    cout<<"YOUR BALANCE IS: "<<balance<<endl;
}
//deposite
void Deposit(){
    int deposit;
    cout<<"HOW MUCH MONEY DO YOU WANT TO DEPOSIT? ";
    cin>>deposit;
    balance=balance+deposit;
    cout<<"YOUR CURRENT BALANCE IS: "<<balance<<endl;
}
//withdrawl
void Withdraw(){
    int withdraw;
    cout<<"HOW MUCH MONEY DO YOU WANT TO WITHDRAW? ";
    cin>>withdraw;
    if(withdraw>balance){
        cout<<"INSUFFICIENT BALANCE!"<<endl;
    } else{
        balance=balance-withdraw;
        cout<<"YOUR CURRENT BALANCE IS: "<<balance<<endl;
    }
}
//transaction
void transaction(){
	
		time_t xyz;
		time(&xyz);
		cout<<"YOUR ACOUNT NUM IS : "<<acountnum<<endl<<endl;
		cout<<"YOUR CURRENT BALANCE IS : "<<balance<<endl<<endl;
		cout<<"ENTER YOUR DEPOSITE AMOUNT : ";
		cin>>deposit;
		    if(deposit>0){
        		cout<<"YOU DEPOSITE: "<<"$ "<<deposit<<" ON :"<<ctime(&xyz)<<endl;
            	cout<<" DEPOSITED SUCCESSFULLY."<<endl;
        		currentbalance1=balance+deposit;
        		cout<<"NOW YOUR CURRENT BALANCE AFTER DEPOSITE : "<<balance<<" + "<<deposit<<" = "<<currentbalance1;
            }
			else{
   				cout<<" INVALID DEPOSITE AMOUNT...!"<<endl;
        		cout<<" PLESE ENTER A MONEY GRETER THEN (ZERO)O $ "<<endl;    
		    }
		cout<<"ENETER YOUR WITHRAWAL AMOUNT:";
		cin>>withdraw;
		if(withdraw>0){
	     	if(withdraw<balance){
        		cout<<"YOU WITHDRAW: "<<"$ "<<withdraw<<" ON :"<<ctime(&xyz)<<endl;
        		cout<<" WITHDREW SUCCESSFULLY."<<endl;
        		balance=currentbalance1-withdraw;
        		cout<<"NOW YOUR CURRENT BALANCE AFTER WITHDREW : "<<currentbalance1<<" - "<<withdraw<<" = "<<currentbalance2;
        	}
        	else{
        		cout<<endl<<endl;
        		cout<<"* YOU HAVE WITHDRAWAL MORE THAN YOUR CURRENT BALANCE. *"<<endl<<endl;
        		cout<<" YOUR CURRENT BALANCE IS:"<<balance<<endl;
        		cout<<" SO PLAESE ENTER A LESS MONEY THEN YOUR CURENT BALANCE "<<endl;
			}
        }
		else{
        cout<<" INVALID WITHDRAWAL AMOUNT...!"<<endl;
        cout<<" PLESE ENTER A MONEY GRETER THEN (ZERO)O  "<<endl;
        }
        currentbalance3=balance+deposit-withdraw;
        cout<<"NOW YOUR CURRENT BALANCE AFTER WITHDRWAL : "<<balance<<" + "<<deposit<<" - "<<withdraw<<" = "<<currentbalance3<<endl<<endl;
}
//modify
void modify(){
		int choice1;
		cout<<"----------------: MODIFY ACOUNT INFORMATION :----------------"<<endl<<endl;
		cout<<"YOUR ACOUNT NUMBER IS  : "<<acountnum<<endl;
		while(choice1<4)
				{
					cout<<"1. FIRST NAME"<<endl;
					cout<<"2. LAST NAME"<<endl;
					cout<<"3. MOBILE NUMBER"<<endl;
					cout<<"4. EXIT"<<endl;
					cout<<"ENTER YOUR CHOICE YOU WANT TO MODIFY (1-4) : ";
					cin>>choice1;
					switch(choice1){
						case 1:
							cout<<"CURRENT ACOUNT HOLDER'S FIRST NAME : "<<firstname<<endl;
							cout<<" ENTER YOUR NEW FIRST NAME : ";
							cin>>firstname;
							break;
						case 2:
							cout<<"CURRENT ACOUNT HOLDER'S LAST NAME : "<<lastname<<endl;	
							cout<<"ENTER YOUR NEW LAST NAME : ";
							cin>>lastname;
							break;
						case 3:
							cout<<"CURRENT ACOUNT HOLDER'S MOBILE NUMBER  : "<<mobileno<<endl;
							cout<<"ENTER YOUR NEW MOBILE NUMBER : ";
							cin>>mobileno;
							break;	
						case 4:
							cout<<"YOU ARE EXITED SUCCSESSFULLY  "<<endl;
							cout<<"        THANK YOU....!        "<<endl;
							break;
						default:
							cout<<"INVALID CHOICE....!"<<endl;	
					}
			    cout<<endl<<endl<<endl;
				cout<<"NOW YOUR FIRST NAME IS : "<<firstname;
				cout<<endl<<endl;
				cout<<"NOW YOUR LAST NAME IS : "<<lastname;
				cout<<endl<<endl; 
				cout<<"NOW YOUR MOBILE NUMBER IS : "<<mobileno;
				cout<<endl<<endl; 	 
		        }     	
}
int main(){
    while(true){
        Menu();
        switch (choice){
            case 1:
                Account();
                break;
            case 2:
                if(balance>0){
                    Inquiry();
                } 
				else {
                    cout<<"PLEASE CREATE AN ACCOUNT FIRST."<<endl;
                }
                break;
            case 3:
                if(balance>0){
                    Deposit();
                }
				else{
                    cout<<"PLEASE CREATE AN ACCOUNT FIRST."<<endl;
                }
                break;
            case 4:
                if(balance>0){
                    Withdraw();
                } 
				else{
                    cout<<"PLEASE CREATE AN ACCOUNT FIRST."<<endl;
                }
                break;
            case 5:
                if(balance>0){
                   transaction();
                }
				else{
                    cout<<"PLEASE CREATE AN ACCOUNT FIRST."<<endl;
                }
            	break;
            case 6:
                if(balance>0){
                   modify();
                }
				else{
                    cout<<"PLEASE CREATE AN ACCOUNT FIRST."<<endl;
                }
            	break;
            case 7:
                cout<<"YOU HAVE EXITED SUCCESSFULLY"<<endl;
                cout<<"THANK YOU"<<endl;
                return 0;
            default:
                cout<<"INVALID OPTION. PLEASE TRY AGAIN."<<endl;
                break;
        }
    }
}

