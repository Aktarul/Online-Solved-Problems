#include<bits/stdc++.h>
using namespace std;

int main()
{
    float arr[5]={4.0,4.5,5.0,2.0,1.5};
    int x,y;
    cin>>x>>y;

    cout<<fixed<<setprecision(2)<<"Total: R$ "<<(arr[x-1]) * y<<endl;

    return 0;
}
