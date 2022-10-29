#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int m,n,i,j;
    vector <int> arr;

    cin>>m>>n;
    int arr1[m];
    int arr2[n];

    for (i=0; i<m; i++)
    {
        cin>>arr1[i];
    }

    for (j=0; j<n; j++)
    {
        cin>>arr2[j];
    }
    for (i=0,j=0; i<m && j<n; )
    {
//        cout<<"i="<<i<<" j="<<j<<endl;
//        cout<<arr1[i]<<"---"<<arr2[j]<<endl;

        if (arr1[i]<arr2[j])
        {
            arr.push_back(arr1[i]);
//            cout<<"pushed"<<arr1[i]<<endl;
            i++;
        }
        else if (arr2[j]<arr1[i])
        {
            arr.push_back(arr2[j]);
//            cout<<"pushed"<<arr2[j]<<endl;
            j++;
        }
        else if (arr1[i]==arr2[j])
        {
            arr.push_back(arr1[i]);
//            cout<<"pushed"<<arr1[i]<<endl;
            i++;
            j++;
        }
    }

    if (i==m)
    {
        while (j<n)
        {
            arr.push_back(arr2[j]);
//            cout<<"pushed"<<arr2[j]<<endl;
            j++;
        }
    }
    else if (j==n)
    {
        while (i<m)
        {
            arr.push_back(arr1[i]);
//            cout<<"pushed"<<arr1[i]<<endl;
            i++;
        }

    }

    for (i=0; i<(arr.size()-1); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<arr[i];
    return 0;
}
