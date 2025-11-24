// ...existing code...
#ifndef PROCEDIMIENTOS_H
#define PROCEDIMIENTOS_H

#define MAX 10

void ingresarProductos(char nombres[][30], float precios[], int *cantidad);
float calcularTotal(float precios[], int cantidad);
float calcularPromedio(float precios[], int cantidad);
int buscarMasCaro(float precios[], int cantidad);
int buscarMasBarato(float precios[], int cantidad);
int buscarProducto(char nombres[][30], float precios[], int cantidad, char buscado[]);

#endif // PROCEDIMIENTOS_H
// ...existing code...
