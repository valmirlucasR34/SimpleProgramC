#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
/*Esse programa � o primeiro programa funcional criado por mim em C, � bem simples, fiz para testar com minha namorada,
ele � um simples teste com tr�s perguntas, chamei o programa de Neo, a resposta correta para as quest�es �: Volswagen, Pizza, e M&MS
pretendo aprimorar um pouco mais no decorrer do tempo*/

int main() {
//Parte na qual fica a declara��o das vari�veis.
    setlocale(LC_ALL, "portuguese");
    char marcaCarroPreferida[50]= "Volkswagen";
    char comidaPreferida[50]="Pizza";
    char docePreferido[50]="M&MS";
    char marcaCarroDigitada[50];
    char comidaPreferidaDigitada[50];
    char docePreferidoDigitada[50];
    int tentativas=0;
//Aqui da inicio ao programa, basicamente essa parte pergunta ao usu�rio qual seria minha marca preferida
    printf("Ol�, meu nome � Neo, sou uma intelig�ncia antificial, criada pelo Valmir para te fazer umas perguntas!\n\n");
    printf("Vamos come�ar\n");
    printf("\nQual � a marca de carro preferida do Valmir?\n\nPor favor use letra mai�scula no incio\n\n");
    scanf("%s", marcaCarroDigitada);
/*Aqui ele compara as duas strings, e depois caso o usu�rio digite errado  ele escreve que a resposta esta errada
Utilizando um ciclo while*/
if(strcmp(marcaCarroPreferida, marcaCarroDigitada)==0){
        printf("\nUau, parab�ns, voc� acertou\n");
    }else{
        while(strcmp(marcaCarroPreferida, marcaCarroDigitada)!=0){
        printf("Resposta errada!\n");
        scanf("%s");
        tentativas++;
        }
        printf("\nAgora voc� acertou!");
    }
/*Depois de colocar a resposta correta, o programa da continuidade, e l�gica usada para a primeira quest�o se repete por
todo programa*/
        printf("\n\nVamos continuar! \n\nQual � a comida preferida do Valmir?\nVoc� possu� cinco op��es\n\nLanche \n\nPizza \n\nLasanha\n\nEsfirra\n\nChurrasco\n\n");
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
    printf("\n\nVamos para terceira e ultima pergunta\n\nQual � o doce que o Valmir mais gosta?\n");
    scanf("%s", docePreferidoDigitada);
    if(strcmp(docePreferido, docePreferidoDigitada)==0){
        printf("Acertou tamb�m!");
    }else{
        while(strcmp(docePreferido, docePreferidoDigitada)!=0){
        printf("ERRROOUU!\n");
        scanf("%s");
        tentativas++;
        }
        printf("Acertou!!\n\n");
    }
    printf("\nEnt�o foi essas as perguntas, estou ainda em fase de aprimoramento, at� a pr�xima!\n\n\n\n");

   return 0;
}



























