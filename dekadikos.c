#include <stdio.h>
int main() {
    int x=24, y=4;
    int sum, sub, mul;
    float d;
    sum=x+y;
    sub=x-y;
    mul=x*y;
    d=(float) x/y;
    printf("άθροισμα: %d", sum);
    printf("\nδιαφορά: %d", sub);
    printf("\nγινόμενο: %d", mul);
    printf("\nπηλίκο: %f", d);
return 0;
}
