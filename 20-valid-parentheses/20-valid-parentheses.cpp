class Solution {
public:
    bool isValid(string s) {
       stack<char> pstack;
        
        for (auto i: s) {
            if (not pstack.empty() and
                ((i == ')' and pstack.top() == '(') or
                 (i == '}' and pstack.top() == '{') or
                 (i == ']' and pstack.top() == '['))) {
                pstack.pop(); 
			} else {
                pstack.push(i);
			}
        }
        
        return pstack.empty();
    }
};