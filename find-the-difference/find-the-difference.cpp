class Solution {
public:
    char findTheDifference(string s, string t) {
        int temp = 0, i;
        for(i = 0; i < s.size(); i++){
            temp ^= s[i];
            temp ^= t[i];
        }
        temp ^= t[i];
        return char(temp);
    }
};