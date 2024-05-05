#include <iostream>
using namespace std;

int main() {
    int m, n, p, q;
    cout << "Ingresa el numero de filas y columnas de la primera matrix: ";
    cin >> m >> n;
    cout << "Ingresa el numero de filas y columnas de la primera matrix: ";
    cin >> p >> q;

    if(n != p) {
        cout << "Las matrix no son compatibles para la multiplicacion.\n";
        return 0;
    }

    float first[m][n], second[p][q], multiply[m][q];

    cout << "\nIngresa los elementos de la primera matrix:\n";
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cin >> first[i][j];

    cout << "\nIngresa los elementos de la segunda matrix:\n";
    for(int i=0; i<p; i++)
        for(int j=0; j<q; j++)
            cin >> second[i][j];

    for(int i=0; i<m; i++) {
        for(int j=0; j<q; j++) {
            multiply[i][j] = 0;
            for(int k=0; k<n; k++)
                multiply[i][j] += first[i][k]*second[k][j];
        }
    }

    cout << "\n La matrix resultante despues de la multiplicacion es:\n";
    for(int i=0; i<m; i++) {
        for(int j=0; j<q; j++)
            cout << multiply[i][j] << " ";
        cout << "\n";
    }

    return 0;
}