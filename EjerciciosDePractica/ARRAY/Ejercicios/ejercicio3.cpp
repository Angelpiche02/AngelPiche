//Serie de Fibonacci
//Muestra los primeros N términos de la serie de Fibonacci.

#include <iostream>
using namespace std;

int main(){

    //Variable
    int fibonacci[10];

    // Two first values
    fibonacci [0] = 0;
    fibonacci [1] = 1;

    //Start with 2 because we now the first values, and put condition <10 because is the last term
    for (int i = 2; i < 10; i++){

        //We use this operation to know each number 
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    //Show the first terms
    cout <<"The first 10 terms of fibonaccie serie are: "<< endl;

    //Start with 0 to show the whole numbers
    for (int i = 0; i < 10; i++){

        cout <<""<< fibonacci [i]<< endl;
    }


    return 0;
}