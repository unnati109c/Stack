#include<bits/stdc++.h>
using namespace std;
 
void deleteMid(stack<char> &st, int n, int curr)
{
   if (st.empty() || curr == n)
     return;

   int x = st.top();
   st.pop();
  
   deleteMid(st, n, curr+1);
  
   // if(curr != n/2)  [1,2,3,4] if u want to remove 2
   //if (curr != (n-(floor(n/2)+1))) // [1,2,3,4] if u want to remove 3
     
   if (curr != (floor(n/2)-1))  // [1,2,3,4] if u want to remove 3
     st.push(x);
}

int main()
{
    stack<char> st;
  
    st.push('1');
    st.push('2');
    st.push('3');
    st.push('4');
    st.push('5');
    st.push('6');
  
    deleteMid(st, st.size(),0);

    while (!st.empty())
    {
        char p=st.top();
        st.pop();
        cout << p << " ";
    }
    
    return 0;
}
