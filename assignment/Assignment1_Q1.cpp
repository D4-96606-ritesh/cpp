#include<stdio.h>
struct Date{
    int day;
    int month;
    int year;
    void initDate(Date *d)
    {
        d->day = 20;
        d->month = 12;
        d->year = 2026;
    }
    void printDate(Date * d)
    {
        printf("\nCurrent date is : %d/%d/%d\n",day,month,year);
    }
    void acceptDated(Date *d){
        printf("\nEnter day : ");
        scanf("%d",&day);
        printf("\nEnter month : ");
        scanf("%d",&month);
        printf("\nEnter year : ");
        scanf("%d",&year);
    }
};
int makeChoice(){
    int choice;
    printf("1.Exit\n");
    printf("2.Print Date\n");
    printf("3.Update Date\n");
    printf("Enter choice : ");
    scanf("%d",&choice);
    return choice;
}
int main()
{
    Date d;
    d.initDate(&d);
    int choice;
    while((choice = makeChoice()) != 1)
    {
        switch(choice)
       { case 2:
        d.printDate(&d);
        break;
        case 3:
        d.acceptDated(&d); }
    }
    return 0;
}