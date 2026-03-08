#include<iostream>
using namespace std;
class Student{
    int rollNo;
    double  marks;
    public:
    Student(){
        rollNo = 0;
        marks = 0;
    }
    Student(int rollNo, double makrs):rollNo(rollNo),marks(marks){

    }
    void accept(){
        cout<<endl<<"Enter rollNO : ";
        cin>>rollNo;
        cout<<endl<<"Enter marks : ";
        cin>>marks;
    }
    void display(){
        cout<<endl<<"Roll No. : "<<rollNo;
        cout<<endl<<"Marks : "<<marks;
    }
    double getMarks(){
        return  marks;
    }
};
enum choiceList{
    Exit,
    displayAllStudents,
    highestMarks,
};
choiceList menuList(){
    int choice;
    cout<<endl<<"0.Exit";
    cout<<endl<<"1.Display list of all students";
    cout<<endl<<"2.Display student of highest marks";
  
    cout<<endl<<"Enter choice : ";
    cin>>choice;
    return choiceList(choice);
}
int main(){
    int choice ;
    int size;
    cout<<"Enter number of students you want to register : ";
    cin>>size;
    Student * s = new  Student[size];
    cout<<endl<<"Register Students : ";
    for(int i = 0; i < size; i++){
        s[i].accept();
    }

    while((choice = menuList())!=0)
    {
        switch (choice)
        {
        case displayAllStudents:
                for(int i = 0; i < size; i++){
                    s[i].display();
                 }
                    break;
        case highestMarks :{
        Student temp = s[0];
        for(int i = 1 ; i<size; i++){
            
            if(temp.getMarks() < s[i].getMarks())
            {
                temp = s[i];
            }
        }
        cout<<endl<<"Student with highest Marks : ";
        temp.display();
        break;
    }
        default:
            break;
        }
    }
    delete []s;
}