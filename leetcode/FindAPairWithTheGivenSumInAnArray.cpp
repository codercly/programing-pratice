#include<iostream>
#include<algorithm>

using namespace std;

void findPair(int nums[], int n, int target){
    sort(nums, nums + n);

    int low = 0;
    int high = n -1;

   while(low < high){
    if(nums[low] + nums[high] == target){
        cout << "pair found: " << nums[low] << ", " << nums[high] << endl;
        return;
    } 

    (nums[low] + nums[high] < target) ? low++ : high--;
    
   }

   cout << "No pair found" << endl;
}

int main() {

    int nums[] = { 8, 7, 2, 5, 3, 1 };
    int target = 10;

    int n = sizeof(nums)/sizeof(nums[0]);
    findPair(nums, n, target);

    return 0;
}

