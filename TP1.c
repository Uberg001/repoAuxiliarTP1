#include <stdio.h>
#include <ctype.h> //Si se uso en un ejemplo, supongo que se puede usar en el ejercicio

//1: Declaracion de funciones
int lenght(char* cadena){
    int i=0;
    while(cadena[i]!='\0'){
        i++;
    }
    return i;
} //a:Calcular y retornar la longitud de una cadena dada.
    

int toInt(char* cadena){
    int i,resultado=0;
    while (cadena[i]!='\0'){
        resultado=resultado*10+(cadena[i]);
        i++;
    }
    return resultado;
} //b:Convertir una cadena de dígitos en su equivalente numérico. 

char* toUpper(char* cadena){
    int i=0;
    while(cadena[i]!='\0'){
        cadena[i]=toupper(cadena[i]);
        i++;
    }
    return cadena;
} //c:Convertir una cadena de caracteres a la misma cadena con todos sus caracteres en mayúscula. 

char* deleteChar(char* cadena,char caracter){
   
}//d:Eliminar de una cadena dada todas las ocurrencias de un carácter dado. 

char* concat(char* destino,char* origen){
    int lenD=0;
    while (destino[lenD] != '\0') {
        lenD++;
    }
    
    int lenO=0;
    
    while (origen[lenO] != '\0') {
        destino[lenD + lenO] = origen[lenO];
        lenO++;
    }

    destino[lenD + lenO] = '\0';

}//e:Concatenar al final de la primera cadena dada una segunda cadena también dada.

char* insertChar(char* cadena,char caracter,int pos){
    int len = 0;
    while (cadena[len] != '\0') {
        len++;
    } //Calculo la longitud de la cadena

    if (pos < 0 || pos > len) { //Verifico si la posicion es valida
        printf("Posición inválida\n");
        return;
    }

    for (int i = len; i >= pos; i--) {
        cadena[i+1] = cadena[i];
    }
    cadena[pos] = caracter;

}//f:Modificar la cadena dada con la inserción de un carácter dado en una posición determinada. 


int main(){ //2: Testeo de funciones 
    char cadena[]="Miguel Borja";
    int longitud=lenght(cadena);//a

    char cadenaNumeros[]="91218";
    int num=toInt(cadenaNumeros);//b

    char* cadenaNueva=toUpper(cadena);//c

    char* cadenaMod=deleteChar(cadena,'u');//d

    char cadena2[]="Gonzalo Martinez";
    char* cadena3=concat(cadena,cadena2);//e

    char* nuevaCadena=insertChar(cadena,'9',13);//f

    //Impresion de las cadenas...
    printf("%d\n",longitud);//a
    printf("%d\n",num);//b
    printf("%s\n",cadenaNueva);//c
    printf("%s\n",cadenaMod);//d
    printf("%s\n",cadena3);//e
    printf("%s\n",cadenaNueva);//f
    return 0;
}