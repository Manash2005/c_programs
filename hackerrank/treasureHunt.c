#include<stdio.h>
int main()
{
    int path;
    scanf("%d",&path);
    switch (path)
    {
        case 1:
            printf("Player chooses the Left path.\n");
            int (swamp);
            scanf("%d",&swamp);
            switch (swamp)
            {
                case 1:
                    printf("Poor choice, Game Over!\n");
                    break;
                case 2:
                    printf("Player found a bridge.\n");
                    int bridge;
                    scanf("%d",&bridge);
                    switch (bridge)
                    {
                        case 1:
                            printf("Player crosses the bridge safely.\n");
                            int chest;
                            scanf("%d",&chest);
                            switch (chest)
                            {
                            case 1:
                                printf("All that glitters is not gold, Game Over!\n");
                                break;
                            
                            case 2:
                                printf("All your efforts were for nothing, Game Over!\n");
                                break;

                            case 3:
                                printf("Congratulations!! You won the treasure.\n");
                                break;
                            }
                            break;
                        case 2:
                            printf("Poor luck, Game Over!");
                            break;
                    }
                    break;
            }
            break;
        
            case 2:
                printf("Player chooses the Middle path.\n");
                int ans_1;
                scanf("%d",&ans_1);
                if(ans_1==582)
                {
                    printf("Player solved the puzzle.\n");
                    int chest;
                            scanf("%d",&chest);
                            switch (chest)
                            {
                            case 1:
                                printf("All that glitters is not gold, Game Over!\n");
                                break;
                            
                            case 2:
                                printf("All your efforts were for nothing, Game Over!\n");
                                break;

                            case 3:
                                printf("Congratulations!! You won the treasure.\n");
                                break;
                            }
                            break;
                }
                else
                {
                    printf("Foolish player, Game Over!\n");
                }
            case 3:
                printf("Player chooses the Right path.\n");
                int ans_2;
                scanf("%d",&ans_2);
                if(ans_2==30)
                {
                    printf("Player solved the puzzle.\n");
                    int chest;
                            scanf("%d",&chest);
                            switch (chest)
                            {
                            case 1:
                                printf("All that glitters is not gold, Game Over!\n");
                                break;
                            
                            case 2:
                                printf("All your efforts were for nothing, Game Over!\n");
                                break;

                            case 3:
                                printf("Congratulations!! You won the treasure.\n");
                                break;
                            }
                            break;
                }
                else
                {
                    printf("Foolish player, Game Over!\n");
                }
    }
}