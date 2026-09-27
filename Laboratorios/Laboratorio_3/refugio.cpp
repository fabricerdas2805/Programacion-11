#include <iostream>
#include <string>

using namespace std;

class Mascota {
protected:
    string nombre;
    int edad;

public:
    Mascota(string nombre, int edad) {
        this->nombre = nombre;
        this->edad = edad;
    }

    void imprimir() {
        cout << "Nombre: " << nombre << " | Edad: " << edad;
    }
};

class Perro : public Mascota {
private:
    string raza;

public:
    Perro(string nombre, int edad, string raza)
        : Mascota(nombre, edad) {
        this->raza = raza;
    }

    void imprimir() {
        Mascota::imprimir();
        cout << " | Raza: " << raza << '\n';
    }
};

class Gato : public Mascota {
private:
    bool esInterior;

public:
    Gato(string nombre, int edad, bool esInterior)
        : Mascota(nombre, edad) {
        this->esInterior = esInterior;
    }

    void imprimir() {
        Mascota::imprimir();
        cout << " | Interior: " << (esInterior ? "Si" : "No") << '\n';
    }
};

int main() {
    int n;
    if (!(cin >> n)) return 0;

    for (int i = 0; i < n; ++i) {
        string tipo, nombre;
        int edad;
        cin >> tipo >> nombre >> edad;

        if (tipo == "perro") {
            string raza;
            cin >> raza;
            Perro p(nombre, edad, raza);
            p.imprimir();
        } else if (tipo == "gato") {
            int interiorFlag;
            cin >> interiorFlag;
            Gato g(nombre, edad, interiorFlag == 1);
            g.imprimir();
        }
    }

    return 0;
}