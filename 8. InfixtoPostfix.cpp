#include<bits/stdc++.h>
using namespace std;

int precedence(char ch)
{
	if (ch == '^')
		return 3;
	
	if (ch == '/' or ch == '*')
		return 2;

	if (ch == '+' or ch == '-')
		return 1;

	return -1;
}

int main()
{
	string str;
	cin>>str;
	string ans;
	stack<char>s;
	for(char ch : str)
	{
		if(isalpha(ch))
			ans+=ch;
		else if (ch=='(')
			s.push(ch);
		else if (ch==')')
		{
			while(s.top()!='(')
			{
				ans+=s.top();
				s.pop();
			}
			s.pop();   // (
		}
		else
		{
			while(s.size() and precedence(s.top())>=precedence(ch))
			{
				ans+=s.top();
				s.pop();
			}
			s.push(ch);
		}
	}
	while (!s.empty())
		ans += s.top(), s.pop();

	cout<<ans<<endl;
	return 0;
}