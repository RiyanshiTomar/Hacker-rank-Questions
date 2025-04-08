/*Complete the function findSecondLargest() which takes an array of integers and its size as input and returns the second largest element in the array. If there is no second largest element, return -1.

Function Signature

int findSecondLargest(int arr[], int n);
Input Format

The function will receive:
An integer n, the number of elements in the array.
An integer array arr[] of size n, where arr[i] represents the i-th element.
Constraints

1 ≤ n ≤ 10^5
−10^9 ≤ arr[i] ≤ 10^9
The function should run in O(N) time complexity and use O(1) extra space.
Output Format

Return the second largest element in the array.
If there is no valid second largest element, return -1.
Sample Input 0

5  
1 3 4 5 2  
Sample Output 0

4*/

#include <stdio.h>
#include <limits.h>

int findSecondLargest(int a[], int n) {
    // Complete the function logic here
    for(int i = 0; i < n-1; ++i){
        int min_index = i;
        for(int j = i+1; j < n; ++j){
            if(a[j] < a[min_index]){
                min_index = j;
            }
        }
        int temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;
    }
    if(n == 1){
        return -1;
    }
    else{
        for(int i = n-1; i > 0; --i){
            if(a[i] > a[i-1]){
                return a[i-1];
            }
        }
    }
    return -1;
    
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findSecondLargest(arr, n));
    return 0;
}