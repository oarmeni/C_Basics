#include<stdio.h>
int main() {
    int gradeA, gradeB, gradeC, sum, average;
    printf("dose mu tous vathmous su:");
    scanf("%d", &gradeA);
    scanf("%d", &gradeB);
    scanf("%d", &gradeC);
    sum=gradeA+gradeB+gradeC;
    average= sum/3;
    printf("o mesos oros su einai: %d", average);
    return 0;
}
