/*
You’re given a string containing letters of three types, R, B, and ..

R represents your current position, B represents a blocked position, and . represents
an empty position. In one step, you can move to any adjacent position to your current
position, as long as it is empty. Can you reach either the leftmost position or the rightmost position?

Return true if you can reach either the leftmost or the rightmost position, or false if you cannot.

Input
s = "......B....R.............."

Output
true
*/

#include <string>

class Solution {
    public:
    bool solve(std::string s) {
        int currIndex = 0;
        bool leftBlocked = false;
        bool rightBlocked = false;
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'R') {
                currIndex = i;
                break;
            }
        }
        
        int leftBlock = currIndex;
        int rightBlock = currIndex;
        
        while (leftBlock >= 0) {
            if (s[leftBlock] == 'B') {
                leftBlocked = true;
                break;
            } else {
                leftBlock--;
            }
        }
        
        while (rightBlock < s.length()) {
            if (s[rightBlock] == 'B') {
                rightBlocked = true;
                break;
            } else {
                rightBlock++;
            }
        }
        
        return !(leftBlocked && rightBlocked);
        
    }
};
