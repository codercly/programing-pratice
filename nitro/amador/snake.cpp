#include <iostream>
#include<cmath>
using namespace std;

//obs: cont não pode ficar com valor negativo
int main() {
    int m, n, i, j, dir = 1, cont= 0;
    cin >> n >> m;
    int matriz[n][m];

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            cin >> matriz[i][j];
        }
    }

    for(i = 0; i < n; i++){
        for(j = (dir == 1)  ? 0 : m - 1; (dir == 1) ? j < m : j >= 0; j += dir){
            // if(matriz[i][j] > 0){
            //     cont += matriz[i][j];
            // }
            // if(matriz[i][j] < 0){
            //     cont = max(0, cont + matriz[i][j]);
            // }
            if(cont + matriz[i][j] < 0){
                cont = 0;
            } else {
                cont += matriz[i][j];
            }
        }

        dir *= -1;

      
    }

    cout << cont;


  return 0;
}