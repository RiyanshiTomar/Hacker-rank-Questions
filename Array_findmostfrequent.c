/*You are given an array of positive integers. Your task is to find the element that occurs most frequently in the array. If more than one element has the same highest frequency, print the one that appears first in the array.

Input Format

The first line contains an integer n, the number of elements in the array.
The second line contains n space-separated integers representing the array elements.
Constraints

1 ≤ n ≤ 10⁵
1 ≤ arr[i] ≤ 1000
Output Format

Print the most frequent element in the array.
Sample Input 0

5
10 20 10 30 10
Sample Output 0

10
Sample Input 1

6
5 5 4 4 6 7
Sample Output 1

5*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i <= n-1; ++i){
        scanf("%d", &a[i]);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
      int freq[n];
    for(int i = 0; i <= n-1; ++i){
        freq[i] = 0;
    }
    for(int i = 0; i <= n-1; ++i){
         int count = 1;
        if(freq[i] != -1){
           
            for(int j = i+1; j <n; ++j){
                if(a[i] == a[j]){
                freq[j] = -1;
                count++;
            }
        }
            
        freq[i] = count;
    }
    }
    int max = 0;
    for(int i = 0; i <= n-1; ++i){
        if(freq[i] > freq[max]){
            max = i;
        }
        
    }
    printf("%d",a[max] );
    
    
    return 0;
}