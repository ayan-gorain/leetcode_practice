class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> ana1(26,0);
        vector<int> ana2(26,0);
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            int index=s[i]-'a';
            ana1[index]++;
        }
        for(int j=0;j<t.length();j++){
            int indexx=t[j]-'a';
            ana2[indexx]++;
        }

        if(ana1!=ana2){
            return false;
        }

        return true;
        
    }
};