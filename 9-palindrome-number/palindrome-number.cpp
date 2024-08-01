class Solution {
public:
    bool isPalindrome(int x) {
        int rev=0;
        int org=x;

        while(x>0){
            int dig=x%10;
            x=x/10;
             if (rev > (INT_MAX - dig) / 10) {
                return false;
            }
            rev=(rev*10)+dig;
        }
        if(org==rev){
            return true;
        }
        return false;
        
    }
};