#include<bits/stdc++.h>
using namespace std;

const long long MAXN=114519;

long long n;
char ch[MAXN];
long long physical=0,mental=0;

int main(){
	long long i,j;
	cin>>n>>ch;
	for(i=0;i<n;i++){
		physical+=(ch[i]=='2' || ch[i]=='3');
		mental+=(ch[i]=='3' || ch[i]=='4');
	}
	cout<<physical<<' '<<mental<<endl;
	return 0;
}
