#include<iostream>
using namespace std;
class Date{
    int d;
    int m;
    int y;
    public:
    Date(){};
    Date (int d, int m, int y):d(d),m(m),y(y)
    { }
    void acceptRecord(){

        cout<<endl<<"Enter day: ";
        cin>>d;
        cout<<endl<<"Enter month: ";
        cin>>m;
        cout<<endl<<"Enter year: ";
        cin>>y;
    }
    void printRecord()
    {
        cout<<endl<<d<<"/"<<m<<"/"<<y;
    }
};
class Person{
    string name;
    string address;
    Date birthDate;
    public:
    Person(){};
    Person(string name,string address,Date birthdate):name(name),address(address),birthDate(birthDate)
    {

    }
    void acceptRecord(){
         cout<<endl<<"Enter name: ";
        cin>>name;
        cout<<endl<<"Enter address: ";
        cin>>address;
        cout<<endl<<"Enter birthDate: ";
        birthDate.acceptRecord();
    }
    void printRecord(){
        cout<<endl<<"name : "<<name;
        cout<<endl<<"address : "<<address;
        cout<<endl<<"DOB : ";
        birthDate.printRecord();
    }
    
};
class Student{

    Person p;
    int id;
    double marks;
    string course;
    Date joiningDate;
    Date endDate;
    public:
    Student(){}
    Student(int id, double marks, string course,Date joiningDate,Date endDate):id(id),marks(marks),course(course),joiningDate(joiningDate),endDate(endDate) 
    {}
    void acceptRecord(){
       p.acceptRecord();
        cout<<endl<<"Enter id: ";
        cin>>id;
        cout<<endl<<"Enter marks: ";
        cin>>marks;
        cout<<endl<<"Enter course: ";
        cin>>course;
        cout<<endl<<"Joining Date : "<<endl;
        joiningDate.acceptRecord();
        cout<<endl<<"End Date : "<<endl;
        endDate.acceptRecord();
    }
    void printRecord(){
        p.printRecord();
        cout<<endl<<"Id : "<<id;
        cout<<endl<<"marks : "<<marks;
        cout<<endl<<"course : "<<course;
        cout<<endl<<"Joining Date : ";
        joiningDate.printRecord();
        cout<<endl<<"End Date : ";
        endDate.printRecord();
    }

};
int menuList(){
    int choice;
    cout<<endl<<"1.Exit";
    cout<<endl<<"2.Accept Student Record";
    cout<<endl<<"3.Print Student Record";
    cout<<endl<<"Enter choice : ";
    cin>>choice;
    return choice;
}
int main(){
    int choice;
    Student *s = new Student();
    cout<<"Enter Student Info :";
    s->acceptRecord();
    s->printRecord();
    return 0;
    // while((choice != menuList()) != 1)
    // {
    //     switch(choice)
    //    { 
    //     case 2:
        
    //     break;
    //     case 3:
       
    //     break;
    //     }
    // }
}