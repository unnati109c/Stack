// https://leetcode.com/problems/next-greater-element-ii/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll> nge_in_circular_array(vector<ll>arr)
{
	ll n = arr.size();
	vector<ll>res(n, -1);

	stack<ll>st;
	for(ll i=0;i<2*n;i++)
	{
		while(!st.empty() and arr[st.top()]<arr[i%n])
		{
			res[st.top()]=arr[i%n]; //pushing the values into res
			st.pop();
		}
		st.push(i%n); // pushing index onto stack
	}
	return res;
}



int main()
{
	vector<ll>arr = {1,2,1};
	vector<ll>res=nge_in_circular_array(arr);

	for(ll i=0;i<res.size();i++)
	{
			cout<<arr[i]<<"->"<<res[i]<<endl;
	}
	return 0;
}