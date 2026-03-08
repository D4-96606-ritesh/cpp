#include<iostream>
#include<typeinfo>
using namespace std;
class Product{
    string title;
    int price;
    public:
    Product(){}
    Product(string title,int price):title(title),price(price){}
    virtual void accept() {
        cout<<endl<<"Enter title  : ";
        cin>>title;
        cout<<endl<<"Enter price : ";
        cin>>price;
    };
    virtual void display() {
        cout<<endl<<"Title : "<<title;
        cout<<endl<<"Price : "<<price;
    }; 
};
class Book : public Product{
    int pages;
    public:
    Book(){}
    Book(string title,int price,int pages):pages(pages),Product(title,price){}
    void accept(){
        Product::accept();
        cout<<endl<<"Enter pages : ";
        cin>>pages;
    }
    void display(){
        Product::display();
        cout<<endl<<"Pages : "<<pages;
    }
    void getPages(){
        cout<<endl<<"Pages are : "<<pages;
    }
  
};
class Tape : public Product{
    int playTime;
    public:
    Tape(){}
    Tape(string name,int price,int playTime):playTime(playTime),Product(name,price){}
       void accept(){
        Product::accept();
        cout<<endl<<"Enter playtime : ";
        cin>>playTime;
    }
    void display(){
        Product::display();
        cout<<endl<<"PlayTime : "<<playTime;
    }
      void getPlayTime(){
        cout<<"PlayTime is "<<playTime;
    }
};
int main(){
    int n = 2;
  Product **arr = new Product*[n];
  int choice;
      for(int i=0;i<n;i++)
    {
        cout<<"1. Book, 2. Tape, Enter choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                arr[i] = new Book();
                arr[i]->accept();
                break;

            case 2:
                arr[i] = new Tape();
                arr[i]->accept();
                break;
        }
    }
     for(int i = 0 ; i< n; i++)
     {
        Book *b = dynamic_cast<Book*>(arr[i]);
        Tape *t = dynamic_cast<Tape*>(arr[i]);
        if(b){
            b->getPages();
        }
        if(t)
            t->getPlayTime();
     }
     for(int i = 0; i < n; i++)
     delete arr[i];
     delete [] arr;
     
    
}