#include <iostream>
#include <string>
#include "Lista/ListaDoble.h"
using namespace std;
void funcionRetroceder(ListaDoble<string> & lista1, int & posicion){
  if(posicion>=1){
        cout << lista1.getDato(posicion-1) << endl;
        posicion--;
    }
  else {
      cout << "NO hay urls anteriores" << endl;
  }

}
void funcionAvanzar(ListaDoble<string>& lista, int &posicion){
    if (posicion<lista.getTamanio()){
        cout << lista.getDato(posicion+1)<< endl;
        posicion++;
    }
    else {
        cout << "ultimo url del historial" << endl;
    }
}


int main () {
    ListaDoble<string> lista1;
    int opcion, posicion=0;
string pagina;

    do {
        cout << "\nMenu :" << endl;
        cout << "1. Añadir pagina" << endl;
        cout << "2. mostrar historial" << endl;
        cout << "3. retroceder" << endl;
        cout << "4. avanzar " << endl;
        cout << "5. salir" << endl;
        cout << "Ingrese una opcion (1-5): ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1:
                cout << "ingrese la pagina que desea agregar" << endl;
                getline(cin, pagina);
                lista1.insertarUltimo(pagina);
                posicion++;
                 break;
            case 2:
                lista1.imprimir();
                break;
            case 3:
                funcionRetroceder(lista1, posicion);
                break;
            case 4:
                cout << "posicion: " << posicion << endl;
                cout << "tamanio: " << lista1.getTamanio() << endl;
                funcionAvanzar(lista1,posicion);
                break;
            default: break;

        }
    }while(opcion!=5);
}
