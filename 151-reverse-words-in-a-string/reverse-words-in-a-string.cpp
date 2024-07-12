#include <sstream>

class Solution {
public:
    string reverseWords(string s) {
        // Using stringstream to tokenize the string by spaces
        stringstream ss(s);
        string word;
        vector<string> words;

        // Extract words from the stringstream
        while (ss >> word) {
            words.push_back(word);
        }

        // Join words in reverse order
        string reversed;
        for (int i = words.size() - 1; i >= 0; --i) {
            reversed += words[i];
            if (i > 0) {
                reversed += " "; // add a space between words except after the last word
            }
        }

        return reversed;
    }
};
