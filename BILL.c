#include<stdio.h>
int main()
{

    int unit,amount;
    float surcharge, bill;
    char name[50];
    printf("enter a customer name:");
    scanf("%s",&name);
    printf("enter a unit consumed:");
    scanf("%d",unit);
    if(unit<=100)
    {
        amount=100+(unit*5);
    }
    else if(unit>100 && unit<=300)
    {

        amount=100+(100*5)+((unit-100)*7);
    }
    else
    {
        amount=100+(100*5)+(200*7)+((unit-300)*10);
    }
   if(amount>1000)
   {

    bill=amount+(amount*0.05);
    surcharge=amount*0.05;
   }
   else
   {
       bill=amount;
   }
   printf("customer details:Name:%s,unit=%d,amount=%d,bill:%.2lf,surcharge:%.2lf",name,unit,amount,bill,surcharge);
   return 0;
}
