#include <stdio.h>

//1: Declaracion de funciones
int lenght(char* cadena){
    int i=0;
    while(cadena[i]!='\0'){
        i++;
    }
    return i;
} //a:Calcular y retornar la longitud de una cadena dada.
    

int toInt(char* cadena){

} //b:Convertir una cadena de dígitos en su equivalente numérico. 

char* toUpper(char* cadena){

} //c:Convertir una cadena de caracteres a la misma cadena con todos sus caracteres en mayúscula. 

char* deleteChar(char* cadena,char caracter){

}//d:Eliminar de una cadena dada todas las ocurrencias de un carácter dado. 

char* concat(char* cadena1,char* cadena2){

}//e:Concatenar al final de la primera cadena dada una segunda cadena también dada.

char* insertChar(char* cadena,char caracter,int pos){

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
    printf("%d",longitud);

    return 0;
}