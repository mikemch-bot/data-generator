/*
Graph tools
Copyright (C) 2022 lgmulti

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

Contact me by email mid_sc@outlook.com
*/

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
