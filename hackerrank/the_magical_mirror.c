#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    int cond_1 = num%2==0 && num > 10;
    int cond_2 = num > 15 && num%3==0;
    int cond_3 = num%7==0;
    if(num>0){
          if(cond_1 && cond_2 && cond_3)
        {
            printf("The verdict for the number %d is: SUPERNATURAL\n",num);
        }
        else if((cond_1 && cond_2)||(cond_2 && cond_3)||(cond_3 && cond_1))
        {
            printf("The verdict for the number %d is: MIRACULOUS\n",num);
        }
        else if(cond_1 || cond_2 || cond_3)
        {
            printf("The verdict for the number %d is: MAGICAL\n",num);
        }
        else
        {
            printf("The verdict for the number %d is: NORMAL\n",num);
        }
    }
    else{
        printf("The verdict for the number %d is: INVALID\n",num);
    }
    
    return 0;
}