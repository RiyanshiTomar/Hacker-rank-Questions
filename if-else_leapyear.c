#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long int year;
    scanf("%lld", &year);
    
    if(year < -100000 || year > 100000){
        printf("The given year %lld is Invalid year.\n", year);
        return 0;
    }
    
    
    if(year > 0 && year % 4 == 0){
        if(year % 100 == 0 && year % 400 == 0){
            printf("Yes, %lld is a leap year.", year);
        } else if(year % 100 != 0 && year % 400 != 0){
            printf("Yes, %lld is a leap year.", year);
        } else{
            printf("No, %lld is not a leap year.", year);
        }
    } else if(year > 0){
        printf("No, %lld is not a leap year.", year);
    } else{
        printf("The given year %lld is Invalid year.", year);
    }
    return 0;
}