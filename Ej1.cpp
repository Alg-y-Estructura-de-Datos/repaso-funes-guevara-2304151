#include <iostream>
using namespace std;
void intercambiarJugos (float &a, float &b);

//llamado
int main() {
    float m,n;
    cout << "Ingrese la cantidad de jugo de manzana (litros):"<<endl;
    cin >> m;
    cout << "Ingrese la cantidad de jugo de naranja (litros):"<<endl;
    cin >> n;

    cout <<"antes del intercambio:\n";
    cout <<"jugo de naranja:"<< n << "litros\n";
    cout <<"jugo de manzana:"<< m << "litros\n";

    intercambiarJugos(m,n);
    cout <<"despues del intercambio:\n";
    cout <<"jugo de naranja:"<< n << "litros\n";
    cout <<"jugo de manzana:"<< m << "litros\n";
    return 0;
}
//funcion intercambiar jugos
void intercambiarJugos (float &a, float &b){
    float temp = a;
    a = b;
    b = temp;
}