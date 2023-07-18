#include <iostream>

const int FILAS = 5;
const int COLUMNAS = 5;

int main() {
    int matriz[FILAS][COLUMNAS];

    
    std::cout << "Ingrese los elementos de la matriz:" << std::endl;
    for (int a = 0; a < FILAS; a++) {
        for (int b = 0; b < COLUMNAS; b++) {
            std::cin >> matriz[a][b];
        }
    }

    
    int sumaMaxima = 0;
    int filaMaxima = -1;
    for (int a = 0; a < FILAS; a++) {
        int sumaFila = 0;
        for (int b = 0; b < COLUMNAS; b++) {
            sumaFila += matriz[a][b];
        }
        if (sumaFila > sumaMaxima) {
            sumaMaxima = sumaFila;
            filaMaxima = a;
        }
    }

   
    std::cout << "La fila con la máxima suma es la fila " << filaMaxima + 1
              << " con una suma de " << sumaMaxima << std::endl;

    return 0;
}