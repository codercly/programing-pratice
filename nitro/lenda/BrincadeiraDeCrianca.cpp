#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int participantes, rodadas, teste = 1;

    while (cin >> participantes >> rodadas && rodadas != 0 && participantes != 0)
    {
        int numeroDosParticipantes[participantes], comportamento, ordem, quantidadeParticipantes;

        for (int i = 0; i < participantes; i++)
        {
            cin >> numeroDosParticipantes[i];
        }

        while (rodadas--){

            cin >> quantidadeParticipantes >> ordem;
            //j repesenta o indice do vetor fila
            for (int i = 0, j = 0; i < quantidadeParticipantes; i++, j++){
                cin >> comportamento;

                if (!numeroDosParticipantes){
                    bool achou = false;
                    while (!achou){
                        j++;
                        if (numeroDosParticipantes[j]){
                            achou = true;
                        }
                    }
                }

                if(comportamento != ordem){
                    numeroDosParticipantes[j] = 0;
                }

            }
        } 

        cout << "Test " << teste++ << endl;
        for(int i = 0; i < participantes; i++){
            if(numeroDosParticipantes[i]){
                cout << numeroDosParticipantes[i] << endl;
                break;
            }
        }

    }

    return 0;
}