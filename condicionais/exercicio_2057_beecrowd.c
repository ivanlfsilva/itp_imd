#include <stdio.h>
 int main(){
   int s, t, f;
   scanf("%d %d %d", &s, &t, &f);
   int horario_chegada = s + t + f;
   if(horario_chegada == 24) horario_chegada = 0;
   else if (horario_chegada > 24) horario_chegada -= 24;
   else if (horario_chegada < 0) horario_chegada += 24;
   printf("%d\n", horario_chegada);
   
   
   return 0;
 }