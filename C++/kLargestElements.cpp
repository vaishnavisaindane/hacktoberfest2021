// K Largest Elements
// Question :- Given an array Arr of N positive integers, find K largest elements from the array.  The output elements should be printed in decreasing order.
// Topic Tage:- Array , Heap , Sorting


#include<bits/stdc++.h>
using namespace std;

vector<int> kLargest(vector<int> &Arr, int n, int k) 
{
	vector<int> v;
    priority_queue<int,vector<int>,greater<int>> pq;  //Declaring a min heap
    for(int i=0;i<n;i++)
    {
        pq.push(Arr[i]);
        if(pq.size()>k)  //If size of heap becomes greater than k then pop the element as we need only k elements
        pq.pop();
    }
    while(pq.size())
    {
        v.push_back(pq.top());
        pq.pop();
    }
    reverse(v.begin(),v.end());  //Reversing the vector
    return v;
}

int main()
{
    int n;
    cin>>n;  //taking number of elements in array as input
    int k;
    cin>>k;  //taking value of k
    vector<int> Arr(n);  //vector of size n
    for(int i=0;i<n;i++)
    cin>>Arr[i]; //inputing vector elements
    vector<int> ans=kLargest(Arr,n,k);
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";  //Displaying output
    return 0;
}