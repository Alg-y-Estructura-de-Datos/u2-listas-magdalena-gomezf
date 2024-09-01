
#include <iostream>
#include <string>
#include "Lista/CircList.h"
#include <thread>
#include <chrono>

using namespace std;
void mostrarFrases(CircList<string>& lista1){
    if (lista1.esVacia()){
        cout << "lista vacia"<< endl;
        return;
    }

    for (int i=0; i<lista1.getTamanio(); i++){
        // Bucle infinito para mostrar las frases circularmente
        cout << lista1.getDato(i) << endl; // Mostrar el dato en la posición actual
            this_thread::sleep_for(chrono::seconds(3)); // Retraso de 3 segundos
    }
}
int main (){
    int opcion;
    CircList<string> lista1;
    string frase;
    lista1.insertarUltimo("promo 2x1 panchos");
    lista1.insertarUltimo("descuentoo");
do{
    cout << "\nMenu :" << endl;
    cout << "1. agregar frases" << endl;
    cout << "2. eliminar frases " << endl;
    cout << "3. mostrar frases" << endl;
    cout << "4. salir " << endl;
    cout << "Ingrese una opcion (1-4): ";
    cin >> opcion;
cin.ignore();
    switch (opcion) {
        case 1:
            cout << "ingrese la frase que desea agregar" << endl;
            getline(cin, frase);
            lista1.insertarUltimo(frase);
            break;
        case 2:
            cout << "escriba la frase que desee eliminar" << endl;
            getline(cin, frase);
            lista1.eliminarPorValor(frase);
            break;
        case 3:
            mostrarFrases(lista1);
            break;
        default :
            break;


    }

}while(opcion!=4);
}