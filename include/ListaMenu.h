//
// Created by xdazc on 21/12/2023.
//

#ifndef MAIN_LISTAMENU_H
#define MAIN_LISTAMENU_H


#include <iostream>
#include <list>
#include <string>
#include <limits>
using namespace std;

struct NodoMenu {
    string opcion;
    NodoMenu* siguiente;

    NodoMenu(const string& op) : opcion(op), siguiente(nullptr) {}
};

class ListaMenu {
private:
    NodoMenu* cabeza;

public:
    ListaMenu(): cabeza(nullptr) {}

    void agregarOpcion(const string& opcion) {
        auto* nuevoNodo = new NodoMenu(opcion);

        if (!cabeza) {
            cabeza = nuevoNodo;
        } else {
            NodoMenu* actual = cabeza;
            while (actual->siguiente) {
                actual = actual->siguiente;
            }
            actual->siguiente = nuevoNodo;
        }
    }

    void mostrarMenu() {
        NodoMenu* actual = cabeza;
        int indice = 1;

        while (actual) {
            cout << indice << ". " << actual->opcion << endl;
            actual = actual->siguiente;
            ++indice;
        }
    }

    ~ListaMenu(){
        NodoMenu* actual = cabeza;
        while (actual) {
            NodoMenu *siguiente = actual->siguiente;
            delete actual;
            actual = siguiente;
        }
    }

};



#endif
