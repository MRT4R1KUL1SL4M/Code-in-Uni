#include <bits/stdc++.h>
using namespace std;
int main() {
    int n=4,Amount=12;
    int coin[n]={1,5,7,9};

    int arr[n][Amount+1];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=Amount;j++)
        {
            if (i==0) arr[i][j] = j;

            else if(coin[i-1]>j)
            {
                arr[i][j]=arr[i-1][j];
            }
            else
            {
                arr[i][j]=min(arr[i-1][j],1+arr[i][j-coin[i-1]]);
            }
        }
    }

    cout<<"Min coin:"<<arr[n-1][Amount];

    return 0;
}