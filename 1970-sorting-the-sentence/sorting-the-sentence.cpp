class Solution {
public:
    string sortSentence(string s) {
        vector<string> ans(10); // Create a vector with a sufficient size to hold all words

        string temp;
        int index = 0;

        while (index < s.size()) {
            if (s[index] == ' ') {
                // Extract position from the last character
                int pos = temp[temp.size() - 1] - '0';
                temp.pop_back(); // Remove the position number
                ans[pos] = temp; // Store the word at the correct position
                temp.clear(); // Clear temp for the next word
            } else {
                temp += s[index]; // Accumulate characters to form a word
            }
            index++;
        }
        
        // Handle the last word since it won't be followed by a space
        int pos = temp[temp.size() - 1] - '0';
        temp.pop_back();
        ans[pos] = temp;
        
        string result;
        for (int i = 1; i < 10; i++) {
            if (!ans[i].empty()) {
                result += ans[i] + ' ';
            }
        }
        
        if (!result.empty()) {
            result.pop_back(); // Remove the trailing space
        }
        
        return result;
    }
};
