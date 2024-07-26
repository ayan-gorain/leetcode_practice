class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers and numbers ending in 0 (except 0 itself) are not palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int original = x;
        int rev = 0;

        // Reverse the second half of the number
        while (x > rev) {
            int digit = x % 10;
            rev = rev * 10 + digit;
            x /= 10;
        }

        // For even-length numbers, x and rev should be equal
        // For odd-length numbers, rev should be x without the middle digit
        return x == rev || x == rev / 10;
    }
};
