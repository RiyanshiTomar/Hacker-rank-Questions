#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n1,n2;
    scanf("%d %d", &n1, &n2);
    int count = 0;
    int i = n1;
    int flag2 = 1;
         
      int i2 = n1;
    while(i2 <= n2){
        int flag = 1;
        for(int j = 2; j*j <= i2; j++){
            if(i2 % j == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1 && i2 != 1){
            printf("%d ", i2); 
            flag2=0;
        }
        i2++;
        
    }
    // printf("\n");
      while(i <= n2){
        int flag = 1;
        for(int j = 2; j *j <= i; ++j){
            if(i % j == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1 && i != 1){
            count = count + 1;
        }
        i++;
    }
        if(flag2==0)
         printf("\n%d", count);
      else          printf("%d", count);

    
    return 0;
}