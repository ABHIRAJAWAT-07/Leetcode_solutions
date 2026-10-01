class Solution {
public:
    bool isValid(string s) {
        string st;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st += c;
            } 
            else {
                if (st.empty()) return false;

                char top = st.back();

                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '['))
                    return false;

                st.pop_back();
            }
        }

        return st.empty();
    }
};