/* 
    kompilacja: Sun C: cc -xc99 -Xc trojmian.c -lm
                GNU C: gcc -std=c99 -pedantic -Wall trojmian.c -lm */
#include <stdio.h>
#include <math.h>

int main() {
  float a,b,c,delta;

  printf("Program oblicza pierwiastki rownania w postaci\n");
  printf("     2\n");
  printf("  a x + b x +c =0\n");
  printf("Podaj wartosc a:");
  scanf("%f",&a);
  printf("Podaj wartosc b:");
  scanf("%f",&b);
  printf("Podaj wartosc c:");
  scanf("%f",&c);
  
  if (a==0.0)    /*przypadek rownania liniowego */
    if (b!=0.0) 
      printf("Jest to r�wnanie liniowe o rozwiazaniu x=%f\n",-c/b);
    else  if (c==0.0)  /* oraz a==b==0.0 */
      printf("Rozwiazaniem jest dowolne x\n");
    else              /* a==b==0.0 != c  */
      printf("Brak rozwiazan\n");
  else {   /*przypadek rownania kwadratowego */
    delta=pow(b,2)-4.0*a*c;
    if (delta<0) 
      printf("Brak rozwiazan rzeczywistych\n");
    else            /* delta>=0 */
      if (delta>0) 
	printf("Rozwiazaniem sa x1=%f i x2=%f\n",(-b-sqrt(delta))/(2*a),(-b+sqrt(delta))/(2*a));
      else
      	printf("Rozwiazaniem sa x1=x2=%f\n",-b/(2*a));
  }

}
