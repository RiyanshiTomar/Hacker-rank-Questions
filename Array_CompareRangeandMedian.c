#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; ++i){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i <= n-2; ++i){
        int min_index = i;
        for(int j = i +1; j <= n-1; ++j){
            if(a[j] < a[min_index]){
                min_index = j;
            }
        }
        int temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;
    }
    int range = a[n-1] - a[0];
    int median;
    if(n % 2 == 1){
        median = a[n/2];
    } else{
        median = (a[n/2 - 1] + a[n/2])/2.0;
    }
    
    if(range > median){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}