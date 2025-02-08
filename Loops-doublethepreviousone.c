#include <stdio.h>

int main() {
int n;
    scanf("%d",&n);
    for(int i=0;i<=n-1;i++){
       if(i==0) printf("<1");
        else if(i<=(n-1)) printf(" %d",1<<i);
    }
    if(n!=0)
      printf(">");
    return 0;
}
    
