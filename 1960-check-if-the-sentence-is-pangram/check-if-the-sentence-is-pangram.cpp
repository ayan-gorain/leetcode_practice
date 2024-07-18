class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n=sentence.length();
        const char* charArray = sentence.c_str();
        unordered_map<char,int> mpp;

        for(int i=0;i<n;i++){
            mpp[charArray[i]]++;
        }

        for(char ch = 'a'; ch <= 'z'; ch++){
            if(mpp[ch]==0){
                return false;
            }
        }
        return true;
    }
};