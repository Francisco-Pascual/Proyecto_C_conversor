#include <stdio.h>
int main() {
    //Dolares
    float dolares, quetzales, euros;
    printf("Ingrese la cantidad de dolares: ");
    scanf("%f", &dolares);
    quetzales = dolares *7.7;
    euros = dolares * 0.92;

    printf("%.2f dolares equivalen a %.2f quetzales\n", dolares, quetzales);
    printf("%.2f dolares equivalen a %.2f euros\n", dolares, euros);

    //quetzales
    printf("\nIngrese la cantidad de quetzales: ");
    scanf("%f", &quetzales);

    dolares = quetzales / 7.7;
    euros = quetzales / 8.4;
    printf("%.2f quetzales equivalen a %.2f dolares\n", quetzales, dolares); 
    printf("%.2f quetzales equivalen a %.2f euros\n", quetzales, euros);

    //euros
    printf("\nIngrese la cantidad de euros: ");
    scanf("%f", &euros);
    dolares = euros / 0.92;
    quetzales = euros * 8.4;
    printf("%.2f euros equivalen a %.2f dolares\n", euros, dolares); 
    printf("%.2f euros equivalen a %.2f quetzales\n", euros, quetzales);

    return 0;
}