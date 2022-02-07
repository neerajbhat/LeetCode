class Solution {
public:
    bool isValid(string s) {
        stack <char> myStack;
        map <char, char> brackets;
        brackets[')'] = '(';
        brackets['}'] = '{';
        brackets[']'] = '[';
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                if(myStack.empty() || brackets[s[i]] != myStack.top())
                    return false;
                else
                    myStack.pop();
            }
            else
                myStack.push(s[i]);
        }
        return myStack.empty();
    }
};