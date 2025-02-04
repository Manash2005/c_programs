#include<stdio.h>

int main(){
    int marks;
    printf("\nEnter your marks: ");
    scanf("%d", &marks);

    if (marks >= 40){
        printf("Congratulations! , You have passed the exam");
    }
    else if((0<=marks) && (marks<40)){
        printf("Sorry, You have failed");
    }
    else{
        printf("invalid input");
    }

    return 0;

}