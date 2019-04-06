#include <stdio.h>
#include <stdlib.h>

int mostrarMenu (int x, int y);
int subMenuCuentas (int x, int y);
int mostrarResultados(int x, int y);

int main()
{
    int seguir =1;
    int x;
    int y;

    int suma;
    int resta;
    int multiplicacion;
    float  division;

    do
    {
        switch(mostrarMenu(x, y))
        {

        case 1:
            printf("  Primer operando: ");
            scanf("%d", &x);
            break;
        case 2:
            printf("  Segundo operando: ");
            scanf("%d", &y);
            break;
        case 3:
            switch (subMenuCuentas(x, y))
            {
                case 1:
                    printf("Suma realizada con exito. ");
                    break;
                case 2:
                    printf("Resta realizada con exito. ");
                    break;
                case 3:
                    printf("Multiplicacion realizada con exito. ");
                    break;
                case 4:
                    printf("Division realizada con exito. ");
                    break;
                case 5:
                    printf("Factorial realizada con exito. ");
                    break;
            }
            break;
        case 4:

            suma= (x+y);
            resta= (x-y);
            multiplicacion= (x*y);
            division=(float) x / y;

            switch (mostrarResultados(x, y))
            {
                case 1:
                    printf("  El resultado es: %d\n ", suma);
                    break;
                case 2:
                    printf("  El resultado es:%d\n ", resta);
                    break;
                case 3:
                    printf("  El resultado es:%d\n ", multiplicacion);
                    break;
                case 4:
                    printf("  El resultado es: %.2f \n ", division);
                    break;
                case 5:
                    printf("  El resultado es:%d\n ", suma);
                    break;

            }
            break;
        case 5:
            printf("Desea salir?: ");
            scanf("%d", &seguir);
            seguir= 0;
            break;
        default:
            printf("Opcion Invalida\n");
            break;
        }



        system("pause");

    }
    while (seguir == 1);



    return 0;
}
int mostrarMenu (int x ,int y)
{
    int opcion;

    char z= 88;
    char m= 89;



    system("cls");
        printf("*** Menu de opciones ***\n\n");

    printf("1.- Ingresar primer operando A=%c\n", z);
    printf("2.- Ingresar segundo operando B=%d\n", y);
    printf("3.- Calcular todas las operaciones\n");
    printf("4.- Informar resultados\n");
    printf("5.- Salir\n");
    printf("\n Ingrese opcion: ");
    scanf("%d", &opcion);

    return opcion;
}


    int subMenuCuentas (int x,int y)
{
    int opcion1;

    system("cls");

        printf("        ***Calcular***\n\n");

    printf("1.- La suma entre %d y %d. \n", x, y);
    printf("2.- La resta entre %d y %d. \n", x, y);
    printf("3.- La multriplicacion entre %d y %d. \n", x, y);
    printf("4.- La division entre %d y %d. \n", x, y);
    printf("5.- El factorial entre %d y %d. \n", x, y);
    printf("\nIngrese una opcion: ");
    scanf("%d", &opcion1);

    return opcion1;

}

    int mostrarResultados(int x, int y)
    {
        int opcion2;

        system("cls");

        printf("    *** Mostrar los resultados de: ***\n\n");

        printf("1.- La suma entre %d y %d \n", x, y);
        printf("2.- La resta entre %d y %d \n", x, y);
        printf("3.- La multiplicacion entre %d y %d \n", x, y);
        printf("4.- La division entre %d y %d \n", x, y);
        printf("5.- El factorial entre %d y %d \n", x, y);
        printf("\nIngrese una opcion: ");
        scanf("%d", &opcion2);

        return opcion2;


    }


