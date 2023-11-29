
#include <bits/stdc++.h>
using namespace std;

int partition(vector<pair<int, int>>& arr, int low, int high){
    int pivot = arr[high].second;

    int i = (low - 1);

    for(int j = low; j <= high; j++){
        if(arr[j].second < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return(i + 1);
}

void quickSort(vector<pair<int, int>>& arr, int low, int high){
    if(low < high){
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


int main(){
    int n, m, Tvoltas;
    cin >> n >> m;
    vector<pair<int, int>> carTimes;
    //BIG O(n * m)
    for(int car = 1; car <= n; car++){
        int tempo_total = 0;
        for(int volta = 1; volta <= m; volta++){
            cin >> Tvoltas;
            tempo_total += Tvoltas;
        }

        carTimes.push_back(make_pair(car, tempo_total));
    }

    int t = sizeof(carTimes) / sizeof(carTimes[0]);
    //BIG O(n log n)
    quickSort(carTimes, 0, n - 1);

    //Complexidade Total: BIG O(nm + n log n)

    for(int j = 0; j < 3; j++){
        cout << carTimes[j].first << endl;
    }
    return 0;
}
