/*Crea un programa que gestione una lista circular de contactos. Cada contacto contiene un
nombre (cadena de caracteres) y un número de teléfono (cadena de caracteres).*/

#include <iostream>
#include <string>
#include "Lista/CircList.h"
using namespace std;
class Contacto{
public:
    string nombre, telefono;

    Contacto(): nombre(""),telefono(""){}
    Contacto(const string &n, const string t): nombre(n), telefono(t){}


    bool operator==(const Contacto& other) const {
        return nombre == other.nombre;
    }

    friend ostream& operator<< (ostream & os, const Contacto& c){
        os <<"nombre : " << c.nombre << ", telefono" << c.telefono << endl;
        return os;
    }
};
void mostrarContactos(CircList<Contacto> &lista1){
   if( lista1.esVacia()){
        cout << "lista vacia" << endl;
    }
    lista1.imprimir();
}
void buscarContacto(CircList<Contacto>&lista1, string &nombre){
    for (int i=0; i<lista1.getTamanio();i++){
        Contacto c=lista1.getDato(i);
        if (c.nombre==nombre){
            cout << "contacto encontrado:" << c << endl;
            return;
        }
    }
    cout << "contacto no encontrado" << endl;


}
void eliminarContacto(CircList<Contacto>&lista1, string &nombre){
    for (int i=0;i<lista1.getTamanio();i++){
        Contacto c=lista1.getDato(i);
        if (c.nombre==nombre){
            lista1.eliminarPorValor(c);
            cout << "contacto eliminado" << c << endl;
            return;
        }
    }
    cout<< "contacto no encontrado"<< endl;
}

int main () {
    CircList<Contacto> lista1;
    string nombre;
    int opcion;

    //agrega contactos
    lista1.insertarUltimo(Contacto("magdalena", "21212"));
    lista1.insertarUltimo(Contacto("marta", "21243"));
    lista1.insertarUltimo(Contacto("ana", "322323"));
    lista1.insertarUltimo(Contacto("agus", "456456"));
    lista1.insertarUltimo(Contacto("maria", "546565"));

    do {
        cout << "\nMenú :" << endl;
        cout << "1. Mostrar contactos" << endl;
        cout << "2. Buscar contacto" << endl;
        cout << "3. Eliminar contacto" << endl;
        cout << "4. Contar contactos" << endl;
        cout << "5. Salir" << endl;
        cout << "Ingrese una opción (1-5): ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                mostrarContactos(lista1);
                break;
            case 2:
                cout << "Ingrese el nombre que desea buscar: ";
                cin >> nombre;
                buscarContacto(lista1, nombre);
                break;
            case 3:
                cout << "Ingrese el nombre que desea eliminar: ";
                cin >> nombre;
                eliminarContacto(lista1, nombre);
                break;
            case 4:
                cout << "Número de contactos en la lista: " << lista1.getTamanio() << endl;
                break;
            case 5:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Intente nuevamente." << endl;
                break;
        }

    } while (opcion != 5);;


}