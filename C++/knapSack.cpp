/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
int knapsack(int value[], int wt[], int n, int W){

    if(n==0 || W==0)
    {
        return 0;
    }
    if(wt[n-1]>W){
        return knapsack(value,wt,n-1,W);
    }


    return max(knapsack(value,wt,n-1,W-wt[n-1])+value[n-1],knapsack(value,wt,n-1,W));
}

int main()
{
    int wt[]={10,20,30};
    int value[]={100,50,150};
    int W=50;

    cout<<knapsack(value,wt,3,W);


    return 0;
}
