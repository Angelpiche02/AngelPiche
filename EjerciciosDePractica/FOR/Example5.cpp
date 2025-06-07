//Serie de Fibonacci
//Muestra los primeros N términos de la serie de Fibonacci.

#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 1, suma;

    cout << "Serie de Fibonacci (10 terminos): ";

    for (int i = 0; i < 10; i++) {

        cout << a << " ";

        suma = a + b;
        a = b;
        b = suma;
    }

    return 0;
}

 