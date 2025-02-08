#include <stdio.h>

int main() {
int n,s1,s2,s3,s4,a1,a2,a3,a4;
    scanf("%d",&n);
    if(n>=0){
    if(n==0) printf("Circle");
     else if(n==3){
        scanf("%d %d %d %d %d %d",&s1,&s2,&s3,&a1,&a2,&a3);
        if((s1>0 && s2>0 && s3>0 && a1>0 && a2>0 && a3>0)&&(a1+a2+a3 == 180)&&((s1+s2 > s3)&& (s3+s2 > s1)&& (s1+s3 > s2))){
            if(s1==s2 && s1==s3 ) {
                if( a1==60 && a2==60 && a3==60){
                printf("Equilateral Triangle");}
                 else printf("Invalid Figure");
            }
            else if(((s1==s2 && s1!=s3 && (a1==a2 && a1!=a3))|| (s2==s3 && s1!=s3 && (a3==a2 && a1!=a3)) || (s1==s3 && s1!=s2 && (a1==a3 && a1!=a2))))  printf("Isosceles Triangle");
            else if(s1!=s2 && s1!=s3 && s2!=s3 && a1!=a2 && a1!=a3 && a2!=a3  ) printf("Scalene Triangle");
            else printf("Invalid Figure"); 
    }
        else printf("Invalid Figure");
    }
    else if(n==4){
        scanf("%d %d %d %d %d %d %d %d",&s1,&s2,&s3,&s4,&a1,&a2,&a3,&a4);
        if((s1>0 && s2>0 && s3>0 && s4>0 && a1>0 && a2>0 && a3>0 && a4>0)&&(a1+a2+a3+a4 == 360)){
            if(s1==s2 && s1==s3 && s1==s4  && a2==90 && a3==90 && a1==90 && a4==90) printf("Square");
            else if(s1==s3 && s2==s4 && a2==90 && a3==90 && a1==90 && a4==90 ) printf("Rectangle");
            else if(s1==s2 && s1==s3 && s1==s4 && a1==a3 && a2==a4)    printf("Rhombus");
            else if(s1==s3 && s2==s4 && a1==a3 && a2==a4 )    printf("Parallelogram");
            else printf("Invalid Figure");
        }
        else printf("Invalid Figure"); 
    }        else printf("Invalid Figure"); 
    }
    return 0;
}
    
    
    
    
    