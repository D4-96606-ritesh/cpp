#include <iostream>
#include<typeinfo>
using namespace std;

class Employee
{
protected:
    int id;
    double salary;

public:
    Employee(void ) : id(0), salary(0.0)
     {   }

    Employee(int id, double salary): id(id), salary(salary)
     {     }

    void setId(int id)
    {
        this->id = id;
    }

    int getId()
    {
        return id;
    }

    void setSalary(double salary)
    {
        this->salary = salary;
    }

    double getSalary()
    {
        return salary;
    }

   virtual void accept()
    {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Salary: ";
        cin >> salary;
    }

   virtual void display()
    {
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Manager : virtual public Employee
{
protected:
    double bonus;

public:
    Manager() : bonus(0.0)
     {    }

    Manager(int id, double salary, double bonus): Employee(id, salary), bonus(bonus)
     {    }

    void setBonus(double bonus)
    {
        this->bonus = bonus;
    }

    double getBonus()
    {
        return bonus;
    }

    void acceptManager()
    {
        accept();
        cout << "Enter Bonus: ";
        cin >> bonus;
    }

    void displayManager()
    {
        display();
        cout << "Bonus: " << bonus << endl;
    }

    void accept()
    {
        Employee::accept();
        cout << "Enter Bonus: ";
        cin >> bonus;
    }

    void display()
    {
        Employee::display();
        cout << "Bonus: " << bonus << endl;
    }
};

class Salesman : virtual public Employee
{
protected:
    double commission;

public:
    Salesman() : commission(0.0)
     {   }

    Salesman(int id, double salary, double commission): Employee(id, salary), commission(commission)
     {    }

    void setCommission(double commission)
    {
        this->commission = commission;
    }

    double getCommission()
    {
        return commission;
    }

    void acceptSalesman()
    {
        accept();
        cout << "Enter Commission: ";
        cin >> commission;
    }

    void displaySalesman()
    {
        display();
        cout << "Commission: " << commission << endl;
    }

    void accept()
    {
        Employee::accept();
        cout << "Enter Commission: ";
        cin >> commission;
    }

    void display()
    {
        Employee::display();
        cout << "Commission: " << commission << endl;
    }
};


class SalesManager : public Manager, public Salesman
{
public:
    SalesManager() { }

    SalesManager(int id, double salary, double bonus, double commission)
    {
        this->id = id;
        this->salary = salary;
        this->bonus = bonus;
        this->commission = commission;
    }

    void accept()
    {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Salary: ";
        cin >> salary;
        cout << "Enter Bonus: ";
        cin >> bonus;
        cout << "Enter Commission: ";
        cin >> commission;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Commission: " << commission << endl;
    }
};
int menuList(){
    int choice;
    cout<<endl<<"1.Add Manager";
    cout<<endl<<"2.Add Salesman";
    cout<<endl<<"3.Add SalesManager";
    cout<<endl<<"4.Display count of all Employees with respect to designation";
    cout<<endl<<"5.Display All Manager";
    cout<<endl<<"6.Display All Salesman";
    cout<<endl<<"7.Display All SalesManager";
    cout<<endl<<"8.Exit"<<endl;
    cin>>choice;
    return choice;
}
int main()
{
    int choice;
    Employee *e[3]; 
    int curPos = 0;
    while((choice = menuList())!= 8)
    {
        if(curPos ==3 && (choice == 1 || choice == 2 || choice == 3) )
        {
            cout<<endl<<"Cant add more employee.";
        }
        else{
            switch(choice){
            case 1:{
                Manager * m = new  Manager();
                m->accept();
                e[curPos++] = m;
                break;
            }
            case 2:{
                Salesman *s = new Salesman();
                s->accept();
                e[curPos++] = s;
                break;
            }
            case 3:{
                SalesManager *s = new  SalesManager();
                s->accept();
                e[curPos++] = s;
                break;
            }
            case 4:
            {
                int manager= 0;
                int salesman =0;
                int salesmanager = 0;
                for(int i = 0 ;i < curPos; i++)
                {
                    string name = typeid(*e[i]).name();
                   
                    if(name == typeid(Manager).name())
                    {
                        manager++;
                    }
                    else if(name == typeid(Salesman).name())
                    {
                        salesman++;
                    }
                    else{
                        salesmanager++;
                    }
                }
                cout<<endl<<"count of all employees designation wise";
                cout<<endl<<"Manager : "<<manager;
                cout<<endl<<"SalesMan : "<<salesman;
                cout<<endl<<"Salesmanager : "<<salesmanager;
                break;
            }
            case 5:
            {
                 for(int i = 0 ;i < curPos; i++)
                {
                    string name = typeid(*e[i]).name();
                    Manager *m;
                    if(name == typeid(Manager).name())
                    {
                        m = dynamic_cast<Manager*>(e[i]); 
                        m->display();
                    }
                }
                break;

            }
            case 6:
            {
                 for(int i = 0 ;i < curPos; i++)
                {
                    string name = typeid(*e[i]).name();
                    Salesman *s;
                    if(name == typeid(Salesman).name())
                    {
                    s= dynamic_cast<Salesman*>(e[i]); 
                        s->display();
                    }
                }
                break;

            }
            case 7:
            { 
                for(int i = 0 ;i < curPos; i++)
                {
                    string name = typeid(*e[i]).name();
                    SalesManager *s;
                    if(name == typeid(SalesManager).name())
                    {
                    s= dynamic_cast<SalesManager*>(e[i]); 
                        s->display();
                    }
                }
                break;

            }
        }
        }
        
    }

    return 0;
}