#include <stdio.h>

int main() {

    float altura, peso, imc;

    
    printf("Digite seu Peso (Kg): ");
    scanf("%f", &peso);
    
    printf("Digite seu Altura (M): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    
    if(imc < 18.5){
        printf("IMC: %f\nMagreza", imc);
    }else if((imc >= 18.5) &&  (imc < 24.9)){
        printf("IMC: %f\nPeso Normal", imc);
    }else if((imc >= 25.0) &&  (imc < 29.9) ){
        printf("IMC: %f\nSobrepeso", imc);
    }else if((imc >= 30.0) && ( imc < 39.9)){
        printf("IMC: %f\nObesidade", imc);
    }else if(imc >= 40.0){
        printf("IMC: %f\nObesidade Grave", imc);
    }






    return 0;
}
