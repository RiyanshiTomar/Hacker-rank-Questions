/*Aakash is fascinated by numbers and how they transform under various operations. He discovered an interesting operation called Rotating Digits and wants to write a function to process numbers accordingly.

Rotating Digits has two operatons:

Right Rotation: It is performed by shifting the digit in the one's place to the leftmost and shifting all other digits right by 1 unit.
Left Rotation: It is performed by shifting the leftmost digit to one's place and shifting all other digits left by 1 unit.
image

A number is transformed based on the following rules:

If the number has three or more digits and is a palindrome or a prime, follow these special rules:

If it is a palindrome, rotate its digits right by two positions.
If it is a prime, rotate its digits left by two positions.
If it is both prime and a palindrome, keep it unchanged.
Otherwise:

If the number is even, rotate its digits right by one position.
If the number is odd, rotate its digits left by one position.
Write a program to perform the following operation on the given number N.

Note: Each testcase contains multiple inputs as numbers.

Input Format

The first line contains the number of inputs as t.
Next t lines consists of one interger N which represents the number.
Constraints

1 <= t <= 100
1 <= N <= 106
Output Format

For given t inputs, output the resultant number based on conditions, on a separate line.
Sample Input 0

3
121
45
44
Sample Output 0

211
54
44
Explanation 0

121: It has 3 digits, is a palindrome but not prime, so it is rotated right by 2, changing 121 → 112 → 211, hence the output is 211.

45: It is a 2-digit odd number, so it is rotated left by 1, changing 45 → 54, hence the output is 54.

44: It is a 2-digit even number, so it is rotated right by 1, but since both digits are the same, it remains 44, hence the output is 44.

Sample Input 1

5
68
85
1221
9973
9999
Sample Output 1

86
58
2112
7399
9999*/
#include <stdio.h>
#include <math.h>
int is_palindrome(int n){
    int reversed = 0, original = n, digit;
    while(n > 0){
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return original == reversed;
}
int is_prime(int n){
    if(n < 2) return 0;
    for(int i = 2; i*i <= n; ++i){
        if(n % i == 0){
            return 0;
        }
        
    }
    return 1;
}
int digit_count(int n){
    int count = 0;
    while(n > 0){
        count++;
        n /= 10;
    }
    return count;
}
int rotate_right(int n, int position){
    int digit = digit_count(n);
    int divisor = pow(10, position);
    int right_part = n % divisor;
    n /= divisor;
    return right_part*pow(10, digit-position) + n;
    
}
int rotate_left(int n, int position){
    int digit = digit_count(n);
    int divisor = pow(10, digit-position);
    int left_part = n / divisor;
    n %= divisor;
    return n * pow(10, position) + left_part;
    
}
int apna_number(int n){
    int digit = digit_count(n);
    if(digit >= 3 && (is_palindrome(n) || is_prime(n))){
        if(is_palindrome(n) && is_prime(n)){
            return n;
        }
        else if(is_palindrome(n)){
            return rotate_right(n, 2);
        }
        else if(is_prime(n)){
            return rotate_left(n, 2);
        }
    }
    else{
        if(n % 2 == 0){
            return rotate_right(n , 1);
        }
        else {
            return rotate_left(n, 1);
        }
    
    }
    return n;
    
}
int main() {
    int t, n;
    scanf("%d", &t);
    for(int i = 0; i < t; ++i){
        scanf("%d", &n);
       
        printf("%d\n", apna_number(n));
    }
    return 0;
    
}