#include <iostream>
#include <string>
using namespace std;


int LCSLength(string s1, string s2)
{
    int m = s1.length();
    int n = s2.length();

    if (m == 0 || n == 0) {
        return 0;
    }

    if (s1[m - 1] == s2[n - 1]) {
        return LCSLength(s1, s2, m - 1, n - 1) + 1;
    }
    
    return max(LCSLength(s1, s2, m, n - 1), LCSLength(X, s2, m - 1, n));
}
 
int main()
{
    string s1 = "ABCBDAB", s2 = "BDCABA";

    cout << "The length of the Longest Common Subsequence is " <<
            LCSLength(s1, s2);

    return 0;
}


