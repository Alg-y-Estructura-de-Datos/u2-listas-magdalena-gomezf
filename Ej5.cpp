#include <iostream>
#include "Lista/Lista.h"
/*Crear un programa que pida al usuario dar elementos a una Lista de números enteros. Luego
cree una función que reciba una lista int L1 y devuelva otra lista int L2 conteniendo los
elementos repetidos de L1. Por ejemplo, si L1 almacena los valores 5->2->7-> 2->5->5->1, debe
construirse una lista L2 con los valores 5->2. Si en L1 no hay elementos repetidos se debe
indicar al usuario que no hay elementos repetidos en L1, de lo contrario imprimir ambas listas.
*/
using namespace std;
Lista<int> elementosrepetidos(Lista<int>& lista1 ){
    Lista<int> Lista2;

    Lista<int> repetidos;
    repetidos=lista1;

    for (int i=0;i<lista1.getTamanio();i++){
        int valor=lista1.getDato(i);


        if (lista1.getDato(i)==repetidos.getDato(j)) {
            Lista2.insertarUltimo(lista1.getDato(i));
        }
        }
    }
    return Lista2;
}
int main () {
    Lista<int> lista1;
    int num, cant;
    cout << "ingrese cantidad d numeros que desee ingresar";
    cin >> cant;

    for (int i = 0; i < cant; i++) {
        cout << "ingrese el elemento" << i + 1 << "de la lista";
        cin >> num;
        lista1.insertarUltimo(num);
    }
    Lista<int> lista2 = elementosrepetidos(lista1);
    cout << "Lista: ";
    lista2.print();

}
