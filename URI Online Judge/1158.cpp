#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,n,s;
    cin>>n;

    while(n--){
        cin>>x>>y;
        s=0;

        for(int i=x;;i++){

            if(i%2==1 || i%2==-1) {

                s=s+i;

                y--;
            }
            if(!y) break;
        }
        cout<<s<<endl;

    }

    return 0;
}
