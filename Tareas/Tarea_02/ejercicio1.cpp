#include <iostream>
#include <string>
#include <cctype> r

using namespace std;

//verificar si es palíndromo
bool es_palindromo(string palabra) {
    string aux = palabra;
    
    //convertir toda la palabra a minusculas
    for (int i = 0; i < aux.length(); i++) {
        aux[i] = tolower(aux[i]);
    }
    
    //comparar letras 
    int inicio = 0;
    int fin = aux.length() - 1;
    
    while (inicio < fin) {
        if (aux[inicio] != aux[fin]) {
            return false; // s una letra no coincide entonces no es palindromom
        }
        inicio++;
        fin--;
    }
    
    return true; // Si termino el ciclo si es palindromo
}

int main() {
    string palabra;
    
    //leer la palabra
    cin >> palabra;
    
    // llamar  la funcion e imprimir segun el tipo
    if (es_palindromo(palabra)) {
        cout << "\"" << palabra << "\" es un palindromo." << endl;
    } else {
        cout << "\"" << palabra << "\" no es un palindromo." << endl;
    }
    
    return 0;
}