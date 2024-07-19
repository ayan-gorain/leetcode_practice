class Solution {
public:
    string add(string num1, string num2) {
        int index1 = num1.size() - 1;
        int index2 = num2.size() - 1;

        string ans;

        int carry = 0;
        int sum = 0;

        // Add digits from both numbers
        while (index1 >= 0 && index2 >= 0) {
            sum = (num1[index1] - '0') + (num2[index2] - '0') + carry;
            carry = sum / 10;
            char c = '0' + sum % 10;
            ans += c;
            index1--;
            index2--;
        }

        // Add remaining digits from num1
        while (index1 >= 0) {
            sum = (num1[index1] - '0') + carry;
            carry = sum / 10;
            char c = '0' + sum % 10;
            ans += c;
            index1--;
        }

        // Add remaining digits from num2
        while (index2 >= 0) {
            sum = (num2[index2] - '0') + carry;
            carry = sum / 10;
            char c = '0' + sum % 10;
            ans += c;
            index2--;
        }

        if (carry) {
            ans += '1';
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
    string addStrings(string num1, string num2) {

        if (num1.size() > num2.size()) {
           return add(num1, num2);
        } else {
           return add(num1, num2);
        }
    }
};