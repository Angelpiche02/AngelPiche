#include <iostream>
using namespace std;

int main() {
    // Arreglo con números predefinidos
    int numeros[] = {25, 3, 89, -4, 17, 0, 45, 102, -15, 7};
    int N = sizeof(numeros) / sizeof(numeros[0]); // Calcular tamaño del arreglo

    // Inicializar mayor y menor con el primer elemento
    int mayor = numeros[0];
    int menor = numeros[0];

    // Buscar mayor y menor
    for (int i = 1; i < N; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    // Mostrar resultados
    cout << "Número mayor: " << mayor << endl;
    cout << "Número menor: " << menor << endl;

    return 0;
}
