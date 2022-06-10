#include<bits/stdc++.h>
using namespace std;

const long long MAXN=114519;

long long n;

int main(){
	long long i,j;
	n=rand()%10+(MAXN-9);
	cout<<n<<endl;
	for(i=0;i<n;i++)
		cout<<rand()%4+1;
	cout<<endl;
	return 0;
}
