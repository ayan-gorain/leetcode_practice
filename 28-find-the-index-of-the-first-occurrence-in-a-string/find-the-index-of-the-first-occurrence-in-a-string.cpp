class Solution {
public:
    void lpsfind(vector<int>& lps, string s) {
        int len = 0;
        int i = 1;
        lps[0] = 0; // lps[0] is always 0
        
        while (i < s.size()) {
            if (s[i] == s[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }
    
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;
        
        int n = haystack.size();
        int m = needle.size();
        
        // Compute LPS array for needle
        vector<int> lps(m, 0);
        lpsfind(lps, needle);
        
        // Perform substring search using KMP algorithm
        int i = 0; // index for haystack
        int j = 0; // index for needle
        
        while (i < n) {
            if (needle[j] == haystack[i]) {
                j++;
                i++;
            }
            
            if (j == m) {
                return i - j; // found the needle at index i - j in haystack
            } else if (i < n && needle[j] != haystack[i]) {
                if (j != 0) {
                    j = lps[j - 1]; // mismatch after j matches
                } else {
                    i++; // mismatch at the beginning of needle
                }
            }
        }
        
        return -1; // needle not found in haystack
    }
};

