// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n;

//     cin >> n;

//     vector<pair<string, pair<int, int>>> association;

//     for(int i = 0; i < n; i++){
//         string digitos[10];
//         for(int j = 0; j < 10; j++){
//             cin >> digitos[j];
//         }

//         string letras, chave, senha;
//         senha = "";

//         for(int i = 0; i < 6; i++){

//             cin >> letras;
//             senha += letras;

//             // if (letras == "A"){
//             //     // association.push_back(make_pair(letras, make_pair(digitos[0], digitos[1])));
//             //     association.push_back(make_pair("A", make_pair(digitos[0], digitos[1])));
//             // }
//             // if (letras == "B"){
//             //     // association.push_back(make_pair(letras, make_pair(digitos[0], digitos[1])));
//             //     association.push_back(make_pair("B", make_pair(digitos[2], digitos[3])));
//             // }
//             // if (letras == "C"){
//             //     // association.push_back(make_pair(letras, make_pair(digitos[0], digitos[1])));
//             //     association.push_back(make_pair("C", make_pair(digitos[4], digitos[5])));
//             // }
//             // if (letras == "D"){
//             //     // association.push_back(make_pair(letras, make_pair(digitos[0], digitos[1])));
//             //     association.push_back(make_pair("D", make_pair(digitos[6], digitos[7])));
//             // }
//             // if (letras == "E"){
//             //     // association.push_back(make_pair(letras, make_pair(digitos[0], digitos[1])));
//             //     association.push_back(make_pair("E", make_pair(digitos[8], digitos[9])));
//             // }

//         }

//         for(const auto&a : association){
//             cout << a.first << a.second.first << a.second.second << endl;
//         }

//     }

//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n;

//     cin >> n;

//     vector<pair<string, pair<int, int>>> association;

//     for(int i = 0; i < n; i++){
//         int digitos[10];
//         for(int j = 0; j < 10; j++){
//             cin >> digitos[j];
//         }

//         string letras, chave;

//         for(int i = 0; i < 6; i++){

//             cin >> letras;
//             if (letras == "A"){
//                 // association.push_back(make_pair(letras, make_pair(digitos[0], digitos[1])));
//                 association.push_back(make_pair("A", make_pair(digitos[0], digitos[1])));
//             }
//             if (letras == "B"){
//                 // association.push_back(make_pair(letras, make_pair(digitos[0], digitos[1])));
//                 association.push_back(make_pair("B", make_pair(digitos[2], digitos[3])));
//             }
//             if (letras == "C"){
//                 // association.push_back(make_pair(letras, make_pair(digitos[0], digitos[1])));
//                 association.push_back(make_pair("C", make_pair(digitos[4], digitos[5])));
//             }
//             if (letras == "D"){
//                 // association.push_back(make_pair(letras, make_pair(digitos[0], digitos[1])));
//                 association.push_back(make_pair("D", make_pair(digitos[6], digitos[7])));
//             }
//             if (letras == "E"){
//                 // association.push_back(make_pair(letras, make_pair(digitos[0], digitos[1])));
//                 association.push_back(make_pair("E", make_pair(digitos[8], digitos[9])));
//             }

//         }

//         for(const auto&a : association){
//             cout << a.first << a.second.first << a.second.second << endl;
//         }

//     }

//     return 0;
// }

#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string digitos;
        for(int j = 0; j < 10; j++){
            
            cin >> digitos;
        }

        char senha;

        for(int i = 0; i < 6; i++){
            cin >> senha;
        }

        map<char, string> enCoded;

        enCoded[senha] = digitos[0], digitos[1];


    }


    return 0;
}







