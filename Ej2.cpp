#include <iostream>
using namespace std;

unsigned long long factorialRecursivo(int n){
    if (n == 0) {
        return 1;
    }else{
        return n * factorialRecursivo(n-1);
    }
}
int main() {
    int n;
    unsigned long long factorialIteracion = 1; //nro tiene que ser entero y positivo, el unsig es para que no haya neg

    cout << "Ingrese un nro entero positivo" << endl;
    cin >> n;
    if (n<0){
        cout << "no esta def el factorial para nros neg"<<endl;
    }else{
        for (int i=1; i <=n; ++i){
            factorialIteracion = factorialIteracion * i;
            //factorialiteracion *= i;//simplificacion de la lin ante
        }
        cout << "el factorial de"<<n<<" usando iteracion es"<<factorialIteracion(n);
    }
    cout << "el factorial de"<<n<<" usando recursividad es"<<factorialRecursivo(n);


    return 0;
}
