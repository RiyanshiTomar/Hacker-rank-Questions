/*Implement a function find_most_frequent_digit(n) that returns the most frequent digit in a given number n. If there is a tie in frequency, return the largest of those digits.

Function Signature

int find_most_frequent_digit(int n);
Input Format

There is no input handling required in the function.
The function takes a single integer n as a parameter.
Constraints

0 ≤ n ≤ 10^9
Output Format

Do not print anything inside the function.
The function must return the most frequent digit as an integer. If there is a tie, return the largest digit among those with the highest frequency.
Sample Input 0

122333
Sample Output 0

3*/
#include <stdio.h>
int count0 = 0,count1 = 0,count2 = 0,count3 = 0,count4 = 0;
int count5 = 0,count6 = 0,count7 = 0,count8 = 0,count9 = 0;
   
int find_most_frequent_digit(int n) {
    //Implement this function
   
    while(n > 0){
        int digit = n % 10;
        switch(digit) {
          case 0: count0++;
                  break;
          case 1: count1++;
                  break;
          case 2: count2++;
                  break;
          case 3: count3++;
                  break;
          case 4: count4++;
                  break;
          case 5: count5++;
                  break;
          case 6: count6++;
                  break;
          case 7: count7++;
                  break;
          case 8: count8++;
                  break;
          case 9: count9++;
                  break;
        }
        n /= 10;
    }
     int max_digit = 0, max_count = count0;
    if (count0 == max_count)  { max_count = count0; max_digit = 0; }
    if (count1 >= max_count) { max_count = count1; max_digit = 1; }
    if (count2 >= max_count) { max_count = count2; max_digit = 2; }
    if (count3 >= max_count) { max_count = count3; max_digit = 3; }
    if (count4 >= max_count) { max_count = count4; max_digit = 4; }
    if (count5 >= max_count) { max_count = count5; max_digit = 5; }
    if (count6 >= max_count) { max_count = count6; max_digit = 6; }
    if (count7 >= max_count) { max_count = count7; max_digit = 7; }
    if (count8 >= max_count) { max_count = count8; max_digit = 8; }
    if (count9 >= max_count) { max_count = count9; max_digit = 9; }

    return max_digit;
}

int main() {
    int n;
    scanf("%d", &n); 
     if(n == 0){
        printf("0");
        return 0;
    }
    printf("%d\n", find_most_frequent_digit(n)); 
    return 0;
}
