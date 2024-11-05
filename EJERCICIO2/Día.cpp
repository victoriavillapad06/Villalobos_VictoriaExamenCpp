//
// Created by victo on 05/11/2024.
//
#include<iostream>
using namespace std;
#include "Día.h"
void Día(){
    int dia;


    cout << "Ingrese un número del 1 al 7 para obtener el día de la semana correspondiente: ";
    cin >> dia;


    switch(dia) {
        case 1:
            cout << "Lunes" << endl;
        break;
        case 2:
            cout << "Martes" << endl;
        break;
        case 3:
            cout << "Miércoles" << endl;
        break;
        case 4:
            cout << "Jueves" << endl;
        break;
        case 5:
            cout << "Viernes" << endl;
        break;
        case 6:
            cout << "Sábado" << endl;
        break;
        case 7:
            cout << "Domingo" << endl;
        break;
        default:
            // Muestra un mensaje de error si el número no está entre 1 y 7
                cout << "Número inválido. Por favor, ingrese un número entre 1 y 7." << endl;
    }
}