#include <stdio.h>

int main() {

    float ano_atual, nasc;
    int idade;

    
    printf("-----------------------------\n");
    printf("   Departamento de Transito\n");
    printf("-----------------------------\n");

    
    while (1)
    {   
        printf("\nAno Atual : ");
        scanf("%f", &ano_atual);
        if (ano_atual < 2023)
        {
            printf("\nData Invalida");
        }else{
            break;
        };
        
    }
    
    
    
    

       while (1)
    {
       printf("\nAno de Nascimento : ");
       scanf("%f", &nasc);

       if (nasc <= 1900){
        printf("\nData Invalida");
       }else{
        break;
       }
    }
    
    
    idade = (ano_atual - nasc);

 
    


    printf(" --------- Status ---------\n");

    printf("   Idade : %d" " Anos\n", idade);

    if (idade < 18)
    {
        printf("   Inapto a Tirar Carteira");
    }else{
        printf("   Apto a Tirar Carteira");
    };
    
    
        
    

    printf("\n --------------------------");
    






    return 0;
}



