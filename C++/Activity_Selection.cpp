//Author Saurav Kumar

#include <bits/stdc++.h>
using namespace std;

void printMaxActivities(int s[], int f[], int n)
{
    int i, j;
 
    cout <<"Following activities are selected "<< endl;
 
    i = 0;
    cout <<" "<< i+1;
 
    for (j = 1; j < n; j++)

      if (s[j] >= f[i])
      {
          cout <<" " << j+1;
          i = j;
      }
    }
int main()
{
    int s[] =  {1,2,3,4,7,8,9,9,11,12};
    int f[] =  {3,5,4,7,10,9,11,13,12,14};
    int n = 10;
    printMaxActivities(s, f, n);
    return 0;
}
