#include<iostream>
using namespace std;
void swapByValue(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 10;
    int b = 20;
    cout<<"Before swap : a = "<<a<<" b = "<<b<<endl;
    swapByValue(a,b);
    cout<<"After swap by value : a = "<<a<<" b = "<<b<<endl;
    swapByReference(a,b);
    cout<<"After swap by reference : a = "<<a<<" b = "<<b;
    

}