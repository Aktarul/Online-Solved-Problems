

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,i,j,ini,arr[1000];

    arr[0]=1,arr[1]=2;

    for(i=3,ini=2;i<1001;i++){
        bool x = true;
        for(j=2;j<=(int)sqrt(i);j++){
            if(i%j==0) {
                x=false;
                break;
            }
        }
        if(x==true) {
            arr[ini]=i;
            ini++;
        }
    }

    while(scanf("%d%d",&n,&m)==2){

        if(n==0) {
            cout<<n<<" "<<m<<": 1"<<endl;
            continue;
        }

        int cnt=0,low,up;
        for(i=0;arr[i]<=n;i++,cnt++);
        cout<<"Count: "<<cnt<<endl;
        for(i=0;i<cnt;i++){
            cout<<arr[i]<<" ";
        }

        /*

        if(m==0){
            cout<<n<<" "<<m<<": "<<arr[((int)cnt/2)]<<endl;
            continue;
        }

        if(cnt%2==0) low=((int)cnt/2)+1-m;
        else low=((int)cnt/2) +2-m;

        up=((int)cnt/2)+m;

        if(low<=0) low=1;
        if(up>cnt) up=cnt;


        cout<<n<<" "<<m<<": ";
        for(i=low-1;i<up;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl<<endl;*//*


if((m*2)>cnt)
    {
    printf("%d %d:",n,m);
    for(j=0;j<=(cnt-1);j++)
        printf(" %d",arr[j]);
    }

else
    {
    printf("%d %d:",n,m);
    for(j=(cnt-1)/2+1-m; j<=(cnt-1)/2+m-1 ; j++)
        printf(" %d",arr[j]);
    if((cnt-1)%2==1)
    printf(" %d",arr[(cnt-1)/2+m]);
    }
printf("\n\n");*/

    }

    return 0;
}



