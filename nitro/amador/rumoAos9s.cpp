#include <iostream>
#include<cmath>
using namespace std;

bool isMultipleOf9(int n){
    int soma = 0, resto;

    if(n == 0)
        return true; 
    if(n <= 9)
        return false;
    return isMultipleOf9(n / 10 - (n % 10));
    
}

int main() {
    int n;
    cin >> n;

    // if(isMultipleOf9(n)){
    //     cout << "e multiplo de 9";
    // }else {
    //     cout << "nao e multiplo de 9";
    // }
    
    

    return 0;
}
