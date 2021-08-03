#include <stdio.h>


int up(int *arr, int n){

int res = 0;
int swap = 0;
int i,j;

for (i=0; i<(n-1); i++){
    for(j=(i+1); j<n; j++){
    int check = 0;  
    if(arr[i] > arr[j]){
        swap = arr[i];
        arr[i] = arr[j];
        arr[j] = swap;
        check = 1;
    }
    if(check == 1){
        res = res+1;
        check = 0;
    }
}
}
for(i=0; i<n; i++){
    printf(" arr[%d] = %d\n ", i, arr[i]);
    }
return res;
}