class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        int size=0;

        while (size < address.size()) {
            if (address[size] == '.') {
                ans=ans+"[.]";
            } else {
                ans+=address[size];
            }
            size++;
            
        }
        return ans;
    }
};