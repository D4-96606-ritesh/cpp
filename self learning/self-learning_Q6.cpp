#include<iostream>
using namespace std;
class  BankAccount{
    int accountNumber;
    string accountHolderName;
    double  balance;
    public:
    BankAccount(int accountNumber,string accountHolderName):accountNumber(accountNumber),accountHolderName(accountHolderName),balance(0){}
    void deposit(){
        cout<<endl<<"Enter amount to deposit : ";
        double deposit;
        cin>>deposit;
        balance += deposit;
    }
    void withdraw()
    {
        display();
        int withdraw;
        cout<<endl<<"Enter amount to withdraw : ";
        cin>>withdraw;
        if(withdraw > balance)
        {
            cout<<endl<<"Withdrawal amount is more than balance";
        }
        else{
            balance -= withdraw;
            cout<<endl<<"Rs. "<<withdraw<<" debited.";
        }
    }
    void  display(){
           cout<<endl<<"Your available balance is : "<<balance;
    }
};
int main(){
    BankAccount b(1234,"Ritesh Patil");
    b.deposit();
    b.withdraw();
    b.display();
    return 0;
}