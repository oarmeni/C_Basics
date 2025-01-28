#include<stdio.h>
int main(){
    int p[10];
    int i;
    for(i=0; i<10; i++){
        printf("Εισάγετε τον αριθμό στη θέση %d:", i);
        scanf("%d", &p[i]);
    }
    printf("Ο πίνακας πριν τον καθρεπτισμό είναι:\n");
    for(i=0; i<10; i++){
        printf("%d\t", p[i]);
    }  
    printf("\n");
    for(i=0; i<5; i++){
        int temp= p[i];
        p[i]=p[9-i];
        p[9-i]= temp;
    }
    printf("Ο πίνακας μετά τον καθρεπτισμό είναι:\n");
    for( i=0; i<10; i++){
        printf("%d\t", p[i]);
    }
    return 0;
}