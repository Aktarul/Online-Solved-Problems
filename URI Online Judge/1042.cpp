#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;

    cin>>a>>b>>c;

    if(a<=b && a<=c && b<=c) cout<<a<<endl<<b<<endl<<c<<endl<<endl;
    else if(a<=b && a<=c && c<=b)  cout<<a<<endl<<c<<endl<<b<<endl<<endl;
    else if(b<=a && b<=c && c<=a) cout<<b<<endl<<c<<endl<<a<<endl<<endl;
    else if(b<=a && b<=c && a<=c) cout<<b<<endl<<a<<endl<<c<<endl<<endl;
    else if(c<=a && c<=b && b<=a) cout<<c<<endl<<b<<endl<<a<<endl<<endl;
    else cout<<c<<endl<<a<<endl<<b<<endl<<endl;

    cout<<a<<endl<<b<<endl<<c<<endl;

    return 0;
}
