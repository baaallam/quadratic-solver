#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Author: Khadija Baaalla
// Program: Solve quadratic equations
// Description: This program calculates and displays the solutions (if any) of a quadratic equation ax^2 + bx + c = 0.


float a , b , c;
void saisir() {
    printf("***************************************************\n");
    printf("*   Quadratic Equation Solver by Khadija baaalla    *\n");
    printf("***************************************************\n\n");
      printf("enter the value of  a : ");
      scanf("%f",&a);
      printf("enter the value of b : ");
      scanf("%f",&b);
      printf("enter the value of c : ");
      scanf("%f",&c);            
  
}

float disc(){
   float delta;
   delta = pow(-b,2) - (4*a*c);
   

return delta;
}

void solution (float d ){
     float x1 , x2 , x;
      if (d<0){
    printf("pas de solutions reelles");
    }else if (d==0){
       x=(-b)/(2*a);
         printf("la solution est : %.2f \n",x);
        }else{
        x1=(-b-sqrt(d))/(2*a);
        x2=(-b+sqrt(d))/(2*a);
        printf("les s sont : %.2f et %.2f\n",x1,x2);
        }



}
int main () {  
float delta;
   saisir();
   delta =disc();
   solution(delta);
    return 0;
}
