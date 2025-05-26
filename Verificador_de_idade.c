#include <stdio.h>

int main () {

    int idade;

    printf("Digite sua idade\n");
    scanf("%d", &idade);

     if (idade > 60){
        printf("Você é um idoso!\n");
    } 
        else if (idade < 60 && idade > 18) {
        printf("Você é um Adulto!\n");
    } 
             else if (idade < 12 && idade > 18) {
             printf("Você é uma Adolescente!\n");
    } 
                else  {
                    printf("Você é uma criança!\n");
    }






}