#include <stdio.h>
#include <stdlib.h>

int findMaxEli(int matrix[N][N]){
    int maxtmp =matrix[0][0];
    int mi=0;
    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            if (matrix[i][j]>maxtmp){
                maxtmp=matrix[i][j];
                mi=i;
            }
        }

    }
    return mi;
}

int findMaxElj(int matrix[N][N]){
    int maxtmp =matrix[0][0];
    int mj=0;
    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            if (matrix[i][j]>maxtmp){
                maxtmp=matrix[i][j];
                mj=j;
            }
        }

    }
    return mj;
}


int countZeros(int matrix[N][N]){
    int cnt1=0;
    int cnt2=0;
    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            if (matrix[i][j]==0){
                cnt2++;
            }
        }
        if (cnt2>0){
            cnt1++;
        }
    }
    return cnt1;

}

void diagonalBackw(int matrix[N][N]){
    for (int i=N; i>=0; i--){
        for (int j=N; j>=0; j--){
            if (i=j){
                printf(" %d ", matrix[i][j]);
            }
            else{
                printf("0");
            }
        
        }
    }
}


int main(){

    int N=1;
    printf("Type size of matrix: ");
    scanf("%d", &N);

    if (N<1 || N>100){
        printf("Invalid matrix size.\n");
        return 1;
    }
    int flag=0;
    printf("Fill matrix manually (1) or randomly (0)?/nChoose 1 or 0: ");
    scanf("%d", &flag);
    if (flag!=1 || flag!=0){
        printf("Invalid type.\n");
        return 0;
    }


    int **matrix=NULL;
    matrix=(int **)malloc(N*sizeof(int*));
    for (int i=0; i<N; i++){
        matrix[i]=(int *)malloc(N*sizeof(int));
        for (int j=0; j<N; j++){
            int o;
            if (flag==0){
                matrix[i][j]=rand()%100+1;}
            else{
                matrix[i][j]=scanf("%d", &o);
            }
        }

    }

    int **matrixB=NULL;
    matrixB=(int **)malloc((N-1)*sizeof(int*));

    int maxMatEli=findMaxEli(matrix[N][N]);
    int maxMatElj=findMaxElj(matrix[N][N]);
    

    for (int i=0; i<(N); i++){
        for (int j=0; j<(N); j++){
            if (i!=maxMatEli && j!=maxMatElj){
                matrixB[i][j]=matrix[i][j];
            }
        }

    }

    int strZeros=countZeros(matrixB[N-1][N-1]);

}
