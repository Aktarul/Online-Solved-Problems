#include<bits/stdc++.h>
using namespace std;

int main()
{
    int mini,n,x,po;
    cin>>n;
    cin>>mini;
    for(int i=0;i<n-1;i++){
        cin>>x;
        if(x<mini) {
            swap(mini,x);
            po=i+1;
        }
    }
    cout<<"Menor valor: "<<mini<<endl;
    cout<<"Posicao: "<<po<<endl;

    return 0;
}
