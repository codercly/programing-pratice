#include<iostream>
using namespace std;

int main(){
    int ano, halley = 1986;

    cin >> ano;

    while (ano--)
    {
        halley += 76;
    }
    
    cout << halley << endl;
    

    return 0;
}