#include<bits/stdc++.h>
#include"tools.h"
using namespace std;

const long long MAXN=1e6+5,MAXM=5e6+5;

long long ids[MAXN];
map< pair<long long,long long>,long long> existed;

void generateDAG(long long n,long long m){
    long long i,j;
    if(n>MAXN-5){
        cout<<"ERROR: n is too big.\n";
        return;
    }
    if(m>MAXM-5){
        cout<<"ERROR: m is too big.\n";
        return;
    }
    if(m>n*(n-1)/2){
        cout<<"ERROR: can't generate such graph, \
        try entering a smaller m or a bigger n.";
        return;
    }
    for(i=1;i<=n;i++)
        ids[i]=i;
    random_shuffle(ids+1,ids+n+1);

    for(i=0;i<m;i++){
        long long u,v;
        do{
            u=rand()%n+1;
            v=rand()%n+1;
        }while(u>=v || existed[make_pair(u,v)]);

        existed[make_pair(u,v)]=1;
        cout<<ids[u]<<' '<<ids[v]<<endl;
    }
}