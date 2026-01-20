#include<iostream>
#include<algorithm>

using namespace std;

bool CheckIfSubarrayWith0SumExists(int nums[], int n){
    unordered_set<int> sumSet;

    sumSet.insert(0);

    int currentSum = 0;

    for(int i = 0; i < n; i++){
        currentSum += sumSet[i];

        if(sumSet.find(currentSum) != sumSet.end()){
            return true
        } else {
           sumSet.insert(currentSum);
        }
    }
}
   


int main() {

    int nums[] = { 8, 7, 2, 5, 3, 1 };
   
    int n = sizeof(nums)/sizeof(nums[0]);
    CheckIfSubarrayWith0SumExists   (nums, n, target);

    return 0;
}

