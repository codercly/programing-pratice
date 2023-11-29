#include <bits/stdc++.h>
using namespace std;

void removeFirstLastPosFromVector(vector<int> &vetorScore){
    if (!vetorScore.empty()) {
        vetorScore.erase(min_element(vetorScore.begin(), vetorScore.end()));
        vetorScore.erase(max_element(vetorScore.begin(), vetorScore.end()));
    }
}

bool ordenaSaporra(const pair<string, int> &a, const pair<string, int> &b){
    if(a.second == b.second){
        return a.first < b.first;
    }

    return a.second > b.second;
}

int main() {
    int numOfplayers, teste = 1;
    string nameOfPlayer;

    
    while(cin >> numOfplayers && numOfplayers){
        if(teste > 1){
            cout << endl;
        }
        vector<pair<string, int>> players;
        
        for(int i = 1; i <= numOfplayers; i++){
            cin >> nameOfPlayer;
            int score = 0;
            int finalScore = 0;
            vector<int> vetorScore;
            for(int j = 0; j < 12; j++){
                cin >> score;
                vetorScore.push_back(score);  
                // sort(vetorScore.begin(), vetorScore.end());

                // finalScore += score;
            }
            sort(vetorScore.begin(), vetorScore.end());
            removeFirstLastPosFromVector(vetorScore);
            for(int j = 0; j < vetorScore.size(); j++){
                finalScore += vetorScore[j];
            }
            players.push_back(make_pair(nameOfPlayer, finalScore));
        }

        sort(players.begin(), players.end(), ordenaSaporra);
        
        cout << "Teste " << teste++ << endl;
        int rank = 1;
        for(int i = 0; i < players.size(); i++){
            if(players[i].second == players[i - 1].second){
                cout << rank - 1 << " " << players[i].second << " " << players[i].first << endl;
            } else {
                cout << rank << " " << players[i].second << " " << players[i].first << endl;
            }

            rank++;
        }

        

    }



    return 0;
}