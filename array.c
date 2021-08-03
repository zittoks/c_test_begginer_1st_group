 #include <stdio.h>


int up(int *arr, int n);
int down(int *arr, int n);
int array[20] = {9, 15, 5, 3, 1, 2, 0, 4, 67, 98, 34, 7, 17, 65, 11, 16, 87, 45, 32, 20};

int main(){
int i;
    for(i=0; i < 20; i++){
        printf(" array[%d] = %d\n", i, array[i]);
    }
     printf("\n");
    int reshuffle1 = up(array, 20);
    printf("reshuffle1 = %d", reshuffle1);
    printf("\n");
    int reshuffle2 = down(array, 20);
    printf("reshuffle2 = %d", reshuffle2);
    return 0;
}