class Solution {
public:
    string removeDuplicates(string s) {
        std::stack<char> st;
        for(char ch : s)
        {
            if(!st.empty() && st.top() == ch) st.pop();
            else st.push(ch);
        }
        std::string res = "";

        while(!st.empty())
        {
            res += st.top();
            st.pop();
        }

        std::reverse(res.begin(), res.end());
        return res;
    }
};
