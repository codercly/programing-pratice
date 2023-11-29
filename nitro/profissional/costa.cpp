#include<iostream>
using namespace std;

int main(){
    int m, n, increment = 0;
    cin >> m >> n;
    char matriz[m][n];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> matriz[i][j];
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            //cout << matriz[i][j];
           /* if(j >= 0 || j <= 4){
                if((matriz[i][j]) == '#' && matriz[i][j - 1] == '.'){
                    increment++;
                    matriz[i][j] = '-';
                }

                if((matriz[i][j]) == '#' && matriz[i][j + 1] == '.'){
                    increment++;
                    matriz[i][j] = '-';
                }

                if((matriz[i][j]) == '#' && matriz[i - 1][j] == '.'){
                    increment++;
                    matriz[i][j] = '-';
                }

                if((matriz[i][j]) == '#' && matriz[ i + 1 ][j] == '.'){
                    increment++;
                    matriz[i][j] = '-';
                }

                if((matriz[i][j]) == '#' && i == 0 || matriz[i][j] == '#' && i == m - 1){
                    increment++;
                    matriz[i][j] = '-';
                }

                
            }*/

            if(matriz[i][j] == '#'){
                if(i == 0 || i == m - 1 || j == 0 || j == n - 1 || matriz[i][j - 1] == '.' || matriz[i][j + 1] == '.'
                || matriz[i - 1][j] == '.' || matriz[i + 1][j] == '.'){
                    increment++;
                }
            }
        }
    }

    cout << increment << endl;
    

    return 0;
}