#include <iostream>
#include <string>

using namespace std;

// verificar si el triangulo es valido
bool es_valido(int a, int b, int c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}
//determinar el tipo de triagulo
string tipo_triangulo(int a, int b, int c) {
    if (a == b && b == c) {
        return "equilatero";
    } else if (a == b || a == c || b == c) {
        return "isosceles";
    } else {
        return "escaleno";
    }
}

//Calcular el perimetro
int calcular_perimetro(int a, int b, int c) {
    return a + b + c;
}

//imprimir los resultados
void describir_triangulo(int a, int b, int c) {
    if (!es_valido(a, b, c)) {
        cout << "Triangulo invalido." << endl;
    } else {
        cout << "Tipo: " << tipo_triangulo(a, b, c) << endl;
        cout << "Perimetro: " << calcular_perimetro(a, b, c) << endl;
    }
}


int main() {
    int l1, l2, l3;
    if (cin >> l1 >> l2 >> l3) {
        describir_triangulo(l1, l2, l3);
    }
    
    return 0;
}