#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
float b,g,f,d,m,x;
    scanf("%f %f %f %f %f %f",&b,&g,&f,&d,&m,&x);
    if((b>=(f*g +d+m+x)) && (g<=25 || m>0) && (g>5 && g<=50) && ((f*g < b*0.5)||(d <0.3*b))){
        printf("Celebration Approved");
    }
      else{
          printf("Celebration Denied"); 
      } 
    return 0;
}
    