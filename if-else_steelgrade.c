#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int h,t,grade;
    float c;
    scanf("%d %f %d", &h, &c, &t);
    
    int condition1 = (h > 50 && h <= 500);
    int condition2 = (c < 0.7 && c >= 0.0);
    int condition3 = (t > 5600 && t <= 50000);
    
    if(condition1 && condition2 && condition3){
        grade = 10;
        printf("The grade of the steel is: %d\n", grade);
        printf("All of the conditions met.");
    } else if(condition1 && condition2){
        grade = 9;
        printf("The grade of the steel is: %d\n", grade);
        printf("Two conditions met.");
    } else if(condition2 && condition3){
        grade = 8;
        printf("The grade of the steel is: %d\n", grade);
        printf("Two conditions met.");
    } else if(condition1 && condition3){
        grade = 7;
        printf("The grade of the steel is: %d\n", grade);
        printf("Two conditions met.");
    } else if(condition1 || condition2 || condition3){
        grade = 6;
        printf("The grade of the steel is: %d\n", grade);
        printf("Only one condition met.");
    } else{
        grade = 5;
        printf("The grade of the steel is: %d\n", grade);
        printf("None of the conditions met.");
    }
        
    
    return 0;
}