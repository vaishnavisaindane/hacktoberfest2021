#include<bits/stdc++.h>
using namespace std;
void towerOfHanoi(int n,char source,char dest, char helper){

   if(n==0){
    return;
}

   towerOfHanoi(n-1,source,helper,dest);
   cout<<"Move form "<<source<<" to "<<dest<< endl;
   towerOfHanoi(n-1,helper,dest,source);
}
int main(){
   towerOfHanoi(4,'A','C','B');
return 0;
}
