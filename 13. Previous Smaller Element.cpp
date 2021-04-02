#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll> previous_smaller_element(vector<ll>arr)
{
	ll n = arr.size();
	vector<ll>res(n, -1);

	stack<ll>st;
	for(ll i=0;i<n;i++)
	{
		while(!st.empty() and arr[st.top()]>=arr[i])
		{
			st.pop();
		}
		res[i] = st.empty() ? -1 : arr[st.top()];
		st.push(i); 
	}
	return res;
}



int main()
{
	vector<ll>arr = {3,4,1,2,5,3,4};
	vector<ll>res=previous_smaller_element(arr);

	for(ll i=0;i<res.size();i++)
	{
			cout<<arr[i]<<"->"<<res[i]<<endl;
	}
	return 0;
}