#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, x, y, x1, y1, soma = 0, s = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x >> y >> x1 >> y1;
        s = (x1 - x) * (x1 - x) + (y1 - y) * (y1 - y);
        soma += s;
    }

    cout << soma << endl;

    return 0;
}