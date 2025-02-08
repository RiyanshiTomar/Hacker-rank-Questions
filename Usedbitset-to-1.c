#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 

    int n;
    scanf("%d", &n);

   if (n == 0) { printf("No\n"); return 0;}


    if ((n & (n + 1)) == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
    