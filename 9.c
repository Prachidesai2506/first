#include<stdio.h>
int main()
{
    int days,fine;
    printf("\n Enter the number of days :");
    scanf("%d",&days);
    if(days>=1 && days<=5)
    {
      fine=0.50*days;
    }
    else if(days>=6 && days<=10)
    {
      fine=1*days;
    }
    else if(days>10)
    {
      fine=5*days;
    }
    else if(days>30)
    {
      printf("\n Your membership is expired");
    }
    printf("Your total charge is : %d",fine);
    return 0;
}


