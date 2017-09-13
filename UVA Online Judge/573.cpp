#include<bits/stdc++.h>
using namespace std;

int main()
{
    float h,u,d,f;
    cin>>h>>u>>d>>f;

    while(h){
        float s=0,i,t=u,ini=0;
        for(i=0;;i++){
            if(i) {
                u=u-(t*(f/100));

            }

            s=s+u-d;

            cout<<s<<" "<<d<<" "<<u<<endl;

            if(h<=s || s<0) {
                if(h<=s) ini=1;
                break;
            }

        }
        if(ini) cout<<"success on day "<<i<<endl;
        else cout<<"failure on day "<<i+1<<endl;

        cin>>h>>u>>d>>f;
    }

    return 0;
}
