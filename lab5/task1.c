#include <stdio.h>

void print_arr(int n, int array[n]){
    printf("[");
    for (int i=0; i<n; i++){
        printf("%d ", array[i]);
    }
    printf("]\n");}

int main(){

    int n=6;

    int A[6]={1, -2, 4, -6, 11, 34};
    int B[6]={3, -34, -67, -23, 17, 35};
    int C[6];

    for (int i=0; i<n; i++){
        C[i]=A[i]+B[i];
    }

    int placehold; 
    int cnt;
    for (int i=0; i<n; i++){
        if (i%2==0){
            placehold=A[i];
            if (A[i]>placehold){
                placehold=A[i];
            }

        }

    }
    printf("Максимальная реальная часть A: %d\n", placehold);
    for (int i=0; i<n; i++){
        if (i%2!=0 && B[i]<=0){
            cnt++;
        }
        
    }
    printf("Количество мнимых чисел <0 B: %d\n", cnt);

    printf("Массив С: ");
    print_arr(n, C);
    
}