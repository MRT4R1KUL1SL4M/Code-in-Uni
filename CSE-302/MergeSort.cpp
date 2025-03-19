#include <bits/stdc++.h>
using namespace std;
void mergeLeftandRight(vector<int>&arr,int start, int end, int mid)
{
  int i=start;
  int j=mid+1;
  vector<int>temp;
  while(i<=mid && j<=end)
  {
    if(arr[i]<=arr[j])
    {
      temp.push_back(arr[i]);
      i++;
    }
    else
    {
      temp.push_back(arr[j]);
      j++;
    }
  }
  while(i<=mid)
  {
    temp.push_back(arr[i]);
    i++;
  }
  while(j<=end)
  {
    temp.push_back(arr[j]);
    j++;
  }
  for(int k=0;k<temp.size();k++)
  {
    arr[start+k]=temp[k];
  }
}
void mergeSort(vector<int>&arr,int start,int end)
{
  if(start>=end) return;
  int mid=start+(end-start)/2;
  mergeSort(arr,start,mid);
  mergeSort(arr,mid+1,end);
  mergeLeftandRight(arr,start,end,mid);
}
int main() {
    int n;
    cout<<"Enter the size:";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the element:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    mergeSort(arr,0,arr.size()-1);

    for(int val:arr)
    {
        cout<<val<<" ";
    }
    return 0;
}