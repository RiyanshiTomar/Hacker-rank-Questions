#include <stdio.h>
#include <string.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int month;
    int year;
    scanf("%d\n", &month);
    scanf("%d\n", &year);
    
    int Invalid = 0;
    
    //if(month < -1000000 && month > 1000000){
       // printf("Invalid Month\n");
    //}
    //if(year < -1000000 && year > 1000000){

    
    if(month < 1 || month > 12 || month < -1000000 || month > 1000000){
        printf("Invalid Month\n");
        Invalid = 1;
    
    }
    if(year < 1 || year > 1000000){
        printf("Invalid Year\n");
        Invalid = 1;
        
        
    }
    
    if(Invalid){
        return 0;
    }
    
    int days = 0;
    
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        days = 31;
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11){
        days = 30;
    }
    else if(month == 2){
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
            days = 29;
        } else {
            days = 28;
        }
    }
    
    printf("%d\n", days);
    
    
    return 0;
}