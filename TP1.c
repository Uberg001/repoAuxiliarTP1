#include <stdio.h>
#include <ctype.h> //Si se uso en un ejemplo, supongo que se puede usar en el ejercicio

// 1: Declaracion de funciones

// A) Calcular y retornar la longitud de una cadena dada.
int lenght(char *cadena)
{
    int i = 0;
    while (cadena[i] != '\0')
    {
        i++;
    }
    return i;
} // a:Calcular y retornar la longitud de una cadena dada.


// B) Convertir una cadena de dígitos en su equivalente numérico.
int toInt(char *cadena)
{
    int i = 0;
    int num = 0;
    while (cadena[i] != '\0')
    {
        num = num * 10 + (cadena[i] - '0');
        i++;
    }
    return num;
}

// C) Convertir una cadena de caracteres a la misma cadena con todos sus caracteres en mayúscula.
void toUpper(char* cadena) {
    int i = 0;

    while (cadena[i] != '\0') {
        if ((unsigned char)cadena[i] >= 0xC3 && (unsigned char)cadena[i] <= 0xDF) {
            cadena[i + 1] = cadena[i + 1] - 32;
        }
        i++;
    }
}

// D) Eliminar de una cadena dada todas las ocurrencias de un carácter dado.

void eliminarCaracter(char* cadena, char caracter) {
    int i, j;
    for (i = 0, j = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] != caracter) {
            cadena[j++] = cadena[i];
        }
    }

    cadena[j] = '\0';
}

// E) Concatenar al final de la primera cadena dada una segunda cadena también dada.
void concatenarCadenas(char* cadena1, const char* cadena2) {
    int i = 0;
    int j = 0;

    while (cadena1[i] != '\0') {
        i++;
    }

    while (cadena2[j] != '\0') {
        cadena1[i] = cadena2[j];
        i++;
        j++;
    }

    cadena1[i] = '\0';
}


// F) Modificar la cadena dada con la inserción de un carácter dado en una posición determinada.
void insertarCaracter(char* cadena, char caracter, int posicion) {
    int i;
    int longitud = 0;

    // Calcular la longitud de la cadena
    while (cadena[longitud] != '\0') {
        longitud++;
    }

    // Desplazar los caracteres hacia la derecha a partir de la posición deseada
    for (i = longitud; i >= posicion; i--) {
        cadena[i + 1] = cadena[i];
    }

    // Insertar el carácter en la posición deseada
    cadena[posicion] = caracter;
}

int main()
{ // 2: Testeo de funciones
    char cadena[] = "Sintaxis y Semantica de los Lenguajes";
    int longitud = lenght(cadena); // a

    char cadenaNumeros[] = "91218";
    int num = toInt(cadenaNumeros); // b

    char toUpperCadena[] = "hola";
    toUpper(toUpperCadena); // c

    char cadenaMod[] = "hola mundo";
    eliminarCaracter(cadenaMod, 'o'); // d


    char cadena1[] = "hola";
    char cadena2[] = "mundo";
    concatenarCadenas(cadena1, cadena2); // e

    char nuevaCadena[] = "hola mundo";
    insertarCaracter(nuevaCadena, '!', 4); // f

    // Impresion de las cadenas...
    printf("%d\n", longitud);    // a
    printf("%d\n", num);         // b
    printf("%s\n", toUpperCadena); // c
    printf("%s\n", cadenaMod);   // d
    printf("%s\n", cadena1);     // e
    printf("%s\n", nuevaCadena); // f
    return 0;
}