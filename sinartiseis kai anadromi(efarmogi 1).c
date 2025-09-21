#include<stdio.h>

int get_integer (int start, int finish);

int main()
{
     printf("%d", get_integer(2,5));
}

int get_integer (int start, int finish){
    int x;
    do{
        printf("dose mia timh apo %d ews %d:", start, finish);
        scanf("%d", &x);
    } while(x<start || x>finish);
    
    return x;
}