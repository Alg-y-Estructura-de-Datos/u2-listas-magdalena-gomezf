/*Escribir un programa que pida al usuario una palabra o frase y la almacene en una Lista
separando letra por letra, luego pedirá al usuario una vocal que desee contar y, por último, se
debe imprimir por pantalla la lista y el número de veces que aparece la vocal en la palabra o
frase. Validar que la Lista no esté vacía y que la letra a contar que introduzca el usuario sea
una vocal.*/
#include <iostream>


#include "Lista/Lista.h"
using namespace std;
int contarletra(char letra, Lista<char> & lista1){
    int contador=0;
    for (int i=0; i<lista1.getTamanio();i++){
        if (lista1.getDato(i)==letra){
            contador++;
        }
    }
    return contador;
}
int main (){
    Lista<char>Lista1;
    string frase;
    char letra;
    int contador;
    cout << "ingrese una palabra o frase";
    getline(cin, frase);

    for (int i=0;i<=frase.length();i++){
        char c= frase[i];
        Lista1.insertarUltimo(c);
    }
    cout << "Ingrese la letra que desee contar" << endl;
    cin >> letra;

    cout << "Lista: ";
    Lista1.print();

contador=  contarletra(letra, Lista1);
    cout << "La cantidad de " << letra << " que hay en la frase o palabra ingresada es de: " <<  contador  << endl;
}