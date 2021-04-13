//  https://leetcode.com/problems/remove-outermost-parentheses/

#include<bits/stdc++.h>
using namespace std;

 string removeOuterParentheses(string a) {
    string str = "";
    stack<char> s;

    int i = 0;

    while(i<a.length())
    {
        if(s.empty())
        {
            s.push(a[i]);
        }
        else
        {                
            if(s.top()=='(' && a[i]==')')
            {
                s.pop();
            }
            else s.push(a[i]);
            if(!s.empty()) str += a[i];
        }
        
        i++;
    }
    
    return str;
    
}


int main()
{
	string str="(()())(())(()(()))";
	cout<<removeOuterParentheses(str);

	return 0;
}
