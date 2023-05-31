#include <stdio.h>

int main() {

    float ano_atual, nasc;
    int idade;

    
    printf("-----------------------------\n");
    printf("   Departamento de Transito\n");
    printf("-----------------------------\n");

    

    printf("\nAno Atual : ");
    scanf("%f", &ano_atual);
    printf("\nAno de Nascimento : ");
    scanf("%f", &nasc);
    
    idade = (ano_atual - nasc);


    printf(" --------- Status ---------\n");

    printf("   Idade : %d" " Anos\n", idade);

    if (idade < 18)
    {
        printf("   Inapto a Tirar Carteira");
    }else{
        printf("   Apto a Tirar Carteira");
    }
    
    
        
    

    printf("\n --------------------------");
    






    return 0;
}



