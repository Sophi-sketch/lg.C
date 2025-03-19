#include <stdio.h>

int main(void){

      float num1, num2, num3, med;

printf("Digite o 1o. numero ==> ");
scanf("%f", &num1);

printf("Digite o 2o. numero ==> ");
scanf("%f", &num2);

printf("Digite o 3o. numero ==> ");
scanf("%f", &num3);

med=(num1+num2+num3)/3;

printf("\n Os numeros inseridos foram: %0.1f, %0.1f e %0.1f", num1, num2, num3, med);

printf("\n\n A media dos numeros foram: %0.1f", med);

return 0;

}