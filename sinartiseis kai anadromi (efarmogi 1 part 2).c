#include<stdio.h>

int get_integer (int start, int finish);

int main()
{
     int a, b, n, res;
     /* 1. diavasma eisodou*/
     printf("dose tin timi tou a.");
     a=get_integer(1, 10);
     printf("dose tin timi tou b.");
     b=get_integer(1, 10);
     printf("dose tin timi tou n.");
     n=get_integer(2, 5);
     
     /* 2. upologismos*/
     res=n*(a-b);
     printf("to apotelesma n*(a-b) einai: %d", res);
}

int get_integer (int start, int finish){
    int x;
    do{
        printf("dose mia timh apo %d ews %d:", start, finish);
        scanf("%d", &x);
    } while(x<start || x>finish);
    
    return x;
}