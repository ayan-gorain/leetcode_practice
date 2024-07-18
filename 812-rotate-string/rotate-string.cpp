class Solution {
public:
    void clockwise(string &s) {
        char c = s[s.size() - 1];
        int index = s.size() - 2;
        while (index >= 0) {
            s[index + 1] = s[index];
            index--;
        }
        s[0] = c;
    }

    void anticlockwise(string &s) {
        char c = s[0];
        int index = 1;
        while (index < s.size()) {
            s[index - 1] = s[index];
            index++;
        }
        s[s.size() - 1] = c;
    }

    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) {
            return false;
        }

        string rotated = s;
        for (int i = 0; i < s.size(); i++) {
            clockwise(rotated);
            if (rotated == goal) {
                return true;
            }
        }

        rotated = s;
        for (int i = 0; i < s.size(); i++) {
            anticlockwise(rotated);
            if (rotated == goal) {
                return true;
            }
        }

        return false;
    }
};
