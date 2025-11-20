#include <stdio.h>

int main () {
    char nombre[50];
    int edad;

    printf("Por favor escribe tu nombre:");
    scanf("%s",nombre);

    printf("Por favor escribe tu edad:");
    scanf("%d", &edad);

    if (edad>=18)
    {
       printf("Eres mayor de edad"); /* code */
    }

    else {
        printf("Eres menor de edad");
    }
return 0;    
}