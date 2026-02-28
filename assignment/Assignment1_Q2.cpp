#include<stdio.h>
class Date{
    int day;
    int month;
    int year;
    public :
        void initDate()
        {
           day = 20;
             month = 12;
           year = 2026;
        }
        void printDate()
        {
            printf("\nCurrent date is : %d/%d/%d\n",day,month,year);
        }
        void acceptDated(){
            printf("\nEnter day : ");
            scanf("%d",&day);
            printf("\nEnter month : ");
            scanf("%d",&month);
            printf("\nEnter year : ");
            scanf("%d",&year);
        }
        bool isLeapYear(){
    if((year%4 == 0 && year % 100 != 0 ) || (year % 400 == 0))
    {
      printf("%d is leap year",year);
        
    }
    else{
      printf("%d is not leap year",year);
    }
}
};

int makeChoice(){
    int choice;
    printf("\n1.Exit\n");
    printf("2.Print Date\n");
    printf("3.Update Date\n");
    printf("4.check leap year\n");
    printf("Enter choice : ");
    scanf("%d",&choice);
    return choice;
}
int main()
{
    Date d;
    d.initDate();
    int choice;
    while((choice = makeChoice()) != 1)
    {
        switch(choice)
       { case 2:
        d.printDate();
        break;
        case 3:
        d.acceptDated(); 
        break;
        case 4:
        d.isLeapYear();
    }

    }
    return 0;
}