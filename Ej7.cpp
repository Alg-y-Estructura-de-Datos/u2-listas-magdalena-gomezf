#include <iostream>
#include <string>
#include "Lista/ListaDoble.h"

using namespace std;

class Estudiantes{
private:
    string nombre;
    int edad;
public:
    Estudiantes():nombre(""),edad(){}
    Estudiantes(const string &n, int e): nombre(n), edad(e){}


    string getNombre() const { return nombre; }
    int getEdad() const { return edad; }

    friend ostream& operator<< (ostream & os, const Estudiantes& c){
        os <<" nombre : " << c.nombre << ", edad: " << c.edad << endl;
        return os;
    }
};
void agregarEstudiantes(ListaDoble<Estudiantes>&lista){
    lista.insertarUltimo(Estudiantes("maria", 15));
    lista.insertarUltimo(Estudiantes("magdalena", 20));
    lista.insertarUltimo(Estudiantes("ana", 33));
    lista.insertarUltimo(Estudiantes("pablo", 65));
    lista.insertarUltimo(Estudiantes("azul", 16));
}
void mostrarEstudiantes(ListaDoble<Estudiantes>&lista){
    if(lista.esVacia()){
        cout << "no hay estudiantes en la lista" << endl;
    } else {
        lista.imprimir();
    }
}
void buscarEstudiante(ListaDoble<Estudiantes>&lista, string nombre){
    for (int i=0; i<lista.getTamanio();i++){
        Estudiantes c=lista.getDato(i);
        if (c.getNombre()==nombre){
            cout << "contacto encontrado: " << c << endl;
            return;
        }
    }
    cout << "contacto no encontrado" << endl;
}
void eliminarEstudiante(ListaDoble<Estudiantes>&lista, string nombre){
    for (int i=0;i<lista.getTamanio();i++){
        Estudiantes c=lista.getDato(i);
        if (c.getNombre()==nombre){
            lista.remover(i);
            cout << "contacto eliminado" << c << endl;
            return;
        }
    }
    cout<< "contacto no encontrado"<< endl;
}
int main () {
    ListaDoble<Estudiantes> lista1;
    string nombre;
    int opcion;


    do {
        cout << "\nMenu :" << endl;
        cout << "1. agregar estudiantes" << endl;
        cout << "2. mostrar estudiantes" << endl;
        cout << "3. buscar un estudiante" << endl;
        cout << "4. eliminar estudiante " << endl;
        cout << "5. contar estudiantes" << endl;
        cout << "6. salir " << endl;
        cout << "Ingrese una opcion (1-6): ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                agregarEstudiantes(lista1);
                break;
            case 2:
                mostrarEstudiantes(lista1);
                break;
            case 3:
                cout << "Ingrese el nombre que desea buscar: " << endl;
                cin >> nombre;
                buscarEstudiante(lista1, nombre);
                break;
            case 4:
                cout << "Ingrese el nombre que desea eliminar: ";
                cin >> nombre;
                eliminarEstudiante(lista1, nombre);
                break;
            case 5:
                cout << "la cantidad de estudiantes en l lista es de: " << endl;
                lista1.getTamanio();
                break;
            case 6:
                break;
        }
    } while (opcion != 6);
}