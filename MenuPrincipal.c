#include <stdio.h>
#include <string.h>
#include "Procedimientos.h"

int main(){

    char nombres[MAX][30];
    float precios[MAX];
    int cantidad;
    char buscado[30];

    ingresarProductos(nombres, precios, &cantidad);

    printf("\nEl total del inventario es: %.2f\n", calcularTotal(precios, cantidad));
    printf("El promedio de los precios es: %.2f\n", calcularPromedio(precios, cantidad));

    int caro = buscarMasCaro(precios, cantidad);
    int barato = buscarMasBarato(precios, cantidad);

    printf("\nProducto mas caro: %s con precio %.2f\n", nombres[caro], precios[caro]);
    printf("Producto mas barato: %s con precio %.2f\n", nombres[barato], precios[barato]);

    printf("\nIngrese el nombre del producto a buscar: ");
    scanf("%s", buscado);

    buscarProducto(nombres, precios, cantidad, buscado);

    return 0;
}