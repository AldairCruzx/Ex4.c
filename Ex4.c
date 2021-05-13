#include <stdio.h>
int main () 
{
      /* Cruz Contreras Jose Aldair
      Programa 7 calcula la masa corporal y pon el resultado.*/

   float peso, altura, IMC;
   printf ("\n\n Programa 7");
   printf ("\n\n calcular el indice de masa corporal");
   printf ("\n\n Dame el peso");
   scanf ("%f",&peso);
   printf ("\n\n Dame la altura");
   scanf ("%f",&altura);
   IMC=peso/(altura*altura);
   printf ("\n\n La masa muscular es %f",IMC);
   
   return 0;
}
