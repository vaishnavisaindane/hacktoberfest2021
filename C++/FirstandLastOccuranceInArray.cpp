//Author Saurav Kumar

#include<iostream>
using namespace std;

int firstOc(int a[], int n, int i, int k){

    if(i == n){
        return -1;
    }

    if(a[i]==k){
        return i;
    }
    return firstOc(a,n,i+1,k);
}
int lastOc(int a[], int n, int i, int k){

    int restArray = lastOc(a, n, i+1,k);

    if(restArray != -1){
     return restArray;
    }

    if(a[i] == k){
        return i;
    }
    else{
        return -1;
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for( int i=0; i<n; i++){
        cin>>a[i];
    }
    int k;
    cin>>k;

    cout<<firstOc(a,n,0,k)<<endl;
    cout<<lastOc(a,n,0,k);



    return 0;
}
