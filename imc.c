#include <stdio.h>
 
int main() 

{
    float peso, altura, imc; //vairaveis
    
    printf("Informe o seu peso (em kg):\n"); //inserindo peso
    scanf("%f", &peso);
    
    printf("Informe a sua altura (em metros):\n"); //inserindo altura
    scanf("%f", &altura);
    
    imc = peso / (altura*altura); //respostas de cada resultado
        if (imc < 19){
        printf("Idice de Massa Corporal igual a: %.2f Você esta magra (o)\n", imc );
         }
                
        if (imc >=20 &&  imc<25){
         printf ("Indice de Massa Corporal igual a: %.2f Você esta com o peso ideal\n", imc);
         }

        if (imc >=26 &&  imc<30){
         printf ("Indice de Massa Corporal igual a: %.2f Você esta acima do peso\n", imc);
         }
            
        if (imc >=31){
         printf("Indice de Massa Corporal igual a: %.2f Você esta obeso (a). Sendo essa situação prejudicial para sua saúde.\n", imc);
         }

    return 0;
}