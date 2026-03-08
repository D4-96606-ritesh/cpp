#include<iostream>
using namespace std;
class  Payment{
    public:
    virtual void makePayment(double  amount){};
};
class  CreditCard : public Payment{
    public:
    void makePayment(double amount){
        cout<<endl<<"make payment via CREDIT CARD";
    }
};
class  UPI: public Payment{
    public:
    void makePayment(double amount){
            cout<<endl<<"make payment via UPI";
        }
};
class Cash: public Payment{
    public:
    void makePayment(double amount){
        cout<<endl<<"make payment via CASH";
    }
};
class PaymentFactory{
    public:
    static Payment * create(char *mode){
        Payment * p;
        cout<<endl<<*mode;
        if(*mode == 'c')
        {
            p = new CreditCard();
        }
        else if(*mode == 'u'){
            p = new UPI();
        }
        else{
            p = new Cash();
        }
          return  p;
    }
  

};
int main(){
    char credit = 'c', upi = 'u',cash ='a';
    
    Payment * p1 = PaymentFactory::create(&credit);
    Payment * p2 = PaymentFactory::create(&upi);
    Payment * p3 = PaymentFactory::create(&cash);
    p1->makePayment(10);
    p2->makePayment(20);
    p3->makePayment(30);
}