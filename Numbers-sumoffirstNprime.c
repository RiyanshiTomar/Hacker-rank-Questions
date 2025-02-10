#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d", &n);
    int count = 0, num = 1, sum = 0;
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
            count++;
            sum = sum + num;
        }
    }
    printf("%d", sum);
    return 0;
}