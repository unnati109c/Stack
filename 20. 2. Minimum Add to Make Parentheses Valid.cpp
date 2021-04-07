// https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/

#include<bits/stdc++.h>
using namespace std;

int minAddToMakeValid(string S) {
    int count = 0;
    stack<char> st;
    for( char c : S)
    {
        if( c=='(' )
        {
            st.push(c);
        }
        else if( c==')' && !st.empty() && st.top()=='(' )
        {
            st.pop();
        }
        else
        {
            st.push(c);    
        }
    }
    
    while(!st.empty())
    {
        count++;
        st.pop();
    }
    
    return count; 
} 

int main()
{
	string str="()))((";
	cout<<minAddToMakeValid(str);

	return 0;
}
