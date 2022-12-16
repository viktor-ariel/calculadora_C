#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float divi(float num1, float num2){
    return num1 / num2;
}
float soma(float x, float y){
    return x + y;
}
float sub(float x, float y){
    return x - y;
}
float multi(float num1, float num2){
    return num1 * num2;
}
float pot(float num1, float num2){
    return pow(num1,num2);
}
float raiz(float num1){
    return sqrt(num1);
}
float fat(int num3){
    int f=1;
    for(int i=1;i<=num3;i++){
        f=f*i;
    }
    return f;
}
int menu(){
    int op;
    printf("====================CALCULADORA=========================\n");
    printf("[1] - SOMA\n");
    printf("[2] - SUBTRAIR\n");
    printf("[3] - MULTIPLICAR\n");
    printf("[4] - DIVIDIR\n");
    printf("[5] - POTENCIA\n");
    printf("[6] - RAIZ QUADRADA\n");
    printf("[7] - FATORIAL\n");
    printf("========================================================\n");
    printf("Digite o numero de qual opcao voce deseja: ");
    fflush(stdin);
    scanf("%d",&op);
    return op;
}
main(){
    float num1,num2,num3;
    int op;
    op = menu();
    switch(op){
        case 1:
            printf("\nDigite um valor: ");
            scanf("%f",&num1);
            printf("Digite um valor: ");
            scanf("%f",&num2);
            printf("\nO resultado e: %.2f\n",soma(num1,num2));
            printf("========================================================\n\n");
            break;
        case 2:
            printf("\nDigite um valor: ");
            scanf("%f",&num1);
            printf("Digite um valor: ");
            scanf("%f",&num2);
            printf("\nO resultado e: %.2f\n",sub(num1,num2));
            printf("========================================================\n\n");
            break;
        case 3:
            printf("\nDigite um valor: ");
            scanf("%f",&num1);
            printf("Digite um valor: ");
            scanf("%f",&num2);
            printf("\nO resultado e: %.2f\n",multi(num1,num2));
            printf("========================================================\n\n");
            break;
        case 4:
            printf("\nDigite um valor: ");
            scanf("%f",&num1);
            printf("Digite um valor: ");
            scanf("%f",&num2);
            printf("\nO resultado e: %.2f\n",divi(num1,num2));
            printf("========================================================\n\n");
            break;
        case 5:
            printf("\nDigite um valor: ");
            scanf("%f",&num1);
            printf("Digite um valor: ");
            scanf("%f",&num2);
            printf("\nO resultado e: %.2f\n",pot(num1,num2));
            printf("========================================================\n\n");
            break;
        case 6:
            printf("\nDigite um valor: ");
            scanf("%f",&num1);
            printf("\nO resultado e: %.2f\n",raiz(num1));
            printf("========================================================\n\n");
            break;
        case 7:
            printf("\nDigite um valor: ");
            scanf("%f",&num3);
            printf("\nO resultado e: %.0f\n",fat(num3));
            printf("========================================================\n\n");
            break;

        default:
            printf("Valor invalido");
    }
}

