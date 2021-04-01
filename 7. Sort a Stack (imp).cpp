/*Given a stack, the task is to sort it such that the top of the stack has the greatest element.*/

#include<bits/stdc++.h>
using namespace std;

stack<int>s;

void insertinsortedstack(int x)
{
	if(s.size()==0 || s.top()<x)  // if u want to sort the stack such that topmost element is least one, then s.top()>x
		s.push(x);
	else
	{
		int temp=s.top();
		s.pop();
		insertinsortedstack(x);
		s.push(temp);
	}
}

void sort()
{
	if(s.size()>0)
	{
		int temp=s.top();
		s.pop();
		sort();
		insertinsortedstack(temp);
	}
}

int main()
{
	s.push(1);
	s.push(3);
	s.push(20);
	s.push(7);
	while(!s.empty())
	{
		int t=s.top();
		cout<<t<<endl;
		s.pop();
	}
	cout<<"------------"<<endl;
	s.push(1);
	s.push(3);
	s.push(20);
	s.push(7);
	sort();
	while(!s.empty())
	{
		int t=s.top();
		cout<<t<<endl;
		s.pop();
	}
	return 0;
}