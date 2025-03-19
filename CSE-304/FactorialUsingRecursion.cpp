#include <bits/stdc++.h>
using namespace std;
    int Fact(int n)
    {
        if(n==0 || n==1) return 1;
        else return n*Fact(n-1);
    }
int main() {
    int a;
    cout<<"Enter a value to find factorial:";
    cin>>a;
    cout<<"The factorial of "<<a<<" is: "<<Fact(a);
    return 0;
}