#include<iostream>
using namespace std;
namespace college{
    class Student{
        int rollNo;
        string name;
        int marks;
        public:
        Student(){
            
        }
        Student(int  rollNo, string name, int marks):rollNo(rollNo), name(name),marks(marks){
            
        }
        void  setRollNo(){
            cout<<endl<<"Enter Id : ";
            cin>>rollNo;
        }
        void setName(){
             cout<<endl<<"Enter name : ";
            cin>>name;
            
        }
        void setMarks(){
            cout<<endl<<"Enter marks : ";
            cin>>marks;
        }
        void getRollNO(){
            cout<<endl<<"Roll no : "<<rollNo;
        }
        void getName(){
            cout<<endl<<"Name : "<<name;
        }
        void getMarks(){
            cout<<endl<<"Marks : "<<marks;
        }
        void display(){
            getRollNO();
            getName();
            getMarks();
        }
    };
    class Teacher{
        int id;
        string name;
        string course;
        public:
        Teacher(int id,string name,string course):id(id),name(name),course(course) {}
        void setId(){
            cout<<endl<<"Enter id : ";
            cin>>id;
          
        }
        void setName(){
             cout<<endl<<"Enter name : ";
            cin>>name;
        }
        void setCourse(){
              cout<<endl<<"Enter course : ";
            cin>>course;
        }
        void getId(){
            cout<<endl<<"Id : "<<id;
            
        }
        void getName(){
            cout<<endl<<"Name : "<<name;
        }
        void getCourse(){
            cout<<endl<<"Course : "<<course;
        }
        void display(){
            getId();
            getName();
            getCourse();
        }
    };
}
int main(){
    college::Student s(1,"Jon Snow",100);
    s.display();
    s.setRollNo();
    s.setName();
    s.setMarks();
    s.getRollNO();
    s.getName();
    s.getMarks();

    college::Teacher t (5,"Thor Odinson","StomBreaker Basics");
 
    t.display();
    t.setId();
    t.setName();
    t.setCourse();
    t.getId();
    t.getName();
    t.getCourse();
}