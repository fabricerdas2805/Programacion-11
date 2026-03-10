#include <iostream>
using namespace std;

int main() {

    const double A = 331.0;
    const double B = 0.6;
    const double CERO_ABSOLUTO = -273.15;

    double v, T;
    double vs, M;

    cout <<"ingrese la velocidad o sea (v):" ;
   cin>> v;

   cout<< "ingrese la temperatura o sea (T):" ;
   cin>> T;

    if (v < 0) {
        cout << "Error: la velocidad no puede ser negativa." << '\n';
        return 0;
    }

    if (T <= CERO_ABSOLUTO) {
        cout << "Error: la temperatura no puede ser menor o igual al cero absoluto (-273.15 C)." << '\n';
        return 0;
    }

    vs = A + B * T;
    M = v / vs;

    cout << "vs = " << vs << " m/s" << '\n';
    cout << "M = " << M << '\n';

    if (M < 0.8) {
        cout << "Regimen: Subsonico" << '\n';
    }
    else if (M >= 0.8 && M < 1.2) {
        cout << "Regimen: Transonico" << '\n';
    }
    else if (M >= 1.2 && M < 5.0) {
        cout << "Regimen: Supersonico" << '\n';
    }
    else {
        cout << "Regimen: Hipersonico" << '\n';
    }

    return 0;
}