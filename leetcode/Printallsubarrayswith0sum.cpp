#include<iostream>
#include<algorithm>

using namespace std;

void Printallsubarrayswith0sum(int nums[], int n){

    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += nums[j];

            if(sum == 0){
                cout << "Subarray with 0 sum found from index " << i << " to " << j << endl;
            }
        }

        cout << "No Subarray with 0 sum found starting from index " << i << endl;
    }
}
   


int main() {

    int nums[] = { 8, 7, 2, 5, 3, 1 };
   
    int n = sizeof(nums)/sizeof(nums[0]);
    Printallsubarrayswith0sum(nums, n);

    return 0;
}

