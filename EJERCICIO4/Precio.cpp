//
// Created by victo on 05/11/2024.
//
#include<iostream>
using namespace std;
#include "Precio.h"
void Precio() {
        int precio1, precio2, precio3;
        cout << "Ingrese el precio del primer artículo: ";
        cin >> precio1;
        cout << "Ingrese el precio del segundo artículo: ";
        cin >> precio2;
        cout << "Ingrese el precio del tercer artículo: ";
        cin >> precio3;
        int
    precio_menor;
        if (precio1 <= precio2 && precio1 <= precio3) {
            precio_menor = precio1;
        } else if (precio2 <= precio1 && precio2 <= precio3) {
            precio_menor = precio2;
        } else {
            precio_menor = precio3;
        }
        int total_a_pagar = precio1 + precio2 + precio3 - precio_menor;
        while  (precio < 0) cout << "Precio invalido"; 
        cout << "El total a pagar bajo la promoción '3 por 2' es: €" << total_a_pagar << endl;
}
