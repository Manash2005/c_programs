/*divisible by 400 - yes(leap year) 
divisble by 100 - yes (not a leap year)
divsible by 4 - yes (leap year) */
#include<stdio.h>

int main(){
    int year;
    printf("\nEnter the year: ");
    scanf("%d", &year);

    if (year%400 == 0){
        printf("It is a leap year");
    }
    else{
        if(year%100 == 0){
            printf("It is not a leap year");
        }
        else{
            if(year%4==0){
                printf("It is a leap year");
            }
            else{
                printf("Not a leap year");
            }
        }
    }


    return 0;
}