#include <bits/stdc++.h>
using namespace std;
int main() {
    int n=3,Amount=8;
    int coin[n]={1,3,5};

    int arr[n+1][Amount+1];

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=Amount;j++)
        {
            if (i==0 and j==0) arr[i][j]=1;
            if (i==0 and j>0) arr[i][j]=0;
            else if(coin[i-1]>j)
            {
                arr[i][j]=arr[i-1][j];
            }
            else
            {
                arr[i][j]=arr[i-1][j]+arr[i][j-coin[i-1]];
            }
        }
    }
    cout<<"Table:"<<endl;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=Amount;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Min coin:"<<arr[n][Amount];

    return 0;
}