class Solution {
public:
    string sortVowels(string s) {
        vector<int> lowercase(26, 0);
        vector<int> uppercase(26, 0);
        
        // Mark the vowels and count them
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                lowercase[s[i] - 'a']++;
                s[i] = '#';
            } else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                uppercase[s[i] - 'A']++;
                s[i] = '#';
            }
        }
        
        string ans;
        
        // Add uppercase vowels in alphabetical order
        for (int i = 0; i < 26; i++) {
            char c = 'A' + i;
            while (uppercase[i]) {
                ans += c;
                uppercase[i]--;
            }
        }
        
        // Add lowercase vowels in alphabetical order
        for (int i = 0; i < 26; i++) {
            char c = 'a' + i;
            while (lowercase[i]) {
                ans += c;
                lowercase[i]--;
            }
        }
        
        int first = 0, second = 0;
        
        // Replace marked positions with sorted vowels
        while (second < ans.size()) {
            if (s[first] == '#') {
                s[first] = ans[second];
                second++;
            }
            first++;
        }
        
        return s;
    }
};