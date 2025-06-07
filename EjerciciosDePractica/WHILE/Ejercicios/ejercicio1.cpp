//Serie de Fibonacci
//Muestra los primeros N términos de la serie de Fibonacci utilizando while.

#include <iostream> 
using namespace std;

int main(){

    int a = 0, b = 1, fibo = 0, limite = 0;


    cout << " " << a;

    while (15 > limite){
        
        fibo = a + b;
        a = b;
        b = fibo;

        cout <<" "<< a;
        limite ++;
    }

    return 0;
}