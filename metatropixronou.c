#include <stdio.h>
int main(){
   int total_seconds, minutes, hours, seconds;
   printf("δωσε μου ενα πλήθος δευτερολέπτων:");
   scanf("%d", &total_seconds);
   hours= total_seconds/3600;
   minutes= (total_seconds %3600) /60;
   seconds= total_seconds/ 60;
   seconds= total_seconds% 60;
   printf("ωρες:%d\n", hours);
   printf("λεπτά:%d\n", minutes);
   printf("δευτερόλεπτα: %d\n", seconds);
   return 0;
}
   
   
  