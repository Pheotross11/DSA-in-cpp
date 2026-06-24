//problem: find First and Last Position of element in sorted Array
//Difficulty: medium 
//Time complexity:O(log N)
//Space complexity:O(1)

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //store size in variable 
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int last= -1 ;
        int first = -1;
        int mid = 0;
       //1st loop for first occurence 
        while( left <= right){
            mid = (left+(right-left))/2;
            if(nums[mid] == target){
                first = mid;
                right = mid -1;
                }
            
            else if(nums[mid] < target){
              left = mid+1 ;  
            }
            else{
                right = mid-1;
            }
        }
        //reset variables for another loop
        left = 0 ;
        right = n-1 ;
      //second loop for occurrence in ending
        while( left <= right){
            mid = (left+(right-left)/2;
            if(nums[mid] == target){
                last = mid;
                left = mid +1;
                }
            
            else if(nums[mid] < target){
              left = mid+1 ;  
            }
            else{
                right = mid-1;
            }
        }
        
        return {first,last} ;
    }
};