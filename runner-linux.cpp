#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;

char cmd[100];

void gen(long long start,long long end,char* generator){
	long long i,j;
	for(i=start;i<=end;i++){
		sprintf(cmd,"./%s > data/data%lld.in",generator,i);
		cout<<cmd<<endl;
		system(cmd);
		sleep(1);
	}
}

void solve(long long start,long long end){
	long long i,j;
	for(i=start;i<=end;i++){
		sprintf(cmd,"./Solution < data/data%lld.in > data/data%lld.out",i,i);
		cout<<cmd<<endl;
		system(cmd);
	}
}

int main(){
	long long i,j;
	system("rm -r data");
	system("mkdir data");
	gen(1,25,"iG");
	solve(1,25);
	return 0;
}
