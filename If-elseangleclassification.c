#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a;
    scanf("%d",&a);
    if(a>=0 && a<90){
        printf("Acute Angle");
        return 0;
    }
    else  if(a==90){
        printf("Right Angle");
         return 0;
    }
    else  if(a>90 && a<180){
        printf("Obtuse Angle");
         return 0;
    }
    else  if(a==180){
        printf("Straight Angle");
         return 0;
    }
      else  if(a>180 && a<360){
        printf("Reflex Angle");
           return 0;
    }
    a = a % 360;
   
    if(a>0 && a<90){
        printf("Acute Angle");
    }
    else  if(a==90){
        printf("Right Angle");
    }
    else  if(a>90 && a<180){
        printf("Obtuse Angle");
    }
    else  if(a==180){
        printf("Straight Angle");
    }
      else  if(a>180 && a<360){
        printf("Reflex Angle");
    }
     else  if(a==0){
        printf("Full Rotation");
    }
    
     
    return 0;
}

