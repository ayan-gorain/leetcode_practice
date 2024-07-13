class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        string result;
        int sum = 0;
        int i = a.length() - 1;
        int j = b.length() - 1;
        while (i >= 0 || j >= 0) {
            sum = carry;
            if (i >= 0) {
                sum += (a[i] - '0');
                i--;
            }
            if (j >= 0) {
                sum += (b[j] - '0');
                j--;
            }
            result += to_string(sum % 2);
            carry = sum / 2;
        }
        if (carry == 1) {
            result += "1";
        }
        reverse(result.begin(), result.end());
        return result;
    }
};