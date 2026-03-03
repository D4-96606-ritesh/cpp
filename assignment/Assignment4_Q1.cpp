// You are not supposed to declare array of pointer but array of array object
#include<iostream>
using namespace std;
class Time{
    int hr;
    int min;
    int sec;
    public:
    Time(){};
    Time(int h,int m, int s)
    {
        hr = h;
        min = m;
        sec =s;
    }
    int getHour(){
        return hr;
    }
    int getMinute(){
        return min;
    }
    int getSeconds(){
        return sec;
    }
    void setHour(){
        cout<<endl<<"Enter hour : ";
        cin>>hr;
    }
    void setMinute(){
        cout<<endl<<"Enter minutes : ";
        cin>>min;
    }
    void setSecond(){
        cout<<endl<<"Enter seconds : ";
        cin>>sec;
    }
    void printTime(){
        cout<<endl<<"Time is "<<hr<<" : "<<min<<" : "<<sec;
    }
};
int menuList(){
    int choice;
    cout<<endl<<"1.Add Time.";
    cout<<endl<<"2.Display all time.";
    cout<<endl<<"3.Display all hours.";
    cout<<endl<<"4.Exit"<<endl;
    cin>>choice;
    return choice;
}
int main(){
    int n = 3;
    Time * arr  = new Time[n];
    int curSize = 0;
    cout<<endl<<"Enter 3 Time ";
   
    int choice;
    while((choice = menuList())!=4)
    {
        switch (choice)
        {
        {
            case 1:
       
        if(curSize >= n)
        {
             cout<<endl<<"You cant add more time. Pointer array is full";
        }
        else{
            arr[curSize] =  Time();
             arr[curSize].setHour();
             arr[curSize].setMinute();
             arr[curSize].setSecond();
        }
        curSize++;}
  
      break;
        case 2:
              for(int i = 0; i < 3; i++)
                {
                    arr[i].printTime();
                } 
                break;
        case 3: 
                      for(int i = 0; i < 3; i++)
                    {
                       int hr = arr[i].getHour();
                       cout<<endl<<"Hour value at position "<<i<<" is : "<<hr;
                    }
        default:
            break;
        }
    }

 
    return 0;
}