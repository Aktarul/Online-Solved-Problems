#include<bits/stdc++.h>
using namespace std;

int main()
{
    float w,x,y,z,m;
    cin>>w>>x>>y>>z;

    float avg,avg2;

    avg= (2*w + 3*x + 4*y + 1*z)/10;

    cout<<fixed<<setprecision(1)<<"Media: "<<avg<<endl;

    if(avg>=7.0) cout<<"Aluno aprovado."<<endl;
    else if(avg<5.0) cout<<"Aluno reprovado."<<endl;
    else if(avg>=5.0 && avg<=6.9){
        cout<< "Aluno em exame."<<endl;

        cin>>m;
        cout<<"Nota do exame: "<<m<<endl;

        avg2=(avg+m)/2;

        if(avg>=5.0) cout<<"Aluno aprovado."<<endl;
        else cout<<"Aluno reprovado."<<endl;

        cout<<fixed<<setprecision(1)<<"Media final: "<<avg2<<endl;

    }


    return 0;
}
