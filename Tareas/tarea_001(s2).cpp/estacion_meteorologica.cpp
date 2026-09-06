#include <iostream>
#include <vector>
#include <string>
using namespace std;

class EstacionMeteorologica {
private:
    string nombreEstacion;
    vector<double> lecturas;

public:
    EstacionMeteorologica() {
        nombreEstacion = "Estacion sin nombre";
    }

    EstacionMeteorologica(string nombreEstacion) {
        this->nombreEstacion = nombreEstacion;
    }

    bool registrarLectura(double temperatura) {
        if (temperatura >= -50 && temperatura <= 60) {
            lecturas.push_back(temperatura);
            return true;
        }

        return false;
    }

    double promedio() {
        if (lecturas.size() == 0) {
            return 0;
        }

        double suma = 0;

        for (int i = 0; i < lecturas.size(); i++) {
            suma += lecturas[i];
        }

        return suma / lecturas.size();
    }

    double maxima() {
        if (lecturas.size() == 0) {
            return 0;
        }

        double mayor = lecturas[0];

        for (int i = 1; i < lecturas.size(); i++) {
            if (lecturas[i] > mayor) {
                mayor = lecturas[i];
            }
        }

        return mayor;
    }

    string getNombreEstacion() {
        return nombreEstacion;
    }

    int getCantidadLecturas() {
        return lecturas.size();
    }
};

int main() {
    string nombreEstacion;
    cin >> nombreEstacion;

    EstacionMeteorologica estacion(nombreEstacion);

    int M;
    cin >> M;

    for (int i = 0; i < M; i++) {
        string comando;
        cin >> comando;

        if (comando == "registrar") {
            double temperatura;
            cin >> temperatura;

            if (estacion.registrarLectura(temperatura)) {
                cout << "Lectura registrada: " << temperatura << '\n';
            }
            else {
                cout << "Error: la temperatura debe estar entre -50 y 60." << '\n';
            }
        }

        else if (comando == "promedio") {
            if (estacion.getCantidadLecturas() == 0) {
                cout << "Sin lecturas registradas." << '\n';
            }
            else {
                cout << "Promedio: " << estacion.promedio() << '\n';
            }
        }

        else if (comando == "maxima") {
            if (estacion.getCantidadLecturas() == 0) {
                cout << "Sin lecturas registradas." << '\n';
            }
            else {
                cout << "Maxima: " << estacion.maxima() << '\n';
            }
        }

        else if (comando == "cantidad") {
            cout << estacion.getNombreEstacion()
                 << " - lecturas registradas: "
                 << estacion.getCantidadLecturas()
                 << '\n';
        }
    }

    return 0;
}