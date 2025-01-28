#include<stdio.h>
int main() {
    int p[7]; 
    int i, max;
    printf("Εισάγετε 7 αριθμούς:\n");
    for(i = 0; i < 7; i++) {
        scanf("%d", &p[i]);
    }
    max = p[0];
    for(i = 1; i < 7; i++) {
        if(p[i] > max) {
            max = p[i];
        }
    }
    printf("Η μέγιστη τιμή είναι: %d\n", max);
    return 0;
}
