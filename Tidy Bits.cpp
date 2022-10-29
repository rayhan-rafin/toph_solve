#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,count=0,sum;
    cin>>n;
    while (n!=0){
        if ((n&1)==1){
            count++;
        }
        n= n>>1;
    }
    sum = (1<<count)-1;
    cout<<sum<<endl;
    return 0;
}
