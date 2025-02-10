#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
long long int num;
    scanf("%lld",&num);
  int i=2;
    while(num>1){
        if(num%i != 0){
            printf("NO");
            return 0;
        }
        num/=i;
        i++;
    }
       printf("%d",i-1); 
    return 0;
}
