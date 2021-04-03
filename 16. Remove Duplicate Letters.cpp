// https://leetcode.com/problems/remove-duplicate-letters/
// https://leetcode.com/problems/smallest-subsequence-of-distinct-characters/

/* Input: s = "bcabc"
   Output: "abc"
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long int

string removeDuplicateLetters(string s) {

	map<char,int>last_occur;
	map<char,bool>visited;
	stack<char>st;

	for(int i=0;i<s.length();i++)
	{
		last_occur[s[i]]=i; // char-lastindex pair
	}

	for(int i=0;i<s.length();i++)
	{
		char ch=s[i];
		if(visited[ch]==false) //element not found
		{
			while(!st.empty() and ch<st.top() and last_occur[st.top()]>i)
			{
				visited[st.top()]=false;
				st.pop();
			}

			visited[ch]=true;
			st.push(ch);
		}
		
	}

	string ans="";
	while(!st.empty())
	{
		ans+=st.top();
		st.pop();
	}

	reverse(ans.begin(), ans.end());
	return ans;

}

int main()
{
	string str="dbacdcbc";
	cout<<removeDuplicateLetters(str)<<endl;

	return 0;
}