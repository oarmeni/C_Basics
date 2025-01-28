/*arrays.c: aplo programma me pinaka*/
#include<stdio.h>
int main(){
    int p[3];
    int sum;
    p[0]=10;
    p[1]=2;
    p[2]=5;
    sum=p[0]+p[1]+p[2];
    printf("\n%d+%d+%d=%d", p[0],p[1],p[2], sum);
    return 0;
}