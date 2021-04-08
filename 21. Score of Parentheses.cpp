//  https://leetcode.com/problems/score-of-parentheses/

#include<bits/stdc++.h>
using namespace std;

int scoreOfParentheses(string S) {
    
    stack<int> st;
    for(auto c:S)
    {
        if(c=='(')
        {
            st.push(0);
        }
        else
        {
            int val=0;
            while(st.top()!=0)
            {
                val+=st.top();
                st.pop();
            }

            val = max(val*2,1);
            st.pop();
            st.push(val);
        }
    }
    int count=0;
    while(!st.empty())
    {
        count+=st.top();
         st.pop();
    }
    return count;
}


int main()
{
	string str="(()(()))";
	cout<<scoreOfParentheses(str);

	return 0;
}
