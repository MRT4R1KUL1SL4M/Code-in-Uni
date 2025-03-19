#include <bits/stdc++.h>
using namespace std;
const int N=1e6+5;
int arr[N];
int fib(int n)
{
    if(n==0 || n==1) return n;
    if(arr[n]!=-1)
    {
        return arr[n];
    }
    arr[n]=fib(n-1)+fib(n-2);
    return arr[n];
}
int main() {
    int n=10;
    fill(arr,arr+N,-1);
    cout<<fib(n);
    return 0;
}