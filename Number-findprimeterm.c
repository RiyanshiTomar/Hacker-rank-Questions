#include <stdio.h>
#include <stdbool.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d", &n);
    int num = 1, count = 0;
    while(count < n){
        num++;
        int flag = 1;
        for(int i = 2; i*i <= num; ++i){
            if(num % i == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            count ++;
        }
    }
    printf("%d", num);
    
    return 0;
}