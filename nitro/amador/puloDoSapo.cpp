#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numPedras, sapos, posi, pulos, cont = 0;
    cin >> numPedras >> sapos;
    int pedras[numPedras] = {0};

    for(int i = 0; i < sapos; i++){
        
        cin >> posi >> pulos;
        cont = posi -1;
        while (cont < numPedras)
        {
            pedras[cont] = 1;
            cont += pulos;
        }
        cont = posi - 1;
        while (cont >= 0)
        {
            pedras[cont] = 1;
            cont -= pulos;
        }
    }

    for(int i = 0; i < numPedras; i++){
        cout << pedras[i] << endl;
    }
    
  return 0;
}