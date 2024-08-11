#include <iostream>
#include <cmath>
using namespace std;

int sumarEnteros(int a,int c);
double calcularAreaCirculo(double rad);
double calcularPotencia(double bas, int exp);


int main() {
    int a, c, r, b, e, elecc;
    do {
    cout << "ingrese el numero segun la operacion que desee realizar:\n";
    cout << "1 - Sumar enteros\n";
    cout << "2 - Calcular area de un circulo\n";
    cout << "3 - Calcular la potencia de un numero\n";
    cout << "4 - Salir del sistema\n";
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
            cout << "Ingrese la base:\n";
            cin >> b;
            cout << "Ingrese el exponente:\n";
            cin >> e;
            cout << b << "elevado a la" << e << "es" << calcularPotencia(b, e) << endl;
            break;

        case 4:
            cout << "usted está saliendo del sistema\n";
            break;
        default:
            cout << "valor mal ingresado, seleccione una opcion entre 1 y 4\n";
            break;
        }
    }while(elecc != 4);

    return 0;
}

int sumarEnteros(int a,int c){
    return a + c;
}

double calcularAreaCirculo(double rad){ //usa double x el tamaño
    const double PI = 3.14159265358979323846;
    return PI * rad * rad;
}
double calcularPotencia(double bas, int exp){
    return pow(bas, exp);
}