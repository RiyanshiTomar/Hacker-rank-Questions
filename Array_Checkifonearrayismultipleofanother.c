#include <stdio.h>
int main(){
    int t;
    scanf("%d\n", &t);
    int a[t];
    for(int i = 0; i < t; ++i){
    scanf("%d\n", &a[i]);
    }
    int b[t];
    for(int j = 0; j < t; ++j){
        scanf("%d\n", &b[j]);
    }
    for(int i = 0; i <= t-2; ++i){
        int min_index = i;
        for(int j = i +1; j <= t-1; ++j){
            if(a[j] < a[min_index]){
                min_index = j;
            }
        }
        int temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;
    }
    for(int i = 0; i <= t-2; ++i){
        int min_index = i;
        for(int j = i +1; j <= t-1; ++j){
            if(b[j] < b[min_index]){
                min_index = j;
            }
        }
        int temp = b[i];
        b[i] = b[min_index];
        b[min_index] = temp;
    }
    int flag = 1; // assume true
    for(int i = 0; i < t; ++i){
    if(a[i] % b[i] != 0){ 
        flag = 0;
        break;
    }
}
    if(flag == 1){
    printf("True");
}
else{
    printf("False");
}


    return 0;
}