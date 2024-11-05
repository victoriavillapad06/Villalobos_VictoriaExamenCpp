//
// Created by victo on 05/11/2024.
//

#include "número.h"
#include<iostream>
using namespace std;
void número(){
int numero;


std::cout << "Ingrese un número entero: ";
std::cin >> numero;


if (numero > 0) {
    cout << "El número es positivo." << endl;
} else if (numero < 0) {
    cout << "El número es negativo." << endl;
} else {
    cout << "El número es cero." << endl;
}

}