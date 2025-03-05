#include <stdio.h>

int main() {

    int age,annual_income,risk_tolerance;
    scanf("%d %d %d",&age,&annual_income,&risk_tolerance);
    if(age<30)
    {
        if(annual_income>75000)
        {
            if(risk_tolerance==1 || risk_tolerance==2)
            {
                printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
            }
            else
            {
                printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
            }
        }
        else
        {
            if(risk_tolerance==1 || risk_tolerance==2)
            {
                printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
            }
            else
            {
                printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
            }
        }
    }
    else if(age<=50)
    {
        if(annual_income>75000)
        {
            if(risk_tolerance==1 || risk_tolerance==2)
            {
                printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
            }
            else
            {
                printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
            }
        }
        else
        {
            if(risk_tolerance==1 || risk_tolerance==2)
            {
                printf("Low Risk Portfolio: Suitable for conservative investments.");
                if(risk_tolerance==2)
                {
                    printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
                }
            }
            else
            {
                
            }
        }
    }
    else
    {
        if(annual_income>75000)
        {
            if(risk_tolerance==1 || risk_tolerance==2)
            {
                printf("Low Risk Portfolio: Suitable for conservative investments.");
            }
            else
            {
                printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
            }
        }
        else
        {
            if(risk_tolerance==1 || risk_tolerance==2)
            {
                printf("Low Risk Portfolio: Suitable for conservative investments.");
            }
            else
            {
                
            }
        }
    }
    return 0;
}