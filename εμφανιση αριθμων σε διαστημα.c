#include<stdio.h>
int main(){
    int a, b, c, i;
    do{
        printf("Εισάγετε τον πρώτο αριθμό:");
        scanf("%d", &a);
        printf("Εισάγετε τον δεύτερο αριθμό:");
        scanf("%d", &b);
        if(a>=b){
            printf("Ο πρώτος αριθμός πρέπει να είναι μικρότερος απ' τον δεύτερο. Προσπάθησε πάλι!\n");
        }
    }while(a>=b);
    printf("Εισάγετε τον αριθμό του βήματος αύξησης:");
    scanf("%d", &c);
    for(i=a; i<=b; i+=c){
        printf("%d\n", i);
    }
    printf("\n");
}
