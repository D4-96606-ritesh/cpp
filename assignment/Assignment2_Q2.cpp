#include<iostream>
using namespace std;
   class Toothbooth{
        int cars;
        double money;
        public:
        Toothbooth(){
            cars = 0;
            money = 0;
        }

        void payingCar(){
            cars++;
            cout<<"cars are : "<<cars<<endl;
            money += 0.5;
            cout<<"money is "<<money<<endl;

        }

        void noPayingCar(){
            cars++;
            cout<<"cars are : "<<cars<<endl;

        }
        void printOnConsole(){
            cout<<"Total number of cars passed : "<<cars<<"."<<endl;
            cout<<"Total toll collected : "<<money<<" cents."<<endl;
            int paidTollCars = money/0.5;
            cout<<"Total number of cars who paid toll : "<<paidTollCars<<endl;
            cout<<"Total number of cars who do not paid toll : "<<(cars - paidTollCars)<<endl;

        }

    };
 

   int menuList(){
   
    cout<<"1.Car pays toll and passes  : "<<endl;
    cout<<"2.Car do not pays toll and passes  : "<<endl;
    cout<<"3.Print data : "<<endl;
    cout<<"4.Exit"<<endl;
     int choice;
    cout<<"Enter choice : ";
    cin>>choice;
    return choice;
}
int main(){
    int choice;
               Toothbooth t1;

    while((choice = menuList()) != 4)
    {
            switch (choice)
            {
            case 1:
                t1.payingCar();
                break;
            case 2:
                t1.noPayingCar();
                break;
            case 3:
                t1.printOnConsole();
                break;
            
            default:
                break;
            }
                cout<<endl<<"===================================="<<endl;

    }
    return 0;
}
