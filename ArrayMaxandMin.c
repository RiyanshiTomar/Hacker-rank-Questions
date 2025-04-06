#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size;
    scanf("%d\n", &size);
    int a[size];
    for(int i = 0; i <= size-1; ++i){
        scanf("%d ", &a[i]);
    }
    int max = a[0];
    int min = a[0];
    for(int i = 0; i <= size-1; ++i){
        if(a[i] > max){
            max = a[i];
        }
    }
    for(int i = 0; i <= size-1; ++i){
        if(a[i] < min){
            min = a[i];
        }
    }
    printf("%d %d", max, min);
    
    return 0;
}