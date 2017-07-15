#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,cnt=0;
    cin>>x;
    for(int i=0;i<5;i++){
        cin>>y;
        if(x==y) cnt++;
    }
    cout<<cnt<<endl;

    return 0;

}
