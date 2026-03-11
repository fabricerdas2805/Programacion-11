#include <iostream>
using namespace std;

int main() {

    int consumo;
    int tarifaSocial;

    cout << "ingrese su consumo en kWh del mes: ";
    cin >> consumo;

    cout << "tiene tarifa social? (imgrese 1 si tiene, 0 si no tiene): ";
    cin >> tarifaSocial;

    int subtotal = 0;
    int descuento = 0;
    int total = 0;

// 1 ranfo
    if (consumo <= 200) {
        subtotal = consumo * 75;
    }

 // 2 rango
    else if (consumo <= 400) {
        subtotal = (200 * 75) + ((consumo - 200) * 110);
    }

// 3 rango
    else {
        subtotal = (200 * 75) + (200 * 110) + ((consumo - 400) * 160);
    }


    if (tarifaSocial == 1 && consumo <= 200) {
        descuento = subtotal * 0.40;
    }

    total = subtotal - descuento;

    cout << "subtotal: " << subtotal << endl;
    cout << "descuento: " << descuento << endl;
    cout << "total: " << total << endl;

    return 0;
}
