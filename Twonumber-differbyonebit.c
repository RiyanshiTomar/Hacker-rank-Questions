

#include <stdio.h>

int main() {

    int a,b,x;
    scanf("%d %d",&a,&b);
    x = (a^b);
    if((x!=0)&&(x & (x-1)) ==0){
        printf("Yes");
    }
    else {
        printf("No");
    
}                                                              
    return 0;
}