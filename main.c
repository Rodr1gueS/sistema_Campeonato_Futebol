#include <stdio.h>
#include <stdlib.h>

/*Um campeonato de futebol tem 3 times, com 11 jogadores cada.

Faça um programa q receba a idade, peso e altura de todos os jogadores e apresente:

A) O peso do jogador mais magro do campeonato;
B) A média das idades dos jogadores de cada time;
C) Média das altura do jogadores do campeonato.*/

#define NUM_TIMES 3
#define NUM_JOGADORES 2

int main()
{
//DECLARANDO AS VARIAVEIS
float peso, altura,idade_media,altura_media,media,magro,mediaAltura;
int idade, j,t;

 for(t = 0; t < NUM_TIMES; t++){
    idade_media = 0.0;

    for(j = 0; j < NUM_JOGADORES; j++){
      printf("Digite a idade, o peso e a altura do jogador %d do time %d\n", j + 1, t + 1);
      scanf("%d %f %f", &idade, &peso, &altura);

      idade_media = idade + idade_media;
      media = idade_media/NUM_JOGADORES;

      altura_media = altura + altura_media;
      mediaAltura = altura_media/(NUM_JOGADORES*NUM_TIMES);


      if(j==1)
        {
        magro=peso;
        }
      if(peso>magro)
        {
        magro=peso;
        }


}
printf("A idade media do time %d foi de %.2f \n",t+1,media);
 }
printf("O jogador mais magro do campeonato pesa: %.2f \n",magro);
printf("A altura media do campeonato foi de %.2f \n",mediaAltura);

}
