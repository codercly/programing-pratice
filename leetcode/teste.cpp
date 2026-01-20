class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = sizeof(nums)/sizeof(nums[0]);
        sort(nums.begin(), nums.end());

        int low = 0;
        int high = n - 1;

        while(low < high){
            if(nums[low] + nums[high] == target){
                return {low, high};
            }

            (nums[low] + nums[high] < target) ? low++ : high--;
        }

        return {};
    }
};