#include <stdio.h>

int is_even(int x)
{
    if( x % 2 == 0)
    {
        printf("El numero es par\n");
    }
    else
    {
        printf("El numero es impar\n");
    }

}
 int main()
 {
    int num;
    printf("Ingrese un numero entero: ");
    scanf("%i", &num);
    is_even(num);
    return 0;    
 }