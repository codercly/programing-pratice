//  A expressão completa (j > 0 && matriz[i][j - 1] == '*') || (j < n - 1 && matriz[i][j + 1] == '*') 
//  || (i > 0 && matriz[i - 1][j] == '*') || (i < m - 1 && matriz[i + 1][j] == '*') 
//  verifica se pelo menos uma dessas condições é verdadeira, o que significa que a célula de terra atual 
//  está em contato direto com a água em uma das quatro direções. Se essa condição for atendida, a célula de 
//  terra atual (matriz[i][j]) é transformada em uma praia ('p').

#include <iostream>
using namespace std;

int main()
{
    int m = 10, n = 10;
 
    char matriz[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }

 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] == 't') {
                if ((j > 0 && matriz[i][j - 1] == '*') ||
                    (j < n - 1 && matriz[i][j + 1] == '*') ||
                    (i > 0 && matriz[i - 1][j] == '*') ||
                    (i < m - 1 && matriz[i + 1][j] == '*')) {
                    matriz[i][j] = 'p';
                }
            }
        }
    }


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
