#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0,sum=0,max;
    while(i<n){
        sum=sum+arr[i];
        if(sum<0)
        sum=0;
        if(sum>max)
        max=sum;
        
        i++;
        
    }
    cout<<max;
    
    
}
