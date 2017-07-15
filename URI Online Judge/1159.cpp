#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,s=0,cnt=0;

    cin>>n;
    while(n){
        s=0;
        cnt=0;
        for(i=n;;i++){
            if(i%2==0){
                s+=i;
                cnt++;
                if(cnt==5) break;
            }

        }
        cout<<s<<endl;
        cin>>n;
    }
}
