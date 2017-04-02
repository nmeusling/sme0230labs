/* Natalie Menato
   Numero USP: 10295051
   24/03/2017
   Submissao para Exercicios de laboratorio 1  */

#include <stdio.h>

int main() {

  /* Exercicio 1 */

  int  n;
  
  //Pede para o usuario digitar o numero e armazene o valor
  printf("\nExercicio 1: Gerar tabuada\n");
  printf("Digite um inteiro para que a tabuada vai ser gerido: ");
  scanf("%d", &n);
  
  //Gera e escreva a tabuada
  printf("Tabuada para %d\n", n);
  printf("%d X 0  = %d\n", n , n*0);
  printf("%d X 1  = %d\n", n , n*1);
  printf("%d X 2  = %d\n", n , n*2);
  printf("%d X 3  = %d\n", n , n*3);
  printf("%d X 4  = %d\n", n , n*4);
  printf("%d X 5  = %d\n", n , n*5);
  printf("%d X 6  = %d\n", n , n*6);
  printf("%d X 7  = %d\n", n , n*7);
  printf("%d X 8  = %d\n", n , n*8);
  printf("%d X 9  = %d\n", n , n*9);
  printf("%d X 10 = %d\n\n", n , n*10);

  /* Exercicio 2 */
  
  float num1, num2, temp;
  
  //Pede para o usuario digitar os numeros e armazene os valors em num1 e num2
  printf("Exercicio 2: Trocar o valor de dois numeros");
  printf("\nDigite o primeiro numero: ");
  scanf("%f",&num1);
  printf("Digite o segundo numero: ");
  scanf("%f", &num2);
  
  //Troque os valores de num1 e num2
  temp = num1;
  num1 = num2;
  num2 = temp;

  //Escreva uma mensagem mostrando resultados do troque
  printf("Depois de trocar, o valor do primeiro numero eh %.2f. \nO valor do segundo numero eh %.2f\n\n", num1, num2);
  

  /* Exercicio 3 */

  float a, b, c, d, det;
  
  //Pede para usuario digite os valores e armazene-os
  printf("\nExercico 3: Calcular o valor do determinante");
  printf("\nDigite o primeiro valor da primeira linha do matriz: ");
  scanf("%f", &a);
  printf("Digite o segundo valor da primeira linha do matriz: ");
  scanf("%f", &b);
  printf("Digite o primeiro valor da segunda linha do matriz: ");
  scanf("%f", &c);
  printf("Digite o segundo valor da segunda linha do matriz: ");
  scanf("%f", &d);

  //Calular o determinante do matriz:  ad-bc
  det = a*d - b*c;
  
  //Escreva o valor do determinante
  printf("\nO matriz digitado eh: \n");
  printf(" |%6.2f %6.2f|\n |%6.2f %6.2f|\n",a,b,c,d);
  printf("\nO valor do determinante eh: %f", det);
  //Escreva mensagem sobre valor do determinante
  if(det > 0)
    printf("\nO determinante eh positivo!\n");
  else if(det < 0)
    printf("\nO determinante eh negativo!\n");
  else 
    printf("\nO determinante eh zero!\n");
}
