#include<bits/stdc++.h>
using namespace std;

int main()
{
    char f[100],s[100],t[100];

    cin>>f;
    cin>>s;
    cin>>t;

    if(!strcmp("vertebrado",f)){

        if(!strcmp(s,"ave")){
            if(strcmp(t,"carnivoro")==0)
                cout<<"aguia"<<endl;
            else cout<<"pomba"<<endl;
        }

        else{
            if(!strcmp(t,"onivoro")){
                cout<<"homem"<<endl;
            }
            else cout<<"vaca"<<endl;
        }
    }

    else {

        if(!strcmp(s,"inseto")){
            if(!strcmp(t,"hematofago"))
                cout<<"pulga"<<endl;
            else cout<<"lagarta"<<endl;
        }
        else{
            if(!strcmp(t,"hematofago"))
                cout<<"sanguessuga"<<endl;
            else cout<<"minhoca"<<endl;
        }
    }


    return 0;
}
