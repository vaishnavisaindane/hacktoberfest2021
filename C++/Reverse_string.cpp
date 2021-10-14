// A Simple Iterative C++ program to reverse
// a string
#include <bits/stdc++.h>
#include <stack>

using namespace std;

// Function to reverse a string
void reverseStr(string& str)
{
	int n = str.length();

	// Swap character starting from two
	// corners
	for (int i=0, j=n-1; i<j; i++,j--)
		swap(str[i], str[j]);
}

// Function to reverse a string using a stack
/*

void reverseStr(string& str) 
{
	stack<char> st; 
        for (int i = 0; i < str.size(); i++) {
            st.push(str[i]);
        }
        
        for (int i = 0; i < str.size(); i++) {
            str[i] = st.top();
            st.pop();
        }
}

*/

// Driver program
int main()
{
	string str = "geeksforgeeks";
	reverseStr(str);
	cout << str;
	return 0;
}
