#include <iostream>
using namespace std;

int main() {

    const double g = 9.81;

    double t, y, h;

   cout <<"ingrese el tiempoo o sea (t):" ;
   cin>> t;

   cout<< "ingrese la altura de la ventana o sea (y):" ;
   cin>> y;

    if (t <= 0) {
        cout << "error el tiempo ocupa ser positivo." << '\n';
        return 0;
    }

    if (y <= 0) {
        cout << "error, la altura de la ventana debe ser positiva." << '\n';
        return 0;
    }

    h = ((y - 0.5 * g * t * t) * (y - 0.5 * g * t * t)) / (2 * g * t * t);

    if (h <= 0) {
        cout << "error los valores ingresados implican h <= 0; el objeto no pudo haber sido soltado por encima del borde superior de la ventana." << '\n';
        return 0;
    }

    cout << "h = " << h << " m" << '\n';

    return 0;
}