#include <stdio.h>
#include <string.h>
int main(){
    char str1[1000];
    char  str2[1000];
    scanf("%s", str1);
    scanf("%s", str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int j = 0, i = 0;
    int flag = 1;
    int condition = len1>len2?len2:len1;
    while(j < condition){
        i = str1[j] - str2[j];
        if(i != 0){
            printf("%d", i);
            flag = 0;
            break;
        }
        j++;
    }
    
    if(flag){
        if(len1 == len2){

        printf("0");
       }
    
    
//     else if(len1 > len2){
//         printf("%d", len1-len2);
    
//     }
//     else if(len2 > len1){
//         printf("%d", len2-len1);
//     }
    else{
        printf("%d",len1-len2);
    }
    }
    
    return 0;
}