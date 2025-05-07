// Solicite al usuuario su salario mensual bruto y luego realice los calculos:
//1. Descuentos obligatorios: seguro social, 3% de salario con un tope maximo de 30$ y solo aplica hasta $1000 ; el afp es el 7.25% del salario 
//2. Renta, se calcula sobre el salario neto despues del seguro social y el afp utilizando la siguiente tabla 

//"Tabla":  Salario neto despues de isss y afp                  ISR A APLICAR
         // Hasta $472.00                                          Exento
         // De $472.01 a $895.24                                    10%
         // De $895.25 a $2038.10                                   20% 
         // Mas de $2038.10                                         30%




#include <iostream> 

using namespace std;

int main (){

    double  salary, ISSS, afp, rent, total, result;
    int option;

    
    cout <<"Insert your monthly income"<< endl;
    cin >> salary;

    if (salary < 0){
        cout << "Error"<< endl;
        return 1;
    }
    else{}

    cout << " What do you want to calculate?"<< endl;
    cout << "------------- MENU -------------" << endl;
    cout << "1. ISSS"<< endl; 
    cout << "2. AFP"<< endl;
    cout << "3. Rent" << endl; 
    cout << "4. Total" << endl; 
    cout << "5. Salir"<< endl; 
    cout << "--------------------------------" << endl; 
    cin >> option;

    switch (option){
        case 1:

        if (salary <= 1000){

            ISSS = salary * 3/100;
            result = salary - ISSS;

            cout << "Your discount is: "<<ISSS<< endl;
            cout <<"Your salary is: " << result<< endl;
        }

        else {

                result = salary - 30;

                cout << "Your discount is $30 "<< endl;
                cout <<"Your salary is: " << result << endl;
        }
        break;

        case 2: 

        afp = salary * 7.25/100;
        result = salary - afp;

        cout << "Your discount is: "<< afp<< endl; 
        cout << "Your salary is: "<< result << endl;

        break;

        case 3:

        if (salary <= 472.00){
            cout << "You dont need to pay rent tax"<< endl;
        }

            else if (salary >= 472.01 && salary <= 895.24){

                rent = salary *10/100;

                cout << "Your rent is: "<< rent<< endl;
            }

                else if (salary >= 895.25 && salary <= 2038.10){

                    rent = salary * 20/100;

                    cout << "Your rent is: "<< rent<< endl;

                }
                else if (salary >= 2038.11){

                    rent = salary * 30/100;

                    cout << "Your rent is: "<< rent<< endl;

                }
                else {}
                
                break;

        case 4: 
        if (salary <= 1000){

            ISSS = salary * 3/100;

            cout << "Your ISSS discount is: "<<ISSS<< endl;
            
        }

        else {

                result = salary - 30;

                cout << "Your ISSS discount is $30 "<< endl;
        }

        afp = salary * 7.25/100;
        result = afp - salary;

        cout << "Your afp discount is: "<< afp<< endl; 
        
        if (salary <= 472.00){
            cout << "You dont need to pay rent tax"<< endl;
        }

            else if (salary >= 472.01 && salary <= 895.24){

                rent = salary *10/100;

                cout << "Your rent is: "<< rent<< endl;
            }

                else if (salary >= 895.25 && salary <= 2038.10){

                    rent = salary * 20/100;

                    cout << "Your rent is: "<< rent<< endl;

                }
                else if (salary >= 2038.11){

                    rent = salary * 30/100;

                    cout << "Your rent is: "<< rent<< endl;

                }
                else {}

                total = salary - afp - ISSS;
                cout <<"Your monthly total is: "<< total<< endl;

                break;

        case 5:
        return 1;
        break;


            }    

    return 0;
}