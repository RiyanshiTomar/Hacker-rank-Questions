/*you are given a 2D integer matrix of size N × M. Your task is to compute and print the sum of elements in each row of the matrix.

Input Format

The first line contains two space-separated integers, N and M — the number of rows and columns in the matrix.
The next N lines contain M space-separated integers each, representing the matrix elements.
Constraints

Print N space-separated integers, where the i-th integer represents the sum of elements in the i-th row of the matrix.
Output Format

1 ≤ N,M ≤ 100
−10^3 ≤ A[i][j] ≤10^3
Sample Input 0

3 4
1 2 3 4
5 6 7 8
9 10 11 12
Sample Output 0

10 26 42*/
#include <stdio.h>
#include <stdlib.h>

void sortArray(int arr[], int n) {
    // Implement sorting logic here
    int count7 = 0, count8 = 0, count9 = 0;
    for(int i = 0; i < n; ++i){
        if(arr[i] == 7) count7++;
        else if(arr[i] == 8) count8++;
        else if(arr[i] == 9) count9++;
    }
    int index = 0;
    for(int i = 0; i < count7; ++i){
        arr[index++] = 7;
    }
    for(int i = 0; i < count8; ++i){
        arr[index++] = 8;
    }
    for(int i = 0; i < count9; ++i){
        arr[index++] = 9;
    }
}




int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    sortArray(arr, n);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    free(arr);
    return 0;
}