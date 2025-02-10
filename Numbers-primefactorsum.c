#include <stdio.h>

int main() {  
    int n;
    scanf("%d", &n);
    int sum = 0;
    int i = 2;
    /*int firstflag = 0;
    for(int i = 2; i <= n/2;){
        int flag = 1;
        for(int j = 2; j < i; ++j){
            if(i % j == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            if(num % i == 0){
               sum = sum + i;
               num /= i;
               firstflag = 1;
            }
        }
        if(num % i != 0){
            i++;
        }
    }
    if(firstflag == 1){
      printf("%d", sum);
    }
    else {
        printf("%d", n);
    }*/
    while(n != 1){
        if(n % i == 0){
            sum = sum + i;
            n = n/i;
            
        } else {
            ++i;
        }
        
    }
    printf("%d", sum);

    return 0;
}