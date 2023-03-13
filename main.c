#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
/*Esse programa é o primeiro programa funcional criado por mim em C, é bem simples, fiz para testar com minha namorada,
ele é um simples teste com três perguntas, chamei o programa de Neo, a resposta correta para as questões é: Volswagen, Pizza, e M&MS
pretendo aprimorar um pouco mais no decorrer do tempo*/

int main() {
//Parte na qual fica a declaração das variáveis.
    setlocale(LC_ALL, "portuguese");
    char marcaCarroPreferida[50]= "Volkswagen";
    char comidaPreferida[50]="Pizza";
    char docePreferido[50]="M&MS";
    char marcaCarroDigitada[50];
    char comidaPreferidaDigitada[50];
    char docePreferidoDigitada[50];
    int tentativas=0;
//Aqui da inicio ao programa, basicamente essa parte pergunta ao usuário qual seria minha marca preferida
    printf("Olá, meu nome é Neo, sou uma inteligência antificial, criada pelo Valmir para te fazer umas perguntas!\n\n");
    printf("Vamos começar\n");
    printf("\nQual é a marca de carro preferida do Valmir?\n\nPor favor use letra maiúscula no incio\n\n");
    scanf("%s", marcaCarroDigitada);
/*Aqui ele compara as duas strings, e depois caso o usuário digite errado  ele escreve que a resposta esta errada
Utilizando um ciclo while*/
if(strcmp(marcaCarroPreferida, marcaCarroDigitada)==0){
        printf("\nUau, parabéns, você acertou\n");
    }else{
        while(strcmp(marcaCarroPreferida, marcaCarroDigitada)!=0){
        printf("Resposta errada!\n");
        scanf("%s");
        tentativas++;
        }
        printf("\nAgora você acertou!");
    }
/*Depois de colocar a resposta correta, o programa da continuidade, e lógica usada para a primeira questão se repete por
todo programa*/
        printf("\n\nVamos continuar! \n\nQual é a comida preferida do Valmir?\nVocê possuí cinco opções\n\nLanche \n\nPizza \n\nLasanha\n\nEsfirra\n\nChurrasco\n\n");
        scanf("%s", &comidaPreferidaDigitada);

if(strcmp(comidaPreferida, comidaPreferidaDigitada)==0){
        printf("\nLegal, acertou mais uma!\n");
   }else{
        while(strcmp(comidaPreferida, comidaPreferidaDigitada)!=0){
        printf("Resposta errada!\n");
        scanf("%s");
        tentativas++;
        }
        printf("\nAcertou mais uma!");

   }
    printf("\n\nVamos para terceira e ultima pergunta\n\nQual é o doce que o Valmir mais gosta?\n");
    scanf("%s", docePreferidoDigitada);
    if(strcmp(docePreferido, docePreferidoDigitada)==0){
        printf("Acertou também!");
    }else{
        while(strcmp(docePreferido, docePreferidoDigitada)!=0){
        printf("ERRROOUU!\n");
        scanf("%s");
        tentativas++;
        }
        printf("Acertou!!\n\n");
    }
    printf("\nEntão foi essas as perguntas, estou ainda em fase de aprimoramento, até a próxima!\n\n\n\n");

   return 0;
}



























