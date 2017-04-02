/* Natalie Menato
   Numero USP: 10295051
   31/03/2017
   Submissao para Exercicios de laboratorio 2  */

#include <stdio.h>

int main() {
  /* Exercicio 1 */
  int num1, num2, num3, soma, nsete,i;
  nsete=-1;

  printf("\n\nExercicio 1\n\n");
 
  //Pede para o usuario digite o primeiro numero e verifique que esta entre 0 e 9
  do{
    printf("Digite um numero entre 0 e 9: ");
    scanf("%d", &num1);
  } while (num1>9 || num1<0);

  //Pede para o usuario digite o segundo numero e verifique que esta entre 0 e 9
  do{
    printf("Digite um segundo numero entre 0 e 9: ");
    scanf("%d", &num2);
  } while(num2>9 || num2<0);
   
  //inicializa a soma para ser a soma de n1 e n2
  soma = num1+num2;
  i=3;
  //se soma=0, n1 e n2 =0 e entao n7=0
  if(soma ==0)
    nsete=0;
  //calcula ni e a soma quando ate e igual a 11*nsete
  while(soma != 11*nsete)
    {
      //calcula n3 e escreva a soma
      num3 = num1+num2;
      soma = soma+num3;
      
      printf("\nn%d = n%d + n%d", i, i-1, i-2);
      printf("\n%2d = %2d + %2d", num3, num1, num2);
      printf("\nSoma de n1 ate n%d: %d\n",i,soma);

      //salva o valor de n7
      if(i==7)
	{
	  nsete=num3;
	}
      num1=num2;
      num2=num3;
      i++;
    }
  //escreva a mensagem final
  printf("\n\n\nO valor de n7*11 = %d\nA soma de n1 ate n%d = %d.", nsete*11, i, soma);
 
  
  /* Exercicio 2 */
  //Entrada é o numero que o usuario digite, valor e o valor atual da calucladora, op e a operacao selecionada pelo usuario
  int entrada, valor, op;
  valor = 0;

  //pede o usuario para digitar um numero e salva-lo
  printf("\n\n\n\n\nExercicio 2\n\n");
  printf("Digite um numero inteiro positivo maior que 1: ");
  scanf("%d", &entrada);

  //validacao para verificar que a entrada e positiva
  while(entrada <= 1)
    {
      printf("O numero precisa maior que 1! Digite de novo: ");
      scanf("%d", &entrada);
    }
  //quando o valor da calculadora nao e iqual a entrada do usuario
  while(valor != entrada)
    {
      //escreva o valor atual da calculadora e pedepara usuario escolher operacao desejada
      printf("\nO valor da calculadora e: %d.\nQual operacao voce quer fazer para chegar a %d?\n1 - Soma 2\n2 - Soma 3\n3 - Multiplica por 2\n4 - Multiplica por 3\n5 - Zerar a calculadora\nOperacao: ",valor, entrada);
      scanf("%d",&op);
      
      //validar que a entrada e uma operacao certa
      while(op<1||op>5)
	{
	  printf("\nA entrada nao e valido. Tente de novo: ");
	  scanf("%d",&op);
	}
      //soma 2
      if(op ==1)
	{
	  printf("\n\nOperacao selecionada: Soma 2\n");
	  printf("Resultado: %d + 2 = %d\n\n",valor,valor+2 );
	  valor+=2;
	 }
      //soma 3
      else if(op ==2)
	{
	  printf("\n\nOperacao selecionada: Soma 3\n"); 
	  printf("Resultado: %d + 3 = %d\n\n",valor,valor+3 );
	  valor+=3;
	 }
      //multiplica 2
      else if(op ==3)
	{
	  printf("\n\nOperacao selecionada: Multiplica por 2\n"); 
	  printf("Resultado: %d * 2 = %d\n\n",valor,valor*2 );
	  valor*=2;
	 }
      //multiplica 3
      else if(op ==4)
	{
	  printf("\n\nOperacao selecionada: Multiplica por 3\n"); 
	  printf("Resultado: %d * 3 = %d\n\n",valor,valor*3 );
	  valor*=3;
	 }
      //zerar
      else if(op ==5)
	{
	  printf("\n\nOperacao selecionada: Zerar calculadora\n"); 
	  printf("Resultado: 0\n\n");
	  valor=0;
	 }

    }

  return 0;
}
