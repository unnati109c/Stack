#include<bits/stdc++.h>
using namespace std;

stack<int>s;

void insertatbottom(int x)
{
	if(s.size()==0)
		s.push(x);
	else
	{
		int temp=s.top();
		s.pop();
		insertatbottom(x);
		s.push(temp);
	}
}

void reverse()
{
	if(s.size()>0)
	{
		int temp=s.top();
		s.pop();
		reverse();
		insertatbottom(temp);
	}
}

int main()
{
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	while(!s.empty())
	{
		int t=s.top();
		cout<<t<<endl;
		s.pop();
	}
	cout<<"------------"<<endl;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	reverse();
	while(!s.empty())
	{
		int t=s.top();
		cout<<t<<endl;
		s.pop();
	}
	return 0;
}