//problem: Palindrome number 
//difficulty: Easy
//Time complexity: O(log N)
//Space complexity: O(1)

class Solution {
public:
    bool isPalindrome(int n) {
       if(n < 0 ){
           //return false for negative numbers
            return false;
        }
        long long x = n; //store in temporary variable 
        int a;
        long long y;
        while(x != 0){
             a = x%10 ;//extract last digit 
            x = x/10 ;//remove last digit
            y *= 10;
            y += a;//append in another variable 
        }
        if(n == y || n == 0){
            //A palindrome 
            return true;
        }
        else{
            //not a palindrome 
            return false;
        }
        
    }
};