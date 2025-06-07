//Invertir un Arreglo
//Llena un arreglo con N números e invierte el orden de los elementos.

#include <iostream>
using namespace std;

int main (){

    int number [] = {1,2,3,4,5}; 
    int n = sizeof(number) / sizeof(number[0]);

    for (int i = 0; i < n / 2 ; i++){

        int temporal = number[i];

        number[i] = number [n - 1 - i];

        number [n - 1 - i] = temporal;
    }
    
    for(int i = 0; i < n; i++){
        cout<<number[i]<<" ";
    }


    return 0;
}
