#include<iostream>
using namespace std;
class InvalidInputException{
    string message;
    public:
    InvalidInputException(string message):message(message){

    }
    void getMessage(){
        cout<<endl<<message;
    }
};
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
        if(deposit <= 0){
            throw InvalidInputException("Invalid amount : deposit cant be negative");
        }
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
            throw InvalidInputException("Invalid amount : withdraw cant be more than balance");
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
    try{
        b.deposit();
    }
    catch(InvalidInputException ex)
    {
        ex.getMessage();
    }
    catch(...){
        cout<<endl<<"Invalid argument";
    }
    try{
        b.withdraw();
    }
    catch(InvalidInputException ex)
    {
        ex.getMessage();
    }
   
    b.display();
    return 0;
}