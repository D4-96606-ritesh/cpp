#include<iostream>
using namespace std;
class Laptop{
    int brandId;
    double  price;
    public:
    Laptop():brandId(0), price(50000){
        cout<<endl<<"Laptop constructor called";
    }
    Laptop(int brandId,double price):brandId(brandId),price(price){

    }

    void display(){
        cout<<endl<<"Laptop details are : ";
        cout<<endl<<"BrandId : "<<brandId;
        cout<<endl<<"price : "<<price;
    }
    ~Laptop(){
        cout<<endl<<"Laptop Destructor called";
    }
};
int main(){
    Laptop  l;
    l.display();
}