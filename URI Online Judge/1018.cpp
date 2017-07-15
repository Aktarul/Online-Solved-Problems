///NOT SOLVED YET

#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x;
    int cnt=0;
    cin>>x;

    cout<<"NOTAS:"<<endl;

    while((x/100)>=1){
        cnt++;
        x-=100;
    }
    cout<<cnt<<" nota(s) de R$ 100.00"<<endl;

    cnt=0;

    while(x/50 >= 01){
        cnt++;
        x-=50;
    }
    cout<<cnt<<" nota(s) de R$ 50.00"<<endl;

    cnt=0;

    while(x/20 >=1){
        cnt++;
        x-=20;
    }
    cout<<cnt<<" nota(s) de R$ 20.00"<<endl;

    cnt=0;

    while(x/10 >= 1){
        cnt++;
        x-=10;
    }
    cout<<cnt<<" nota(s) de R$ 10.00"<<endl;

    cnt=0;

    while(x/5 >= 1){
        cnt++;
        x-=5;
    }
    cout<<cnt<<" nota(s) de R$ 5.00"<<endl;

    cnt=0;


    while(x/2 >=1){
        cnt++;
        x-=2;
    }
    cout<<cnt<<" nota(s) de R$ 2.00"<<endl;

    cout<<"MOEDAS:"<<endl;

    cnt=0;

    while(x/1 >= 1){
        cnt++;
        x-=1;
    }
    cout<<cnt<<" moeda(s) de R$ 1.00"<<endl;



    cnt=0;

    while(x/(0.5)>=1){
        cnt++;
        x-=0.5;
    }
    cout<<cnt<<" moeda(s) de R$ 0.50"<<endl;


    cnt=0;

    while(x/(0.25) >= 01){
        cnt++;
        x-=0.25;
    }
    cout<<cnt<<" moeda(s) de R$ 0.25"<<endl;

    cnt=0;

    while(x/(0.1) >= 01){
        cnt++;
        x-=0.1;
    }
    cout<<cnt<<" moeda(s) de R$ 0.10"<<endl;


    cnt=0;

    while(x/(0.05) >= 01){
        cnt++;
        x-=0.05;
    }
    cout<<cnt<<" moeda(s) de R$ 0.05"<<endl;


    cnt=0;

    while(x/(0.01) >= 01){
        cnt++;
        x-=0.01;
    }
    cout<<cnt<<" moeda(s) de R$ 0.01"<<endl;


    return 0;

}
