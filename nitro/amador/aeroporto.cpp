// #include <iostream>
// #include <vector>
// #include <utility>
// #include<algorithm>
// #include <unordered_map>
/*Forma que eu encontrei*/
// using namespace std;

// int main() {
//     int aeroportos, voos, partidas, chegadas, teste = 1;
//     while(cin >> aeroportos >> voos && aeroportos && voos){

//         unordered_map<int, int> contadorVoos;

//         for (int i = 0; i < voos; i++) {
//             cin >> partidas >> chegadas;
//             contadorVoos[partidas]++;
//             contadorVoos[chegadas]++;
//         }

//         // for (const auto& aeroportos : contadorVoos) {
//         //     cout << "Aeroporto" << aeroportos.first << " :" << "Voos " << aeroportos.second << endl;
//         // }

//         int maiorQuantidade = 0;
//         for (const auto& aeroportos : contadorVoos) {
//             if (aeroportos.second > maiorQuantidade) {
//                 maiorQuantidade = aeroportos.second;
//             }
//         }

//         vector<int>resultado;
//         for (const auto& aeroportos : contadorVoos) {
//             if (aeroportos.second == maiorQuantidade) {
//                 // cout << aeroportos.first << " ";
//                 resultado.push_back(aeroportos.first);
//             }
//         }

//         sort(resultado.begin(), resultado.end());
//         cout << "Teste " << teste++ << endl;
//         for(const auto& r : resultado){
//             cout << r << " ";
//         }
//         cout << "\n\n";
//     }

//     return 0;
// }

//Forma feita no Nitro
#include<iostream>


using namespace std;

int main() {
    int aeroportos, voos, origem, destino, teste = 1;

    while (cin >> aeroportos >> voos && aeroportos && voos){
        int trafego[aeroportos] = {0};

        for(int i = 0; i < voos; i++){
            cin >> origem >> destino;
            trafego[origem - 1]++;
            trafego[destino - 1]++;
        }

        int maior_trafego = 0;
        for(int i = 0; i < aeroportos; i++){
            if(trafego[i] > trafego[maior_trafego]){
                maior_trafego = i;
            }
        }

        cout << "Teste " << teste++ << endl;
        for(int i = 0; i < aeroportos; i++){
            if(trafego[i] >= trafego[maior_trafego]){
                cout << i + 1 << " ";
            }
        }

        cout << endl << endl;

    }
    

    return 0;
}
