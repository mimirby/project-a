//
// Created by xdazc on 21/12/2023.
//

#ifndef MAIN_MENUUNO_H
#define MAIN_MENUUNO_H


#include "ListaMenu.h"

class MenuUno {
private:
    ListaMenu menuPrincipal;
    ListaMenu menuAdministrar;
    ListaMenu menuInspeccion;
    ListaMenu menuCalificacion;
    ListaMenu menuPromedio;
    ListaMenu menuInformacion;
public:
    MenuUno(){
        menuPrincipal.agregarOpcion("Administrar informacion de estudiantes");
        menuPrincipal.agregarOpcion("Inspeccionar informacion de estudiantes");
        menuPrincipal.agregarOpcion("Salir");

        menuAdministrar.agregarOpcion("Agregar estudiante");
        menuAdministrar.agregarOpcion("Actualizar calificaciones del estudiante");
        menuAdministrar.agregarOpcion("Actualizar informacion del estudiante");
        menuAdministrar.agregarOpcion("Eliminar estudiante");
        menuAdministrar.agregarOpcion("Atras");

        menuInspeccion.agregarOpcion("Mostrar promedio de notas de estudiante");
        menuInspeccion.agregarOpcion("Mostrar informacion del estudiante");
        menuInspeccion.agregarOpcion("Atras");

        menuCalificacion.agregarOpcion("I Ciclo");
        menuCalificacion.agregarOpcion("II Ciclo");
        menuCalificacion.agregarOpcion("III Ciclo");

        menuPromedio.agregarOpcion("I Ciclo");
        menuPromedio.agregarOpcion("II Ciclo");
        menuPromedio.agregarOpcion("III Ciclo");

        menuInformacion.agregarOpcion("Carrera");
        menuInformacion.agregarOpcion("Adecuacion");
        menuInformacion.agregarOpcion("Beca");
        menuInformacion.agregarOpcion("Atras");
    }

    void ejecutarMenu(){
        int opcionSeleccionada;
        do {
            menuPrincipal.mostrarMenu();
            opcionSeleccionada=obtenerOpcionUsuario();
            switch(opcionSeleccionada){
                case 1:
                    break;

                case 2:
                    break;

                case 3:
                    break;

                default:
                    cout<<"Opcion invalida. Intentelo de nuevo. \n";
                    break;
            }
        } while (opcionSeleccionada !=3);
    }
private:
    int obtenerOpcionUsuario() const {
        int opcion;
        cout << "Seleccione una opción (1-3): ";
        while (!(cin >> opcion) || opcion < 1 || opcion > 6) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Opción inválida. Por favor, elija una opción válida (1-3): ";
        }
        return opcion;
    }

    void ejecutarMenuAdministrar(){
        int opcionSeleccionada;
        do{
            menuAdministrar.mostrarMenu();
            opcionSeleccionada = obtenerOpcionUsuario();
            switch(opcionSeleccionada){
                case 1:
                    cout<<"Aqui se agrega el estudiante\n";
                    break;
                case 2:
                    cout<<"Aqui se actualiza las calificaciones\n";
                    break;
                case 3:
                    cout<<"Aqui se actualiza la informacion\n";
                    break;
                case 4:
                    cout<<"Aqui se elimina el estudiante \n";
                    break;
                case 5:
                    return;
                default:
                    cout<<"Opcion no valida. Intente denuevo \n";
                    break;
            }

        } while (opcionSeleccionada !=5);
    }

    void ejecutarMenuInspeccion(){
        int opcionSeleccionada;
        do{
            menuInspeccion.mostrarMenu();
            opcionSeleccionada=obtenerOpcionUsuario();

            switch (opcionSeleccionada){
                case 1:
                    cout<<"Aqui se muestra el menu para promedios \n";
                    break;
                case 2:
                    cout<<"Aqui se muestra la informacion del estudiante\n";
                    break;
                case 3:
                    return;
                default:
                    cout<<"Opcion no valida. Intente denuevo \n";
                    break;
            }
        } while (opcionSeleccionada != 3);
    }

    void ejecutarMenuCalificacion(){
        int opcionSeleccionada;
        do{
            menuCalificacion.mostrarMenu();
            opcionSeleccionada=obtenerOpcionUsuario();
            switch (opcionSeleccionada){
                case 1:
                    cout<<"I Ciclo \n";
                    break;
                case 2:
                    cout<<"II Ciclo\n";
                    break;
                case 3:
                    cout<<"III Ciclo\n";
                    break;
                default:
                    cout<< "Opcion invalida. Intentelo de nuevo.\n";
                    break;
            }
        } while(opcionSeleccionada != 3);
    }

    void ejecutarMenuPromedio(){
        int opcionSeleccionada;
        do{
            menuPromedio.mostrarMenu();
            opcionSeleccionada=obtenerOpcionUsuario();

            switch (opcionSeleccionada){
                case 1:
                    cout<<"Aqui se muestra el primer ciclo\n";
                    break;
                case 2:
                    cout<<"Aqui se muestra el segundo ciclo\n";
                    break;
                case 3:
                    cout<<"Aqui se muestra el tercer ciclo\n";

                default:
                    cout<<"Opcion no valida. Intente denuevo \n";
                    break;
            }
        } while (opcionSeleccionada != 3);
    }

    void ejecutarmenuInformacion(){
        int opcionSeleccionada;
        do {
            menuInformacion.mostrarMenu();
            opcionSeleccionada=obtenerOpcionUsuario();
            switch(opcionSeleccionada){
                case 1:
                    cout<<"Aqui se cambia la carrera\n";
                    break;

                case 2:
                    cout<<"Aqui se cambia la adecuacion\n";
                    break;

                case 3:
                    cout<<"Aqui se cambia la beca\n";
                    break;

                case 4:
                    return;
                default:
                    cout<<"Opcion invalida. Intentelo de nuevo. \n";
                    break;
            }
        } while (opcionSeleccionada !=4);
       }
};


#endif

