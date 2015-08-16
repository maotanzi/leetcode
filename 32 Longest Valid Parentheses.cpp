class Solution {
public:
    int longestValidParentheses(string s) {
        if(s.empty())
            return 0;
        stack<int> req;
        int i, res=0, j;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='(')
                req.push(i);
            else
            {
                if(!req.empty()&&s[req.top()]=='(')
                {
                    req.pop();
                    if(req.empty())
                        res=i+1;
                    else
                        res=max(res, i-req.top());
                }
                else
                    req.push(i);
            }
        }
        return res;
    } 
};
