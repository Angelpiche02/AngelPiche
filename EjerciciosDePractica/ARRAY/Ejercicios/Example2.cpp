//Eliminar Elementos Duplicados
//Llena un arreglo y elimina los valores repetidos.

#include <iostream>

using namespace std;

int main(){

    int n [10] = {1,2,2,3,3,4,6,4,6,8};
    
    for(int i = 0; i < 10; i++){

        if (n[i] != n[i + 1]){

             cout <<n[i] << " ";
             
             

        }
       
    }


    return 0;
}