//C++ OOP PROJECT ON BANKACCOUNT MANAGEMENT SYSTEM


#include<iostream>
using namespace std;

class BankAccount{
    private:
    string name;
    int AccountNumber;
    double balance;

    public:
    // Create account
    BankAccount(string n,int accno,double bal){
        name=n;
        AccountNumber=accno;
        balance=bal;


    }
    // Deposit
    void Deposit(double amount){
        balance+=amount;
        cout<<"Amount Deposited successfully !"<<endl;

    }
    // Withdraw
    void Withdraw(double amount){
        if (amount<=balance){
            balance-=amount;
            cout<<"Amount Withdraw Successfully !"<<endl;

        }
        else{
            cout<<"Insufficient Balance !"<<endl;

        }
    }
    // Check Balance
    void display(){
        cout<<"----Account Details----"<<endl;
        cout<<"Name= "<<name<<endl;
        cout<<"AccountNumber= "<<AccountNumber<<endl;
        cout<<"Balance= "<<balance<<endl;
    }

};

int main(){
    BankAccount account("Darshan",12345,5000);
    account.display();
    account.Deposit(1000);
    account.Withdraw(2000);
    account.display();
    return 0;

}
