/*
DAG generator provided by Graygoo
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
using namespace std;

long long p[1000001];
long long f[1000001];
long long fa[1000001];
vector<long long> y;
mt19937 rt(time(NULL));
map<pair<long long,long long>,bool> e;

void genConnDAG(long long n,long long m,long long dep){
	for(long long i=1;i<=n;i++)p[i]=i;
	random_shuffle(p+2,p+1+n);
	for(long long i=1;i<=dep;i++)f[i]=1;
	for(long long i=2;i<=dep-1;i++){
		y.push_back(rt()%(n-dep+1));
	}
	y.push_back(0);
	y.push_back(0);
	y.push_back(n-dep);
	sort(y.begin(),y.end());
	for(long long i=1;i<y.size();i++)f[i]+=y[i]-y[i-1];
	long long st=1;
	for(long long i=2;i<=dep;i++){
		for(long long j=st+f[i-1];j<=st+f[i-1]+f[i]-1;j++){
		   long long u=rt()%f[i-1];
		   fa[j]=st+u;
		}
		st+=f[i-1];
	}
	for(long long i=2;i<=n;i++){
		cout<<p[fa[i]]<<" "<<p[i]<<endl;
		e[make_pair(fa[i],i)]=1;
	}
	for(long long i=n;i<=m;i++){
		long long r1=rt()%n+1;
		long long r2=rt()%n+1;
		if(r1>r2)swap(r1,r2);
		if(e[make_pair(r1,r2)] or r1==r2){
			i--;
			continue;
		}
		e[make_pair(r1,r2)]=1;
		cout<<p[r1]<<" "<<p[r2]<<endl;
	}
	return ;
}
