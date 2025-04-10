#include <stdio.h>
#include <limits.h>
#include <math.h>
void closestPairSum(int *arr, int n, int target){
    int a = 0;
    int b = 0;
    int closeSum = INT_MAX;
    int diff;
    for(int i = 0; i <= n-1; ++i){
        for(int j = i+1; j <= n-1; ++j){
            int sum = arr[i] + arr[j];
            diff = abs(sum - target);
        
        if(diff < closeSum){
            closeSum = diff;
            a = arr[i];
            b = arr[j];
        }
        }
    }
    printf("%d %d", a, b);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i <= n-1; ++i){
        scanf("%d ", &arr[i]);
    }
    int target;
    scanf("%d", &target);
    
    closestPairSum(arr, n, target);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}