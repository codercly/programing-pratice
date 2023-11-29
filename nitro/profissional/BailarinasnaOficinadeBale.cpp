#include <iostream>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;

int main() {
    int n, num; 
    cin >> n;
    unordered_map<int, int> vetor(n);
    for(int i = 0; i < n; i++){
        cin >> num;
        vetor.insert(n, num);
    }

    


    return 0;
}