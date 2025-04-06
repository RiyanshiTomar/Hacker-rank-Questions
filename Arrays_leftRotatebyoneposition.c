/*You are given an array of integers. Your task is to implement a function that modifies the given array in-place to left rotate it by one position.

Function Signature

void leftRotateByOne(int arr[], int n);
Note: The function should not return anything and must modify the given array itself.

Input Format

The function leftRotateByOne will receive:
An integer array arr of size n.
An integer n representing the number of elements in the array.
Constraints

1 ≤ n ≤ 10⁵
-10⁶ ≤ arr[i] ≤ 10⁶
You must modify the given array in-place → No additional arrays should be used.
Output Format

The function should modify the given array in-place by one left rotation.
You do not need to print anything.
Sample Input 0

5
1 2 3 4 5
Sample Output 0

2 3 4 5 1*/
#include <stdio.h>

void leftRotateByOne(int arr[], int n) {
    // Your code here
    int temp[1];
    for(int i = 0; i < 1; ++i){
        temp[i] = arr[i];
    }
    for(int i = 0; i < n-1; ++i){
        arr[i] = arr[i+1];
    }
    for(int i = 0; i < 1; ++i){
        arr[n-1+i] = temp[i];
    }
    
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    leftRotateByOne(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
