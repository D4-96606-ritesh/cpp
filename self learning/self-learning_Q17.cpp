#include<iostream>
#include<fstream>
using namespace std;
class Student{
    string name;
    int rollNo;
    public:
    Student(string name, int rollNo):name(name),rollNo(rollNo){}
    string getName(){
        return name;
    }
    int getRollNo(){
        return rollNo;
    }
    void display(){
        cout<<endl<<"name : "<<name;
        cout<<endl<<"rollNo : "<<rollNo;
    }

};
int main(){
    Student s1 ("Ritesh",20);
    Student s2 ("Manish",21);
    ofstream fout("file1.txt",ios::app) ;
    fout<<s1.getName()<<", "<<s1.getRollNo()<<endl;
    fout<<s2.getName()<<", "<<s2.getRollNo();

}