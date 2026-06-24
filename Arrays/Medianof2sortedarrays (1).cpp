//problem: find median of two sorted arrays
//Difficulty: hard
//Time complexity: O(M+N)
//Space complexity: O(M+N)

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
       int n1= nums1.size(); //store size of nums1
       int n2= nums2.size(); //store size of nums2
       int n = n1 + n2; 
       int arr[n] ; //create a new array with size n
       int i= 0, j= 0, k= 0;
       //merge and store both arrays in another array(arr) in sorted order
        while(i< n1 && j< n2){
           if(nums1[i]<=nums2[j]){
               arr[k++]=nums1[i++];
           }
           else{
               arr[k++]=nums2[j++];
           }
       }
       // store rest elements of arrays
        while (i < n1) {
           arr[k++] = nums1[i++];
       }
       while (j < n2) {
           arr[k++] = nums2[j++];
           }
         double median =0; // initialised with 0
        //if n is odd
       if(n%2 != 0){
        median = arr[(n)/2];
       }
       //if n is even
       else{
        median = (arr[(n/2)-1] + arr[n/2])/2.0;
       }
       return median;
    }
};