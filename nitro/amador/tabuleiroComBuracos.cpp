#include<iostream>
using namespace std;

int main(){
    int coordx = 4, coordy = 3;
    int n, movimentos, movimentou = 0;
    bool caiu = false;

    cin >> n;

    while(n--){
        if(!caiu){
            movimentou++;
        }

        cin >> movimentos;

        if(movimentos == 1){
            coordx += 1;    
            coordy += 2;
        }else if(movimentos == 2){
            coordx += 2;
            coordy += 1;
        }else if(movimentos == 3){
            coordx += 2;
            coordy -= 1;
        }else if(movimentos == 4){
            coordx += 1;
            coordy -= 2;
        }else if(movimentos == 5){
            coordx -= 1;
            coordy -= 2;
        }else if(movimentos == 6){
            coordx -= 2;
            coordy -= 1;
        }else if(movimentos == 7){
            coordx -= 2;
            coordy += 1;
        }else{
            coordx -= 1;
            coordy += 2;
        }

        if  
            ((coordx == 1 && coordy == 3)|| 
            (coordx == 2 && coordy == 3) || 
            (coordx == 2 && coordy == 5) || 
            (coordx == 5 && coordy == 4)){
            caiu == true;
        }
    }

    //cout << coordx << " " << coordy << endl;

    cout << movimentou << endl;



    return 0;
}