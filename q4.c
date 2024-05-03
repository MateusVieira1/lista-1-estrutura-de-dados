#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int dia, mes, ano;
    char dia_mes[5];
  
    printf("Digite a data de nascimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    // Concatena o dia e o mÃªs em uma string
    sprintf(dia_mes, "%02d%02d", dia, mes);

    // Converte a string concatenada para um nÃºmero inteiro
    int concatenado = atoi(dia_mes);

    // Soma o ano ao nÃºmero concatenado
    concatenado += ano;

    // Soma os dois Ãºltimos dÃ­gitos com os dois primeiros dÃ­gitos
    int soma_digitos = (concatenado % 100) + (concatenado / 100);

    // Calcula o resto da divisÃ£o por 5
    int resto = soma_digitos % 5;

    if (resto == 1)
    {
        printf("O perfil da pessoa e sonhador");
    }
    else if (resto == 2)
    {
        printf("O perfil da pessoa e paquerador");
    }
    else if (resto == 3)
    {
        printf("O perfil da pessoa e atraente");
    }
    else if (resto == 4)
    {
        printf("O perfil da pessoa e irresistivel");
    }
    else{
        printf("O perfil da pessoa e timido");
    }
    
    

    return 0;
}