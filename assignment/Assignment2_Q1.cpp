#include<iostream>
using namespace std;
class Box{
    double length;
    double width;
    double height;
    public:
    Box():length(5),width(6),height(7)
    {}
    Box(double length):Box()
    {
        this->length = length;
    }
    Box(double height,double width,double length)
    {   
        this->length = length;
        this->height = height;
        this->width = width;
    }
    void calculateVolume(){
        cout<<"Volume = "<<length<<" * "<<width<<" * "<<height<<" = "<<(length*width*height)<<endl;
    }


};
int menuList(){
   
    cout<<"1.Find Volume with default values  : "<<endl;
    cout<<"2.Find Volume with 2 parameters values  : "<<endl;
    cout<<"3.Find Volume with 3 parameters values  : "<<endl;
    cout<<"4.Exit"<<endl;
     int choice;
    cout<<"Enter choice : ";
    cin>>choice;
    return choice;
}
int main(){
    int choice;
    
    while((choice = menuList()) != 4)
    {
            Box b1;
            Box b2(10);
            Box b3(10,20,30);
            switch (choice)
            {
            case 1:
                b1.calculateVolume();
                break;
            case 2:
                b2.calculateVolume();
                break;
            case 3:
                b3.calculateVolume();
                break;
            
            default:
                break;
            }
    }
    return 0;
}