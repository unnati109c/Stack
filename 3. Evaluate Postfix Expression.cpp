#include<bits/stdc++.h>
using namespace std;

int evaluatePostfix(string S)
{
    stack<int>num;
    
    for(auto ch : S)
    {
        if(isdigit(ch))
        {
            num.push(ch-'0');
        }
        else
        {
            int one = num.top();
            num.pop();
            int two = num.top();
            num.pop();
            if(ch=='+') num.push(two+one);
            if(ch=='-') num.push(two-one);
            if(ch=='*') num.push(two*one);
            if(ch=='/') num.push(two/one);
        }
        
    }
    return num.top();
}

int main()
{
	string str; //valid postfix expression
	cin>>str;
	
	cout<<evaluatePostfix(str)<<endl;

	return 0;
}

