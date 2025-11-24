#include <stdio.h>
#include <string.h>
#include "Procedimientos.h"

void ingresarProductos(char nombres[][30], float precios[], int *cantidad){
    
    printf("Cuantos productos va a ingresar (max 10): ");
    scanf("%d", cantidad);

    if(*cantidad > MAX){
        *cantidad = MAX;
    }

    for(int i=0; i<*cantidad; i++){
        printf("\nIngrese el nombre del producto %d: ", i+1);
        scanf("%s", nombres[i]);

        printf("Ingrese el precio: ");
        scanf("%f", &precios[i]);
    }
}

float calcularTotal(float precios[], int cantidad){
    float suma = 0;
    int i;

    for(i = 0; i < cantidad; i++){
        suma = suma + precios[i];
    }

    return suma;
}

float calcularPromedio(float precios[], int cantidad){
    float total = calcularTotal(precios, cantidad);
    float prom = total / cantidad;
    return prom;
}

int buscarMasCaro(float precios[], int cantidad){
    int pos = 0;
    int i;

    for(i = 1; i < cantidad; i++){
        if(precios[i] > precios[pos]){
            pos = i;
        }
    }

    return pos;
}

int buscarMasBarato(float precios[], int cantidad){
    int pos = 0;
    int i;

    for(i = 1; i < cantidad; i++){
        if(precios[i] < precios[pos]){
            pos = i;
        }
    }

    return pos;
}

int buscarProducto(char nombres[][30], float precios[], int cantidad, char buscado[]){
    int i;

    for(i = 0; i < cantidad; i++){
        if(strcmp(nombres[i], buscado) == 0){
            printf("Precio del producto %s es %.2f\n", nombres[i], precios[i]);
            return i;
        }
    }

    printf("No existe ese producto\n");
    return -1;
}