// You are using GCC
//Occurence
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }int n2;cin>>n2;
    bool g=true;int h=0;
    for(int i=0;i<n;i++){
        if(a[i]==n2){
            g=true;h=i;
           break;}
        else{
           g=false;} 
    }
    if(g)
    cout<<h;
    else
    cout<<"NO OCCURRENCES";
}
