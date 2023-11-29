#include <iostream>
using namespace std;

int main()
{
    int x, y, logotipo = 1;

    while (cin >> x >> y && x && y)
    {

        int logo[x][y];

        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cin >> logo[i][j];
            }
        }

        int quantidaDeMatrix, m, n;

        cin >> quantidaDeMatrix >> m >> n;

        int frames[m][n];

        int cont = 0;

        while (quantidaDeMatrix--)
        {

            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cin >> frames[i][j];
                }
            }

            int linhasFrames = m;
            int colunasFrames = n;
            int linhasLogo = x;
            int colunasLogo = y;

            for (int i = 0; i <= linhasFrames - linhasLogo; i++)
            {
                for (int j = 0; j <= colunasFrames - colunasLogo; j++)
                {
                    int correspondecias = 0;
                    for (int k = 0; k < linhasLogo; k++)
                    {
                        for (int l = 0; l < colunasLogo; l++)
                        {
                            if (frames[i + k][j + l] == logo[k][l])
                            {
                                correspondecias++;
                            }
                        }
                    }

                    if (correspondecias == linhasLogo * colunasLogo)
                    {
                        cont++;
                    }
                }
            }
        }

        cout << "Logotipo " << logotipo++ << endl;
        cout << cont << "\n\n";
    }

    return 0;
}