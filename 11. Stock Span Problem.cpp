/*
Input : 68 735 101 770 525 279 559
Output : 1 2 1 4 1 1 3

Input : 100 80 60 70 60 75 85
Output: 1 1 1 2 1 4 6
*/

//Based on Previous Greater Element

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll> stock_span_problem(vector<ll>arr)
{
	ll n = arr.size();
	vector<ll>res(n,1);

	stack<ll>st;
	for(ll i=0;i<n;i++)
	{
		while(!st.empty() and arr[st.top()]<=arr[i])
		{
			st.pop();
		}
		res[i] = st.empty() ? i+1 : (i-st.top());
		st.push(i); // pushing index onto stack
	}
	return res;
}



int main()
{
	vector<ll>arr = {100,80,60,70,60,75,85};
	vector<ll>res=stock_span_problem(arr);

	for(ll i=0;i<res.size();i++)
	{
			cout<<arr[i]<<"->"<<res[i]<<endl;
	}
	return 0;
}