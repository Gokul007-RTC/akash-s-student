#include<stdio.h>
int main()
{
    int customerID,unitsConsumed;
    char customerName[50];
    float totalAmount=0.0,surcharge=0.0;
    scanf("%d",&customerID);
    scanf("%s",&customerName);
    scanf("%d",&unitsConsumed);
    if(unitsConsumed<=199)
    {
        totalAmount=unitsConsumed*1.20;
    }
    else if(unitsConsumed<=399)
    {
        totalAmount=(199*1.20)+((unitsConsumed-199)*1.50);
    }
    else if(unitsConsumed<=599)
    {
        totalAmount=(199*1.20)+(200*1.50)+((unitsConsumed-399)*1.80);
    }
    else
    {
        totalAmount=(199*1.20)+(200*1.50)+(200*1.80)+((unitsConsumed-599)*2.00);
    }

    if(totalAmount>400)
    {
        surcharge=totalAmount*0.15;
    }
    totalAmount+=surcharge;
    if(totalAmount<100)
    {
        totalAmount=100;
    }
    printf("Customer ID: %d",customerID);
    printf("\nCustomer Name: %s",customerName);
    printf("\nUnits Consumed: %d",unitsConsumed);
    printf("\nTotal Amount Payable: ₹%.2f",totalAmount);
    return 0;
}
