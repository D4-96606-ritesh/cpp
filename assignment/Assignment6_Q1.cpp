#include<iostream>
#include <typeinfo>
using namespace std;
class Product{
    int id;
    string title;
    double price;
    double discount;
    public:
    Product(int id, string title,int price, int discount):id(id), title(title),price(price), discount(discount) {

    }
    int getId(){
        return id;
    }
    string getTitle(){
        return title;
    }
    double getPrice(){
        return price;
    }
    double getDiscount(){
        return discount;
    }
};
class Book : public Product{
    string author;
    public:
   Book(int id,string title, string author,double price,double discount):author(author),Product(id,title,price,discount){}
   string getAuthor(){
    return author;
   }

};
class Tape : public Product{
    string artist;
    public:
    Tape(int id,string artist, string title, double price,double discount):artist(artist),Product(id,title,price,discount){}
    string getArtist(){
        return artist;
    }

};
int menuList(){
    int choice;
    cout<<endl<<"1.Buy Book";
    cout<<endl<<"2.Buy Tape";
    cout<<endl<<"3.Make Bill";
    cout<<endl<<"Enter choice : ";
    cin>>choice;
    return choice;
}
int main(){
        Product * arr[3];
        int choice;
        int size = 0;
        while((choice = menuList()) != 3)
        {
            if(size >= 3){
                cout<<endl<<"Your cart is full. Lets make a bill.!";
                break;
            }
                switch (choice)
                {
                case 1:
                {
                    arr[size] = new Book(1,"CPP","Alex Roy",2000,10);
                    size++;
                }
                break;
                case 2:
                {
                    arr[size] = new Tape(2,"Perfect By Ed sheeren","Ed Sheeren",5000,5);
                    size++;
                    break;
                }
            
            }
        }
        cout<<endl<<"Bill : ";
        cout<<"Id | Title  | prize | Discount | Final Prize";
        int totalBill = 0;
        for(int i = 0; i <3; i++)
        {
           Product* p =  arr[i];
           string name = typeid(p).name();
           if(name == typeid(Book).name())
           {
                Book* bPtr = (Book*)p;
                Book b = *bPtr;
                double prize  = b.getPrice() * ((100-b.getDiscount())/100);
                cout<<endl<<b.getId()<<" | "<<b.getTitle()<<" | "<<b.getAuthor()<<" | "<<b.getPrice()<<" | "<<b.getDiscount()<<" | "<< prize;
                totalBill += prize;
           }
           else{
             Tape* tPtr = (Tape*)p;
                Tape t = *tPtr;
                double prize  = t.getPrice() * ((100-t.getDiscount())/100);
                cout<<endl<<t.getId()<<" | "<<t.getTitle()<<" | "<<t.getArtist()<<" | "<<t.getPrice()<<" | "<<t.getDiscount()<<" | "<< prize;
                totalBill += prize;
           }

        }
        cout<<endl<<"=====================================";
        cout<<endl<<"Final Bill : "<<totalBill;
       
            delete [] arr;
            *arr = NULL;
        
    }