#include <iostream>
#include <cmath>
using namespace std;
//modificar para que quede de forma modular las funciones
int sumarEnteros(int a,int c){
    return a + c;
}

double calcularAreaCirculo(double rad){ //usa double x el tamaño
    const double PI = 3.14159265358979323846;
    return PI * rad * rad;
}
double calcularPotencia(double base, int exponente){
    return pow(base, exponente);
}


int main(){
    int a,c,r,b,e, elecc;
    cout << "ingrese el numero segun la operacion que desee realizar:\n";
    cout << "1 - Sumar enteros\n";
    cout << "2 - Calcular area de un circulo\n";
    cout << "3 - Calcular la potencia de un numero\n";
    cin >> elecc;
    switch (elecc) {
        case 1:
            cout << "Ingrese ambos sumandos:\n";
            cin >> a, c;
            sumarEnteros(a, c);
            break;
        case 2:
            cout << "ingrese el radio\n";
            cin >> r;
            calcularAreaCirculo(r);
            break;
        case 3:
            cout << "Ingrese la base y el exponente:\n";
            cin >> b, e;
            calcularPotencia(b, e);

            break;
        default:
            cout << "valor mal ingresado\n";
    }



    return 0;
}
