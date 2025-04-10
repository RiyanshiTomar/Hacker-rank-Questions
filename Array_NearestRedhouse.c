#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void straight(int arr[], int n) {
    float forward[n], backward[n], result[n];

    for (int i = 0; i < n; i++) {
        forward[i] = backward[i] = 1000000000;
    }

    float count = 1000000000;  
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            count = 0; 
        } else if (arr[i] == -1) {
            count = 1000000000; 
        } else if (arr[i] == 0) {
            count += 1;
        } else if (arr[i] == 2) {
            count += 0.5;
        }
        forward[i] = count;
    }

    count = 1e9;
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] == 1) {
            count = 0; 
        } else if (arr[i] == -1) {
            count = 1000000000; 
        } else if (arr[i] == 0) {
            count += 1;
        } else if (arr[i] == 2) {
            count += 0.5;
        }
        backward[i] = count;
    }

    for (int i = 0; i < n; i++) {
        float min ;
        if(forward[i] < backward[i]){
            min = forward[i];
        }
        else {
            min =  backward[i];
        }
        if(min ==1000000000){
            result[i]= -1.0;
        }
        else {
            result[i] = min;
        } 
        printf("%.1f ", result[i]);
    }
    printf("\n");
}
   
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    straight(arr, n);
    return 0;
}


