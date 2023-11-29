// #include <iostream>
// #include<string.h>
// #include<vector>
// using namespace std;
// /*Busca binaria no valor da solução*/
// //Programação dinamica: problemas de otimização ou problemas de contagem
// int memo[10001];

// int f(int n){
//     //programação dinamica TopDow(memoization). pois começa com caso maior e vai para o menor


//     if(n == 1 || n == 2) return 1;

//     if(memo[n] != -1) return memo[n];

//     return memo[n] = f(n - 1) + f(n - 2);
//     // return f(n - 1) + f(n - 2);
// }
// //BottomUp. Computa todos os problemas
// int f2(int n){
//     vector<int> fib(n + 1);
//     fib[1] = 1;
//     fib[2] = 1;

//     for(int i = 3; i <=n; i++){
//         fib[i] = fib[i - 1] + fib[i - 2];
//     }

//     return fib[n];
// }


// int main(){
//     memset(memo, -1, sizeof memo);
//     f(18);

//     for(int i = 1; i <= 18; i++){
//         cout << i << " ";
//     }


//     return 0;
// }

#include <iostream>
#include<string.h>
#include<vector>
using namespace std;
/*Busca binaria no valor da solução*/
//Programação dinamica: problemas de otimização ou problemas de contagem
int memo[10001];

int f(int n){
    //programação dinamica TopDow(memoization). pois começa com caso maior e vai para o menor


    if(n == 1 || n == 2) return 1;

    if(memo[n] != -1) return memo[n];

    return memo[n] = f(n - 1) + f(n - 2);
    // return f(n - 1) + f(n - 2);
}
//BottomUp. Computa todos os problemas
int f2(int n){
    vector<int> fib(n + 1);
    fib[1] = 1;
    fib[2] = 1;

    for(int i = 3; i <=n; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib[n];
}


int main(){
    memset(memo, -1, sizeof memo);
    cout << f(3);

    // for(int i = 1; i <= 18; i++){
    //     cout << i << " ";
    // }


    return 0;
}