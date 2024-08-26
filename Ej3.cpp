#include <iostream>
using namespace std;
#include "Lista/Lista.h"
//Implementar una función que intercambie los elementos entre 2 listas de números enteros
//que recibe como parámetros. Si los tamaños de las listas son distintos, igual debe cambiar los
//datos y cambiarían los tamaños de cada lista. Ejemplo sea lista1= 15->1->8->35->40->25->12 y
//lista2= 3->4->912->45->66 al ejecutar la función quedarían lista1= 3->4->912->45->66 y
//lista2=15->1->8->35->40->25->12.
void cambiarlistas(Lista<int> &Lista1, int &l, Lista <int > &lista2, int &n){
    for (int i=0;i<l;i++){
    Lista1.reemplazar(i,lista2.getDato(i));
    }
}
int main() {
    int n,l,m,d;
    cout << "Ejercicio N° 3" << endl;
    Lista<int>Lista1;
    Lista<int>Lista2;

    cout << "Ingrese el tamnio de la lista" << endl;
    cin >> l;

    for (int i=0 ; i<l ; i++){
        cout << "Ingrese el valor de la lista en la posicion: " << i << endl;
        cin >> d;
        Lista1.insertarUltimo(d);
    }


    cout << "Ingrese el tamanio de la lista 2" << endl;
    cin >> n;

    for (int i=0 ; i<n ; i++){
        cout << "Ingrese el valor de la lista en la posicion: " << i << endl;
        cin >> m;
        Lista2.insertarUltimo(m);
    }

    cambiarlistas(Lista1,l,Lista2,n);

}
