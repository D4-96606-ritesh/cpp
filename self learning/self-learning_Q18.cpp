#include<iostream>
#include<cstring>
using namespace std;
template<typename  T>
#define SIZE 3
class Array{
     T arr[SIZE];
     public:
    Array(){
        memset(arr,0,sizeof(arr));
    }
    void setArray(){
        cout<<endl<<"Enter values of array : "<<endl;
      
        for(int i = 0 ; i < SIZE; i++)
        {
            cin>>arr[i];
        }
    }
    void display(){
        cout<<endl<<"values of array : "<<endl;
        
        for(int i = 0 ; i < SIZE; i++)
        {
            cout<<arr[i]<<", ";
        }
    }


};
int main(){
    Array <double>a1;
    a1.setArray();
    a1.display();
    Array <int> a2;
    a2.setArray();
    a2.display();
}