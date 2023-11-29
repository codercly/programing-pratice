#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int matriz[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> matriz[i][j];
        }
    }

    int num, x, y, cont = 0;
    cin >> num;
    for(int i = 0; i < num; i++){
        cin >> x >> y;
        cont += matriz[x][y];
    }

    cout << cont;


    return 0;
}