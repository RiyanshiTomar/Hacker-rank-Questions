#include <stdio.h>

int main() {
int p,l,l2,m,r,f;
    scanf("%d",&p);
    if(p == 1){
        printf("Player chooses the Left path.\n");
        scanf("%d",&l);
        if(l == 1){
            printf("Poor choice, Game Over!\n");
        }
        if(l == 2){
            printf("Player found a bridge.\n");
            scanf("%d",&l2);
            if(l2 == 1){
                printf("Player crosses the bridge safely.\n");
                scanf("%d",&f);
            }
             else if(l2 == 2){
                printf("Poor luck, Game Over!\n");
            }
        }
    }
     else if(p == 2){
        printf("Player chooses the Middle path.\n");
         scanf("%d",&m);
         if(m == 582){
             printf("Player solved the puzzle.\n");
             scanf("%d",&f);
         }
         else{
            printf("Foolish player, Game Over!\n"); 
         }
    }
     else if(p == 3){
        printf("Player chooses the Right path.\n");
           scanf("%d",&r);
         if(r == 30){
             printf("Player solved the puzzle.\n");
             scanf("%d",&f);
         }
         else{
            printf("Foolish player, Game Over!\n"); 
         }
    }
        if(f == 1){
            printf("All that glitters is not gold, Game Over!");
        }
        else if(f == 2){
             printf("All your efforts were for nothing, Game Over!");
        }
        else if(f == 3){
             printf("Congratulations!! You won the treasure.");
        }
    return 0;
}

    


    
    
    
