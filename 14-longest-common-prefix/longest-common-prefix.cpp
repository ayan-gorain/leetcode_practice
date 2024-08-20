class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());

        string n=strs[0];
        int i=0;
        string m=strs[strs.size()-1];
        int j=0;
        string ans="";
        while(i<n.size() && j<m.size()){
            if(n[i]==m[j]){

                ans+=n[i];
                i++;
                j++;
            }
            else{
                break;
            }
        }
       return ans;
    }
};