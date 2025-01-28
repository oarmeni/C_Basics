#include<stdio.h>
int main(){
    int a, b, c;
    printf("Αυτό το πρόγραμμα ταξινομεί τους αριθμούς κατά φθίνουσα σειρά!\n");
    printf("Δώσε μου τον πρώτο αριθμό:");
    scanf("%d", &a);
    printf("Δώσε μου τον δεύτερο αριθμό:");
    scanf("%d", &b);
    printf("Δώσε μου τον τρίτο αριθμό:");
    scanf("%d", &c);
    if(a>=b && a>=c){
        if(b>=c){
            printf("Η διάταξη είναι: %d, %d, %d", a, b, c);
        }
        else{
            printf("Η διάταξη είναι: %d, %d, %d", a, c, b);
        }
    } else if(b>=a && b>=c){
        if(a>=c){
            printf("Η διάταξη είναι: %d, %d, %d", b, a, c);
        }
        else{
            printf("Η διάταξη είναι: %d, %d, %d", b, c, a);
        }
    } else if(c>=a && c>=b){
        if(a>=b){
            printf("Η διάταξη είναι: %d, %d, %d", c, a, b);
        }
        else{
            printf("Η διάταξη είναι: %d, %d, %d", c, b, a);
        }
    }
    return 0;
}
