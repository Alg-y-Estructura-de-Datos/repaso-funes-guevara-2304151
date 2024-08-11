#include <iostream>
using namespace std;
void marcarAsiento(bool *asiento){ //asiento va a apuntar una direc de mem con tamaño de booleano
    *asiento = true;
}

int main() {
    const int numAsientos = 10; //para crear la cant de vari, se puede crear direc el arreglo de 10
    bool asientos[numAsientos] = {false}; //todos libres, le precargo los valores, mas rapido que el bucle for

    int asientoElegido;
    //est inicial de los asientos
    cout << "Estado inicial de los asientos:\n";
    for (int i = 0; i < numAsientos; ++i){
        cout <<"Asiento"<<i+1<<": "<<(asientos[i] ? "Reservado" : "Libre")<<"\n"; //condicional, como si fuera un if, reser si es true, sino false
    }

    //elegir
    cout << "Elija un asiento parareservar (1-" <<numAsientos<< "):";
    cin >> asientoElegido;

    //validar elecc del usuario
    if (asientoElegido < 1 || asientoElegido > numAsientos){
        cout << "numero de asiento invalido.\n";
        return 1;
    }

    //marcar
    marcarAsiento(&asientos[asientoElegido - 1]);

    //mostrar el estado dsp de la reserv
    cout << "Estado de los asientos después de la reserva:\n";
    for (int i = 0; i < numAsientos; ++i) {
        cout << "Asiento " << i + 1 << ": " << (asientos[i] ? "Reservado" : "Libre") << "\n";
    }

    return 0;
}
