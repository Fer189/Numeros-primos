#include <iostream>
using namespace std;

int main() {
    int numero;
    int contador;
    int numerosPrimos = 1;
    cout << "Cuantos numeros desea calcular?" << endl;
    cin >> numero;
    cout << "Calculando " << numero << " numeros primos" << endl;
    for(int i = 2; numerosPrimos <= numero; i++) {
        contador = 0;
        for(int j = 1; j <= i; j++) {
            if(i % j == 0) {
                contador++;
            }
        }
        if(contador == 2) {
            cout << numerosPrimos << ".- " << i << endl;
            numerosPrimos++;
        }
    }
    return 0;
}