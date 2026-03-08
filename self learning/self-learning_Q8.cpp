#include<iostream>
using namespace std;
class Programmer{
    public:
    Programmer(){
        cout<<endl<<"Programmer's constructor";
    }
    void work(){

        cout<<endl<<"Programmer's work";
    }
};
class Teacher{
    public:
    Teacher(){
        cout<<endl<<"Teacher's constructor";
    }
    void  work(){
    cout<<endl<<"Teachers work";

    }
};
class ProgrammingTeacher :public Teacher, public Programmer {
    public:
    ProgrammingTeacher(){
        cout<<endl<<"Programming teachers Constructor";
    }
};
int main(){

        ProgrammingTeacher pt;
        //pt.work();  //This is ambiguous
       pt.Programmer::work();
       pt.Teacher::work();
}