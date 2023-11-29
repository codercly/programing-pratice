#include<iostream>
using namespace std;

int main(){
    int n, m, i, j, direcao = 1, comidaCarregada = 0, comidaMaxima = 0;
    bool temO;
    cin >> n;
    

    char tabuleiro[n][n];

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
             cin >> tabuleiro[i][j];
        }
    }

    for(i = 0; i < n; i++){
        for(j = (direcao == 1) ? 0 : n - 1; (direcao == 1) ? j < n : j >= 0; j += direcao){
            if(tabuleiro[i][j] == 'o'){
                comidaCarregada++;
            }else if(tabuleiro[i][j] == 'A'){
                comidaCarregada = 0;
            }

            if(comidaCarregada > comidaMaxima){
                comidaMaxima = comidaCarregada;
            }

            // cout << tabuleiro[i][j] << "\t";
        }

        direcao *= -1;

        // cout << endl;
    }

    cout << comidaMaxima;
  

    return 0;
}