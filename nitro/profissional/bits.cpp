#include <iostream>
#include <vector>
using namespace std;

//BIG O(N)

int main(){
    int teste = 1, numero;

    int cedulas[4] = {50, 10, 5, 1};

    while (cin >> numero && numero != 0){
        

        int ced[4] = {0}; // Inicializa com zeros

        for(int i = 0; i < 4; i++){
            int notas = cedulas[i];
            while (numero >= notas)
            {
                numero -= notas;
                ced[i]++;
            }
        }

        cout << "Teste " << teste++ << endl;
        cout << ced[0] << " " << ced[1] << " " << ced[2] << " " << ced[3] << "\n\n";
    }
    return 0;
}
