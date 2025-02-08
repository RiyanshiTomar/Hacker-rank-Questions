#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 

    int n;
    scanf("%d", &n);
     if((n&1)==1){
        n++;
    }
    if(n<=2){
        printf("Shape Not Possible");
    }
 
    
    else{
     for(int i=1;i<=(n/2);i++){
         for(int k=1;k<=(n/2)-i;k++){
             printf(" ");
         }
         for(int j=1;j<=(2*i-1);j++){
             if((j==1) || (j==(2*i-1)) ||(j==i)){
                 printf("*");
             }
             else{
                 printf(" ");
             }
         }
         printf("\n");
     }
      for(int i=1;i<=(n/2);i++){
          for(int k=1;k<=((n/2)-1);k++){
              printf(" ");
          }
          printf("*\n");
      }
        
        
        
    }
    return 0;
} 