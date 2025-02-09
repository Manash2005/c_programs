#include <stdio.h>

int main() {
    float income,tax,taxable_amount;
    tax = 0;
    scanf("%f",&income);
    if(income<0)
    {
        printf("INVALID");
    }
    else if (income<=250000)
    {
        printf("%.2f",tax);
    }
    else if((income>250000)&&(income<=500000))
    {
        taxable_amount=income-250000;
        tax = taxable_amount * 0.05;
        printf("%.2f",tax);
    }
    else if((income>500000)&&(income<=1000000))
    {
        taxable_amount = income-250000;
        tax = (250000*0.05)+((taxable_amount-250000)*0.2);
        printf("%.2f",tax);
    }
    else
    {
        taxable_amount=income-250000;
        tax = (250000*0.05)+(500000*0.2)+((taxable_amount-750000)*0.3);
        printf("%.2f",tax);
    }
    return 0;
}