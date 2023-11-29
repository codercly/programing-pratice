#include<iostream>
using namespace std;

int main(){
    int n = 0, p = 0, paginaInteira = 0;
    while (cin >> n >> p && n != 0 && p != 0)
    {
        
        paginaInteira = n / p;

        if(n % p != 0)
          paginaInteira++;

        if(paginaInteira <= 6){

            cout << "Poodle" << endl;

        }else if(paginaInteira >= 20){

            cout << "Poooooooooooooooodle" << endl;

        }else if(paginaInteira > 6 && paginaInteira < 20){

            cout << "P";
            paginaInteira -= 4;

            while(paginaInteira--){
                cout << "o";
            }
            
            cout << "dle" << endl;
        }
        //cout << paginaInteira << endl;
    }
    

    return 0;
}