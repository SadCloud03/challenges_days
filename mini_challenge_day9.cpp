// DIA 8
// Escribir un programa que pida al usuario dos números y los sume. ¡Pero esta vez hazlo en C++! :)

# include <iostream>
using namespace std; 

int main()  { 
    int numero;
    int numero2;
    int suma;

    cout<< "por favor ingrese dos numero: ";
    cin >> numero;
    cout<< "el primer numero es: " << numero << endl;
    cout<< "ingrese el segundo numero: ";
    cin >> numero2;
    cout<< "el segundo numero es: " << numero2 << endl;

    suma = numero + numero2;

    cout<< "la suma de los dos numeros ingresados es: " << suma << endl;

    return 0;
}