#include<bits/stdc++.h>
using namespace std;

int main()
{
    int j=7,k;
    for(int i=1;i<10;i=i+2){
        for(k=0;k<3;j--,k++){
            cout<<"I="<<i<<" J="<<j<<endl;
        }
        j=j+5;
    }

    return 0;
}
