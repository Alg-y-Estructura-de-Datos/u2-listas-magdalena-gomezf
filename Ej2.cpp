#include <iostream>
using namespace std;
#include "Lista/Lista.h"
//Implementar una función que recibe una lista de números enteros y un número entero “n” y
//que modifique la lista borrando todos los elementos de la lista que tengan el número “n”.
//Imprimir la lista antes de hacer el llamado a la función y luego del llamado a la función para
//mostrar que la lista original cambió. ej: lista: 1->2->3->4->5->3->7->8->3->10 con n=3 debe
//pasar con la función a 1->2->4->5->7->8.

void borrarnumero(Lista<int> &Lista1,int &pos, int n){
    for(int i=0;i<pos;i++){
        if (Lista1.getDato(i)==n){
            Lista1.remover(i);
            pos=pos-1;
        }
    }
}
int main() {

    Lista<int>Lista1;
    cout << "Ejercicio N° 2" << endl;
    int n,d,l;
    cout << "Ingrese el tamnio de la lista" << endl;
    cin >> l;

    for (int i=0 ; i<l ; i++){
        cout << "Ingrese el valor de la lista en la posicion: " << i << endl;
        cin >> d;
        Lista1.insertarUltimo(d);
    }

    cout << "Ingrese el numero que desea borrar: " << endl;
    cin >> n;

  Lista1.print();

    borrarnumero(Lista1,l,n);

Lista1.print();
    return 0;
}
