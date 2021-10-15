// Question - Pascal's Triangle

// Statement- Given an integer numRows, return the first numRows of Pascal's triangle.

// Topics:- Array

#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> generate(int n) 
{
    vector<vector<int>> ans;
    int j=0;
    while(j<n)
    {
        vector<int> v;
        int pr = 1;
        v.push_back(pr);
        for (int i = 1; i <= j; i++) 
        {
            int curr = (pr * (j - i + 1)) / i;  // Element of Pascal's Triangle
            v.push_back(curr);
            pr = curr;
        }
        ans.push_back(v); // Pushing the whole row of the Pascal's Triangle
        j++;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n; //Input the number of rows

    vector<vector<int>> ans=generate(n);

    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        cout<<ans[i][j]<<" ";  //Displaying the Pascal's Triangle
        cout<<endl;
    }
    return 0;
}