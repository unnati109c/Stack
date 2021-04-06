// C++ program to implement a stack that supports getMaximum() in O(1) time and O(1) extra space.
#include <bits/stdc++.h>
using namespace std;

struct MyStack {
	stack<int> s;
	int maxEle;

	void getMax()
	{
		if (s.empty())
			cout << "Stack is empty\n";
		else
			cout << "Maximum Element in the stack is: "
				<< maxEle << "\n";
	}

	void peek()
	{
		if (s.empty()) {
			cout << "Stack is empty ";
			return;
		}
		int t = s.top(); 
		cout << "Top Most Element is: ";
		// If t < maxEle means maxEle stores value of t.
		(t > maxEle) ? cout << maxEle : cout << t;  // sign change to get minimum element
	}

	void pop()
	{
		if (s.empty()) {
			cout << "Stack is empty\n";
			return;
		}

		cout << "Top Most Element Removed: ";
		int t = s.top();
		s.pop();

		// Maximum will change as the maximum element of the stack is being removed.
		if (t > maxEle)  // sign change to get minimum element
		{
			cout << maxEle << "\n";
			maxEle = 2 * maxEle - t;
		}

		else
			cout << t << "\n";
	}

	void push(int x)
	{
		if (s.empty()) {
			maxEle = x;
			s.push(x);
			cout << "Number Inserted: " << x << "\n";
			return;
		}
		if (x > maxEle) //sign change to get minimum element
		{
			s.push(2 * x - maxEle);
			maxEle = x;
		}
		else
			s.push(x);
		cout << "Number Inserted: " << x << "\n";
	}
};

// Driver Code
int main()
{
	MyStack s;
	s.push(3);
	s.push(5);
	s.getMax();
	s.push(7);
	s.push(19);
	s.getMax();
	s.pop();
	s.getMax();
	s.pop();
	s.peek();

	return 0;
}
