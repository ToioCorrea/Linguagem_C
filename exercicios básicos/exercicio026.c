/*Faça um Programa que leia três números e mostre-os em ordem decrescente*/

//USANDO IF-ELSE

#include <stdio.h>
int main()
{
float num1, num2, num3;

    printf("Digite três numeros: ");
    scanf("%f%f%f", &num1,&num2, &num3);

if(num1 > num2 && num2 > num3)
{
    printf("%f %f %f", num1, num2, num3);
}
else if(num1 > num3 && num3 > num2)
{
    printf("%f %f %f", num1, num3, num2);
}
else if(num2 > num1 && num1 > num3)
{
    printf("%f %f %f", num2, num1, num3);
}
else if (num2 > num3 && num3 > num1)
{
    printf("%f %f %f",num2, num3, num1);
}
else if(num3 > num2 && num2 > num1)
{
    printf("%f %f %f", num3, num2, num1);
}
else
    printf("%f %f %f", num3, num1, num2);

return 0;   


}