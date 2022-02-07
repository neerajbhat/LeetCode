class Solution {
public:
    string reverseOnlyLetters(string s) {
        int start = 0;
        int end = s.length() - 1;
        for(int i = start; start < end; i++){
            if(isalpha(s[start]) && isalpha(s[end])){
                char x = s[start];
                s[start] = s[end];
                s[end] = x;
                start++;
                end--;
            }
            else if(isalpha(s[end])){
                start++;
            }
            else
                end--;
        }
        return s;
    }
};