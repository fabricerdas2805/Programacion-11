#include <iostream>
using namespace std;

int main() {

    int edad;
    int dia;
    int precioBase;
    int recargo = 0;
    int total;
    string categoria;

    cin >> edad;
    cin >> dia;

//edad
    if (edad < 12) {
        categoria = "nino";
        precioBase = 2500;
    }
    else if (edad <= 64) {
        categoria = "adulto";
        precioBase = 4000;
    }
    else {
        categoria = "adulto mayor";
        precioBase = 2000;
    }

// recargo
    if (dia == 2) {
        recargo = precioBase * 0.20;
    }

    total = precioBase + recargo;

    cout << "categoria: " << categoria << endl;
    cout << "precio inicial: " << precioBase << endl;
    cout << "recargo: " << recargo << endl;
    cout << "Total: " << total << endl;

    return 0;
}