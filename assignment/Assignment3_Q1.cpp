#include<iostream>
using namespace std;
class Cylinder{
    double  height;
    double  radius;
    static const  double PI ; //without inline it is showing error
    public:
    Cylinder(){
        this->height = 0;
        this->radius = 0;
    }
    Cylinder(double height , double radius):height(height),radius(radius){

    }

    double  getRadius(){
        return this->radius;
    }
    double setRadius(double radius)
    {
        this->radius = radius;
    }
    double getHeight(){
        return this->height;
    }
    double setHeight(double height){
        
        this->height = height;
    }
    void calculateVolume(){
        cout<<"Volume of cylinder is : "<<(PI * this->radius*this->radius*this->height)<<endl;
    }
};
const double Cylinder::PI = 3.14;
int menuList(){
    int choice;
    cout<<endl<<"1.Exit";
    cout<<endl<<"2.Find Volume";
    cout<<endl<<"3.set radius";
    cout<<endl<<"4.get radius";
    cout<<endl<<"5.set height";
    cout<<endl<<"6.get height";
    cout<<endl<<"Enter choice : ";
    cin>>choice;
    return choice;
}
int main(){
        int choice;
        double radius = 10 ;
        double height = 20;

        Cylinder c1(radius,height);
        while((choice = menuList()) != 1)
        {
            switch (choice)
            {
            case 2:
                c1.calculateVolume();
                break;
            case 3:
           
             cout<<endl<<"Enter radius : ";
             cin>>radius;
             c1.setRadius(radius);
                break;
            case 4:
                 radius =  c1.getRadius();
              cout<<endl<<"Radius is : "<<radius;
                break;
            case 5:
             cout<<endl<<"Enter height : ";
             cin>>height;
             c1.setHeight(height);
                break;
            case 6:
                 height =  c1.getHeight();
              cout<<endl<<"Height is : "<<height;
              break;
            
            default:
                break;
            }
        }
        return 0 ;
}