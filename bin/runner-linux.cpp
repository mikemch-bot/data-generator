/*
The data generator runner of the project.
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

	for(i=1;;i++){
		long long start,end;
		char program[20];

		cout<<"================= "<<i<<" ===================\n";
		cout<<"Enter start ID. (-1 to end)\n";
		cin>>start;
		if(start==-1)
			break;
		cout<<"Enter end ID.\n";
		cin>>end;
		cout<<"Enter program.\n";
		cin>>program;
		cout<<"Generating...\n";
		gen(start,end,program);
		cout<<"Generation finished.\n";
	}

	long long start,end;
	cout<<"Enter solve start ID.\n";
	cin>>start;
	cout<<"Enter solve end ID.\n";
	cin>>end;
	solve(start,end);

	return 0;
}
