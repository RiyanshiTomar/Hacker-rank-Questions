#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,count;
    scanf("%d",&n);
     count =  n &1?1:0;
     count+=  n &(1<<1)?1:0;
     count+=  n &(1<<2)?1:0;
     count+=  n &(1<<3)?1:0;  
    printf("%d",count); 

    return 0;
}