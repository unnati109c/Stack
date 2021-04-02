#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll> next_smaller_element_right(vector<ll>arr)
{
	ll n = arr.size();
	vector<ll>res(n, -1);

	stack<ll>st;
	for(ll i=0;i<n;i++)
	{
		while(!st.empty() and arr[st.top()]>arr[i])
		{
			res[st.top()]=arr[i]; //pushing the values into res
			st.pop();
		}
		st.push(i); // pushing index onto stack
	}
	return res;
}



int main()
{
	vector<ll>arr = {3,2,1,5,4,3,10};
	vector<ll>res=next_smaller_element_right(arr);

	for(ll i=0;i<res.size();i++)
	{
			cout<<arr[i]<<"->"<<res[i]<<endl;
	}
	return 0;
}