#include<stdio.h>
int main(){
    int p[10];
    int i;
    printf("Εισάγετε έναν αριθμό:");
    scanf("%d", &p[0]);
    for(i=1; i<10; i++){
        p[i]=2*p[i-1];
    }
    printf("Αριθμόι του πίνακα:\n");
    for(i=0; i<10; i++){
        printf("%d\t", p[i]);
    }
    return 0;
}
