#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE1 100
#define SIZE2 200
int main(){
    int p[SIZE1][SIZE2];
    int M, N;
    int i, j;
    do{
        printf("Δώσε το πλήθος των στοιχείων του πρώτου πίνακα(10...100):");
        scanf("%d", &M);
    } while ( M<10 || M>100);
    do{
        printf("Δώσε το πλήθος των στοιχείων του δεύτερου πίνακα(20...200):");
        scanf("%d", &N);
    } while( N<20 || N>200);
    srand(time(NULL));
    for(i=0; i<M; i++){
        for(j=0; j<N; j++){
            p[i][j]=rand()%201;
        }
    }    
    for(i=0; i<M; i++){
        for(j=0; j<N-1; j++){
        printf("%d\t", p[i][j]);
        }
    }    
    return 0;
}