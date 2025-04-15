
#include <stdio.h>
#include<limits.h>
void printUnion(int a[], int n1, int b[], int n2) {
   int p1 = 0 ;
   int p2 = 0 ;
   int lst = INT_MAX ;
   while(p1<n1 && p2<n2){
       if(a[p1]<=b[p2]){
           if(lst != a[p1]){
               printf("%d ",a[p1]);
               lst = a[p1];
           }
           p1++;
       }
       else{
           if(lst != b[p2]){
               printf("%d ",b[p2]);
               lst = b[p2];
           }
           p2++;
       }
   }
    while(p2<n2){
        if(lst != b[p2]){
               printf("%d ",b[p2]);
               lst = b[p2];
           }
           p2++;
    }
    while(p1<n1){
         if(lst != a[p1]){
               printf("%d ",a[p1]);
               lst = a[p1];
           }
           p1++;
    }
    
}

void printIntersection(int a[], int n1, int b[], int n2) {
    int p1 = 0;
    int p2 = 0;
    int lst = INT_MAX;
    int flag = 0;
    printf("\n");
    while(p1<n1 && p2<n2){
        if(a[p1]!=b[p2]){
            if(a[p1]<b[p2]){
                p1++;
            }
            else{
                p2++;
            }
        }
        else{
            if(a[p1]!=lst){
                printf("%d ",a[p1]);
                 lst = a[p1];
               
                flag = 1;
            } p1++;
                p2++;
               
        }
        
    }
    if(!flag){
        printf("Intersection Not Possible");
    }
}

int main() {
    int n1, n2;

    scanf("%d", &n1);
    int a[n1];
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    scanf("%d", &n2);
    int b[n2];
    for (int i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    // Print Union
    printUnion(a, n1, b, n2);

    // Print Intersection
    printIntersection(a, n1, b, n2);

    return 0;
} 



