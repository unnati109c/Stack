/*we have an array A of integers, we have to find the number of non-empty continuous subarrays 
where the leftmost element of the subarray is not larger than other elements in the subarray.

if the input is like [1,4,2,5,3], then the output will be 11, as there are 11 valid subarrays, 
they are like [1],[4],[2],[5],[3],[1,4],[2,5],[1,4,2],[2,5,3],[1,4,2,5],[1,4,2,5,3].
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll count_subarrays_pse(vector<ll>arr)
{
	ll n = arr.size();
	ll ans=0;

	stack<ll>st;
	for(ll i=0;i<n;i++)
	{
		while(!st.empty() and arr[st.top()]>arr[i])
		{
			st.pop();
		}
		
		st.push(i); 
		ans+=st.size();
	}
	return ans;
}

int main()
{
	vector<ll>arr = {1,4,2,5,3};
	ll res=count_subarrays_pse(arr);

	cout<<res<<endl;

	return 0;
}