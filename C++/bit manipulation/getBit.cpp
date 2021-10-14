#include <iostream>
using namespace std;

//get bit
int getbit(int &n, int i){
    int mask = (1<<i);
    int ans = n|mask;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int i;
    cin>>i;
    cout<<"Answer is "<<getbit(n,i)<<endl;
    return 0;
}
