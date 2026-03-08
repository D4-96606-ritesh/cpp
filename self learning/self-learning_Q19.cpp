#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(10);
    l.push_back(30);
    l.push_back(40);
    l.push_back(20);
    l.push_back(80);
    l.push_back(70);
    l.push_back(90);
    l.push_back(50);
    l.push_back(100);
    l.push_back(60);

    list<int>::reverse_iterator ritr = l.rbegin();
    cout<<"Printing list in reverse : ";
    while(ritr != l.rend())
    {
        cout<<*ritr<<", ";
        ritr++;
    }
    cout<<endl<<"adding 5 in each element : ";
    list<int>::iterator itr= l.begin();
    while(itr !=  l.end())
    {
        *itr = *itr + 5;
        cout<<*itr<<", ";
        itr++;
    }
    cout<<endl<<"displaying  list using const operator ";
    list<int>::const_iterator citr = l.cbegin();
    while(citr != l.cend())
    {
        cout<<*citr<<", ";
        *citr++;
    }
    cout<<endl<<"displaying sorted list : ";
    l.sort();
    citr = l.cbegin();
    while(citr != l.cend())
    {
        cout<<*citr<<", ";
        *citr++;
    }

}