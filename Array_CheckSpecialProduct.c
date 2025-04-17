#include <stdio.h>
#include <stdbool.h>
int ourProduct(int *arr, int n){
    for(int i = 0; i <= n-2; ++i){
        int min_index = i;
        for(int j = i +1; j <= n-1; ++j){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
    return (arr[n-2]*arr[0]) > (arr[1] + arr[n-1]);
}

int main(){
    int n;
    scanf("%d\n", &n);
    int arr[n];
    for(int i = 0; i <= n-1; ++i){
        scanf("%d\n", &arr[i]);
    }
    int res = ourProduct(arr, n);
    if(res == 1){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}