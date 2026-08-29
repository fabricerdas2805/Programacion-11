#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>

using namespace std;

const int N = 5;

int main() {

    vector<pair<int, string>> pedidos;
    queue<string> fila;
    stack<string> historial;

    for (int i = 0; i < N; i++) {
        string nombre;
        int monto;

        cin >> nombre >> monto;

        pedidos.push_back({monto, nombre});
        fila.push(nombre);
    }

    sort(pedidos.begin(), pedidos.end());

    cout << "Pedidos ordenados por monto:\n";

    for (const auto& pedido : pedidos) {
        cout << pedido.second << ": "
             << pedido.first << '\n';
    }

    auto mayor = max_element(pedidos.begin(), pedidos.end());

    cout << "Pedido mayor: "
         << mayor->second
         << " (" << mayor->first << ")\n";

    string buscar;
    cin >> buscar;

    bool encontrado = false;

    for (const auto& pedido : pedidos) {
        if (pedido.second == buscar) {
            cout << buscar << " pidio por "
                 << pedido.first << " colones\n";

            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << buscar << " no hizo pedido\n";
    }

    while (!fila.empty()) {
        string nombre = fila.front();
        fila.pop();

        cout << "Atendido: " << nombre << '\n';

        historial.push(nombre);
    }

    string comando;
    cin >> comando;

    if (comando == "deshacer") {
        if (!historial.empty()) {
            string nombre = historial.top();
            historial.pop();

            fila.push(nombre);

            cout << nombre << " vuelve a la fila\n";
        }
    }

    return 0;
}