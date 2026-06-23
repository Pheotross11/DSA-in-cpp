// Problem: Two Sum
// Difficulty: Easy
// Time Complexity: O(n²)
// Space Complexity: O(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int n = nums.size();  // stored size of array (nums) in n
      for(int i= 0; i<n-1;i++){
          for(int j= 1; j<n;j++){
              //target = nums[i]+ nums[j]
          if((i != j)and(nums[i]== target - nums[j])){
              return {i,j}; // return array
          }
      }
      }
      return {};  //return empty array
    }
};
