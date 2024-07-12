class Solution {
public:
    bool valid(char ch) { 
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
            (ch >= '0' && ch <= '9')) {
            return true;
        }
        return false;
    }

    char lowercase(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            return ch;
        } else {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

    bool palindrom(string a) {
        int s = 0;
        int e = a.length() - 1;
        while (s <= e) {
            if (lowercase(a[s]) != lowercase(a[e])) {
                return false;

            } else {
                s++;
                e--;
            }
        }
        return true;
    }

    bool isPalindrome(string s) {
        string temp = "";
        for (int j = 0; j < s.length(); j++) {
            if (valid(s[j])) {
                temp.push_back(s[j]);
               
            }
        }
        
        return palindrom(temp);
    }
};