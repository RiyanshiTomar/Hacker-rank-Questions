/*You are given two integers x and y. The variable t in this problem represents the number of test cases.

Each test case is independent and consists of two numbers x and y. For every test case, the program must determine whether there exists an integer n such that:

S(n) = x
S(n+1) = y
where S(a) denotes the sum of the digits of the number a in the decimal numeral system.

The program processes each test case one after another and outputs either "Yes" (if such an n exists) or "No" (if no such n is found).

Input Format

The first line contains an integer t – the number of test cases.
Each of the next t lines contains two integers x and y.
Constraints

1 ≤ t ≤ 500
1 ≤ x ≤ 1000
1 ≤ y ≤ 1000
Output Format

For each test case, print "Yes" if there exists an integer n satisfying the given conditions. Otherwise, print "No".
Sample Input 0

7
1 2
77 77
997 999
999 1
1000 1
1 11
18 1
Sample Output 0

Yes
No
No
Yes
No
No
Yes*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int checknumber(int x, int y){
    return (x+1 == y || (x % 9 == 0 && (x-y+1) % 9 == 0)) ? "Yes\n" : "No\n";
    
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    scanf("%d\n", &t);
    int x,y;
    while(t--){
        scanf("%d %d\n", &x, &y);
        printf(checknumber(x, y));
    }
    return 0;
}
