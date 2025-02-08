#include <stdio.h>

int main() {
int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i==n) printf("1.");
        else printf("%d ",((n-i+1)*2 - 1));
    }
  
    return 0;
}
    