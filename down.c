#include <stdio.h>  


int down(int *arr, int n){

int res = 0;
int swap = 0;
int i,j;

for (j=n; j>0; j--){
    for(i=n; i>0; i--){
    int check = 0;  
    if(arr[i] > arr[i-1]){
        swap = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = swap;
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