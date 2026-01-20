#include <iostream>
#include <vector>
using namespace std;


int findDuplicate(vector<int> const &nums)
{
	int n = nums.size();
	
	vector<bool> visitado(n + 1);
	
	for(int i : nums){
		if(visitado[i]){
			return i;
		}
		
		visitado[i] = true;
	}
	
	return -1;
}

int main()
{
	vector<int> nums = {1, 2, 3, 4, 4};
	
	cout << "The duplicate element is " << findDuplicate(nums);
	
	return 0;

}