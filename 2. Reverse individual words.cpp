/*Input : Hello World
Output : olleH dlroW
*/

#include<bits/stdc++.h>
using namespace std;

void reverse(string str)
{
	stack<char>s;

	for(auto i:str)
	{
		if(i!=' ')
		{
			s.push(i);
		}
		else
		{
			while(!s.empty())
			{
				cout<<s.top();
				s.pop();
			}
			cout<<" ";
		}
	}
	while(s.size()>0)
	{
		cout<<s.top();
		s.pop();
	}
}

int main()
{
	string str="Hello Stalker";
	reverse(str);
	return 0;
}