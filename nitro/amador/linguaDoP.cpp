#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string lp;
    int n;
    string decoded = "";

    getline(cin, lp);
    for(int i = 1; i < lp.length(); i++){
        if(lp[i] != 'p' && lp[i - 1] == 'p'){
            decoded += lp[i];
        } else if(lp[i] == 'p' && lp[i - 1] == 'p' && lp[i + 1] != 'p' || lp[i] == ' '){
            decoded += lp[i];
        }
    }

    cout << decoded << endl;
    
    //sort(lp.begin(), lp.end());
    //cout << lp;
    return 0;
}