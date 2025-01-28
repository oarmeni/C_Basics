#include <stdio.h>
int main(){
     int age;
    printf("ποια είναι η ηλικία σου;");
    scanf("%d", &age);
    if(age<18){
    printf("είσαι ανήλικος");
    }
    else if((age>=18) && (age<=65)){
        printf("είσαι ενήλικος");
    }
    else{
        printf("είσαι συνταξιούχος");
    }
    return 0;
}