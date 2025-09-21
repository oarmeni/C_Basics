#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define R 5
#define C 8 

int main(){
    int p[R] [C];
    int i, j;
    srand(time(NULL));
    for(i=0; i<R; i++){
        for(j=0; j<C; j++){
           p[i][j]=rand()%201;
    }
}
    for(i=0; i<R; i++){
        for(j=0; j<C-1; j++){
            printf("%d\t", p[i][j]);
            printf("%d", p[i][C-1]);
            printf("\t");
            
        }
    }
}