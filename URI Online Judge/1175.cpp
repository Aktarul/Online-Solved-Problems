#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[21];

    for(int i=0;i<=19;i++){
        cin>>arr[i];
    }
    for(int i=19,j=0;i>=0;i--,j++){
        cout<<"N["<<j<<"] = "<<arr[i]<<endl;
    }

    return 0;
}
