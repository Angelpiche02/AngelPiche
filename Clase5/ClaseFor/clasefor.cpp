#include <iostream> 
using namespace std;

int main(){
    int n;
    bool esPrimo = true;

    cout <<"Ingrese un numero entero: ";

    if (n<=1){

        esPrimo = false;
    }

    else {

        for (int i = 2; i*i <=n; i++){
            cout <<n<< endl;
            cout <<i<< endl; 

            if(n % i == 0){

                esPrimo = false;
            }
        }
    }



    return 0;
}