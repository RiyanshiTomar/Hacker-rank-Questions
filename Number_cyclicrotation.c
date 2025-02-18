/*Given an integer N, print all cyclic rotations of the number N. A cyclic rotation involves shifting the digit in the one's place to the leftmost, and moving all other digits one place to the right. The rotations continue until the original number is reached again.

Input Format

A single integer N.
Constraints

1 ≤ N ≤ 10^9
Output Format

Print all cyclic rotations of N, one per line, in the order they are obtained by shifting the digit in the one's place to the left. The process stops when the number returns to its original configuration.
Sample Input 0

1234
Sample Output 0

4123
3412
2341
1234*/
#include <stdio.h>

int main() {

 long long int N,count=1;
int num=0;
scanf("%lld",&N);
long long int temp = N;
    while(temp>0){
temp/=10;
count*=10;
   num++;     
}  
long long int temp2 = N;
for(int i=1;num>=i;i++){
int ld = temp2%10;
    temp2/=10;
    temp2 = ld*count/10 + temp2;
    printf("%lld\n",temp2);
}

    return 0;
}
    