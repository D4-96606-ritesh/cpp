#include<iostream>
using namespace std;
class Person{
    string name;
    int age;
    public:
    void display(){
        cout<<endl<<"Name : "<<name;
        cout<<endl<<"Age : "<<age;
    }
    virtual void work() = 0;

};
class Teacher : public Person{
    double salary;
    void display(){
        cout<<endl<<"salary : "<<salary;
    }
    void teach(){
        cout<<endl<<"teach";
    }
    void work(){
        cout<<endl<<"Teacher is working";
    }
};
class Student: public Person{
        double  marks;
        void display(){
            cout<<endl<<"marks : "<<marks;
        }
        void study(){
        cout<<endl<<"study";
        }
        void work(){
            cout<<endl<<"Student is working";
        }
};

int main(){
    Person *s = new Student();
    Person *t = new Teacher();
    s->work();
    t->work();
    delete s;
    delete t;
    s = NULL;
    t = NULL;

}
