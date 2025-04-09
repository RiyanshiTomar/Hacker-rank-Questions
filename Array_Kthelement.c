#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * Finds the kth smallest element in the array by iteratively finding the next
 * minimum.
 * @param arr: The input array.
 * @param n: The number of elements in the array.
 * @param k: The order of the smallest element to find (1-indexed).
 * @return: The kth smallest element in the array.
 */
int kthSmallest(int a[], int n, int k) {
  // Write your code here
    int current = 0;
    int prev = INT_MIN;
    for(int i = 0; i <k; ++i){
        current = INT_MAX;
        for(int j = 0; j < n; ++j){
            if(a[j] < current && a[j] > prev){
                current = a[j];
                
            }
            
        }
         prev = current;
    }
       
        return current;
    }

int main() {
  int n, k;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  scanf("%d", &k);
  printf("%d\n", kthSmallest(arr, n, k));

  return 0;
}