/*Faça um Programa que verifique se uma letra digitada é vogal ou autônoma.*/

//usando o if-else

#include <stdio.h>
int main()
{
char c;    
    printf("Digite um caracter: ");
    c = getchar();

    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
      {
        printf("A letra \"%c\" é vogal", c);
      }
    else
      {
      printf("A letra \"%c\" é autônoma", c);
      }

return 0;
}