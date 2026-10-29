#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

int main(){


int idade;
SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
setlocale(LC_ALL, "Portuguese");


printf("Digite sua idade: ");
scanf("%d", &idade);
system("cls");

if(idade >= 18){

    printf("\nVocê é maior de idade");
    printf("\nSua idade atual é de: %d", idade);


}else{
printf("\nVocê é menor de idade");
  printf("\nSua idade atual é de: %d", idade);

}

// Esse codigo só foi feito para completar minha diária mô preguiça


    return 0;
}
