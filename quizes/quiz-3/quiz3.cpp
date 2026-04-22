#include <iostream>
using namespace std;

const int MAX = 100;

void inicializar(int vagones[], int n);
void agregar(int vagones[], int p, int v);
int consultar(int vagones[], int p);

int main() {
    int n;
    cin >> n;

    int vagones[MAX];
    inicializar(vagones, n);

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        char op;
        cin >> op;

        if (op == 'A') {
            int p, v;
            cin >> p >> v;
            agregar(vagones, p, v);
        } else if (op == 'C') {
            int p;
            cin >> p;
            cout << consultar(vagones, p) << '\n';
        }
    }

    return 0;
}

void inicializar(int vagones[], int n) {
    for (int i = 0; i < n; i++) {
        vagones[i] = 0;
    }
}

void agregar(int vagones[], int p, int v) {
    for (int i = 0; i < p; i++) {
        vagones[i] += v;
    }
}

int consultar(int vagones[], int p) {
    return vagones[p - 1];
}