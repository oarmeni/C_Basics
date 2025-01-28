#include <stdio.h>
int main(){
   int  x, y, a;
   printf("δωσε μου τον πρωτο αριθμο:");
   scanf("%d", &x);
   printf("δωσε μου τον δευτερο αριθμο:");
   scanf("%d", &y);
   printf("δωσε μου τον τριτο αριθμο:");
   scanf("%d", &a);
   if (x <= y && x <= a) {
        if (y <= a) {
            printf("Η διάταξη είναι: %d, %d, %d\n", x, y, a);
        } 
        else {
            printf("Η διάταξη είναι: %d, %d, %d\n", x, a, y);
        }
    } else if (y <= x && y <= a) {
        if (x <= a) {
            printf("Η διάταξη είναι: %d, %d, %d\n", y, x, a);
        } 
        else {
            printf("Η διάταξη είναι: %d, %d, %d\n", y, a, x);
        }
    } else {
        if (x <= y) {
            printf("Η διάταξη είναι: %d, %d, %d\n", a, x, y);
        } 
        else {
            printf("Η διάταξη είναι: %d, %d, %d\n", a, y, x);
        }
    }

    return 0;
}