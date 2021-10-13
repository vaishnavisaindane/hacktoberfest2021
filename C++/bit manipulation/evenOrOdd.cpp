#include <iostream>
using namespace std;

//Second approch is

int IsOdd(int n)
{
    return (n & 1);
}

  o/p: if 1 then odd
if 0 then even
int main()
{
    int n;
    cin >> n;

    if(n%2==0){
        cout<<"Even";
    }
    else
    {
        cout<<"odd";
    }

    cout << IsOdd(n);
    return 0;
}
