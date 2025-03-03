#include <stdio.h>

int main() {

    int budget, numGuests, foodCostPerGuest, decorationCost, musicCost, extraExpenses,totalCost;
    scanf("%d %d %d %d %d %d",&budget, &numGuests, &foodCostPerGuest, &decorationCost, &musicCost, &extraExpenses);
    
    if(numGuests>5 && numGuests<=50)
    {
        if (decorationCost < (int)(0.3 * budget) || (foodCostPerGuest * numGuests) < (int)(0.5 * budget))
        {
            if(numGuests>25)
            {   
                if(musicCost>0)
                {
                    totalCost = decorationCost+musicCost+(foodCostPerGuest*numGuests)+extraExpenses;
                    if(totalCost>budget)
                    {
                        printf("Celebration Denied");
                    }
                    else
                    {
                        printf("Celebration Approved");
                    }
                }
                else
                {
                    printf("Celebration Denied");
                }
            }
            else
            {
                totalCost = decorationCost+(foodCostPerGuest*numGuests)+extraExpenses;
                if(totalCost>budget)
                {
                    printf("Celebration Denied");
                }
                else
                {
                    printf("Celebration Approved");
                }
            }
        }
        else
        {
            printf("Celebration Denied");
        }
    }
    else
    {
        printf("Celebration Denied");
    }
    
    return 0;
}