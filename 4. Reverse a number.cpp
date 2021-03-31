#include<bits/stdc++.h>
using namespace std;

int reverse_num(int n)
{
	stack<int>s;

	while(n>0)
	{
		s.push(n%10);
		n=n/10;
	}

	int i=1;
	int reverse=0;
	while(!s.empty())
	{
		reverse += (s.top()*i);
		s.pop();
		i=i*10;
	}
	return reverse;
}

int main()
{
	int num=345678;
	cout<<reverse_num(num);
	return 0;
}