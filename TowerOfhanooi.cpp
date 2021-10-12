#include <iostream>

using namespace std;

void towerOFHanoi(int n,string src, string helper, string dest){

    if(n==1){
        cout<<"Transfer disc "<<n<<" from "<<src<<" to "<<dest<<endl;
        return;
    }
    towerOFHanoi(n-1,src,dest,helper);
    cout<<"Transfer disc "<<n<<" from "<<src<<" to "<<dest<<endl;
    towerOFHanoi(n-1,helper,src,dest);
}

int main()
{
   int n=2;
    towerOFHanoi(n,"Source","Helper","Destination");
    return 0;
}
