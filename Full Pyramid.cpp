#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int i,j,n,start,end;
    cin>>n;
    start=n;
    end=n;
    for (i=1;i<=n;i++){
        for (j=1;j<=end;j++){
            if(j>=start){
                if ((j-start)%2==0){
                    cout<<'*';
                }
                else {
                    cout<<" ";
                }
            }
            else {
                cout<<" ";
            }
        }
        start--;
        end++;
        cout<<endl;
    }
    return 0;
}
