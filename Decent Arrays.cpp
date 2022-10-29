#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int m=0,n;
    cin>>n;
    int arr[n];
    cin>>arr[0];
    for (int i=1;i<n;i++){
        cin>>arr[i];
        if (arr[i]<arr[i-1]){
            m=1;
        }
    }
    if (m==1 || n==1){
        cout<<"No"<<endl;
    }
    else {
        cout<<"Yes"<<endl;
    }
    return 0;
}
