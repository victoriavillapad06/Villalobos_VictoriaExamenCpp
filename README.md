# Villalobos_VictoriaExamenCpp
https://github.com/victoriavillapad06/Villalobos_VictoriaExamenCpp.git
Repositorio en GitHub:

Crea un repositorio privado en GitHub para este examen y compártelo solo después de la revisión si así lo deseas.
Fichero ZIP:

Al finalizar, descarga tu repositorio como un archivo ZIP con el nombre Apellido_Nombre_ExamenCPP.zip.
Archivo README.md:

Incluye un archivo README.md en el repositorio, que contenga:
Un enlace directo al repositorio.
Una breve descripción de cada ejercicio resuelto y el archivo donde se encuentra.
Usa Markdown para estructurar tu README.
Entrega:

Sube el archivo ZIP a la plataforma indicada antes de la fecha límite.
Aspectos Adicionales:

Organiza y comenta tu código para que sea fácil de leer y entender.
Si utilizas referencias externas, inclúyelas en el README.md.
Parte 2: Problemas de Codificación (70 puntos en total)

Ejercicio 1: Identificación de Número Positivo, Negativo o Cero
Escribe un programa en C++ que solicite al usuario ingresar un número entero. El programa deberá analizar el número ingresado e imprimir en pantalla si el número es "positivo", "negativo" o "cero". 
Para realiazar este programa he usado los bucles if y else if.
Primero el programa solicita al usuario que ingrese un número entero y almacena el valor en la variable numero.
std::cout << "Ingrese un número entero: ";
std::cin >> numero;
Después usando el bucle if, if...else if...else,
Si el número ingreasdo es  > 0, se imprime "El número es positivo".
Si el número ingreasdo es  < 0, se imprime "El número es negativo".
Si ninguna de las anteriores es verdadera, el número debe ser cero, así que se imprime "El número es cero".


Ejercicio 2: Día de la Semana
Crea un programa en C++ que solicite al usuario ingresar un número del 1 al 7. El programa deberá imprimir el nombre del día de la semana correspondiente al número ingresado (por ejemplo, 1 para lunes, 2 para martes, ..., 7 para domingo). 

Primero se solicita al usuario que ingrese un número entre 1 y 7.
Mediante la esctructura switch se analiza el número ingresado, para cada caso se imprime el nombre del día correspondiente.
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
      
Cada caso termina con break para evitar la ejecución de casos siguientes.
-  El número deberá ser del 1 al 7, en caso contrario se muestra un mensaje de error indicando que el número es inválido. 
                cout << "Número inválido. Por favor, ingrese un número entre 1 y 7." << endl;
    

Ejercicio 3: Cálculo de Promedio de Calificaciones
Un estudiante ha completado un curso de programación avanzada en C++. Durante el curso, ha realizado 8 ejercicios prácticos, y cada ejercicio se califica con una nota entre 0 y 10. Escribe un programa que solicite al usuario introducir las calificaciones obtenidas por el estudiante en cada uno de los 8 ejercicios. El programa deberá calcular y mostrar el promedio de las calificaciones. 

Priemro se define una constante para almacenar el número total de ejercicios, que es 8.
 int NUM_EJERCICIOS = 8;
Se utiliza el bucle for, que se repetirá 8 veces
En cada iteración, se solicita al usuario que ingrese la calificación correspondiente al ejercicio.
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
  
La calificación ingresada debe estar del 0 al 10
 Al final del bucle se calcula la nota media dividiendo la suma de las calificaciones entre el número de ejercicios: float promedio = suma / NUM_EJERCICIOS;
 Finalmente, se muestra el promedio calculado en pantalla.
 
Ejercicio 4: Promoción de "3 por 2" en Tienda
En una tienda se está ofreciendo una promoción en la cual el cliente puede llevarse tres artículos y pagar solo por los dos artículos más caros. Escribe un programa en C++ que solicite al usuario ingresar los precios de tres artículos y, como resultado, muestre el total que el cliente debe pagar bajo esta promoción.

El programa solicita al usuario que ingrese el precio de cada uno de los tres artículos.
Estos precios se almacenan en tres variables: precio1, precio2 y precio3.

Después se identificará el artículo de menor precio, ya que este será el artículo gratuito en la promoción.
Mediante el bucle if, el programa compara los tres precios:
        int
    precio_menor;
        if (precio1 <= precio2 && precio1 <= precio3) {
            precio_menor = precio1;
        } else if (precio2 <= precio1 && precio2 <= precio3) {
            precio_menor = precio2;
        } else {
            precio_menor = precio3;
        }
      

Para calcular el total a pagar, el programa suma los tres precios y luego resta el valor del artículo de menor precio
 int total_a_pagar = precio1 + precio2 + precio3 - precio_menor;
    
Finalmente, el programa muestra en pantalla el total a pagar aplicando la promoción.
    cout << "El total a pagar bajo la promoción '3 por 2' es: €" << total_a_pagar << endl;

Bucle for:
En C++, for es una estructura de control de bucle que se utiliza para repetir un bloque de código un número específico de veces cuando se conoce de antemano la cantidad exacta de iteraciones que se deben realizar. 

switch
En C++, switch es una estructura de control que permite seleccionar y ejecutar un bloque de código entre varias opciones posibles, basándose en el valor de una expresión.

If -Else
La instrucción if se utiliza para ejecutar un bloque de código solo si se cumple una condición específica (es decir, si la condición es verdadera). Si la condición no se cumple (es decir, es falsa), el código dentro del if se omite.
La estructura if-else se usa cuando se necesitan dos caminos posibles en el flujo del programa: uno para cuando la condición es verdadera y otro para cuando es falsa. El bloque else se ejecuta si la condición en el if es falsa.
while
La instrucción while  permite ejecutar un bloque de código repetidamente mientras una condición dada sea verdadera. Es especialmente útil para situaciones en las que no se conoce de antemano cuántas veces se debe repetir el bloque de código, ya que depende de la evaluación continua de una condición. La condición se evalua antes de realizar el código.



Fuente:Chatgpt
