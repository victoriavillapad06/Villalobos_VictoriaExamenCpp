//
// Created by victo on 05/11/2024.
//

#include "Calificaciones.h"
using namespace std;
#include<iostream>
void Calificaciones(){
    int NUM_EJERCICIOS = 8;
    float calificacion, suma = 0.0;
    for (int i = 1; i <= NUM_EJERCICIOS; i++) {
        cout << "Ingrese la nota del ejercicio " << i << " (entre 0 y 10): ";
        cin >> calificacion;
        while (calificacion < 0 || calificacion > 10) {
            cout << "Calificación inválida. Por favor ingrese un valor entre 0 y 10: ";
            cin >> calificacion;
        }
        suma += calificacion;
    }
    float promedio = suma / NUM_EJERCICIOS;
    cout << "El promedio de las notas es: " << promedio << endl;
}
