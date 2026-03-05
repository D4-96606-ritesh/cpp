#include <iostream>
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

    void accept()
    {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display()
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

int main()
{
    // cout << "--- Employee --";
    // Employee e;
    // e.accept();
    // e.display();

    cout << "--- Manager ---";
    Manager m;
    m.acceptManager();
    m.displayManager();

    // cout << "-- Salesman ---"<<endl;
    // Salesman s;
    // s.acceptSalesman();
    // s.displaySalesman();

    // cout << "--- SalesManager ---";
    // SalesManager sm;
    // sm.accept();
    // sm.display();

    return 0;
}