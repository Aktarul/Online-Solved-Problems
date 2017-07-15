#include<bits/stdc++.h>
using namespace std;

long long fact(long long n)
{
    if(n==0) return 1;
    if(n==1) return n;
    n=n*fact(n-1);
}

int main()
{
    long long n,m;

    while(cin>>n){
        cin>>m;
        cout<<fact(n)+fact(m)<<endl;
    }
    return 0;
}

