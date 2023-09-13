#include<bits/stdc++.h>

using namespace std;
int N,m,T,D,E,tem,Sum,t;
bool serial[10010];
int main(){
	cin.tie(0),cout.tie(0);
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>m;
		t=Sum=0;
				bool f=true;
		while(m--){
			cin>>tem;
			
			if(tem>0){
				if(f&&(t+Sum)>tem){serial[i]=true;D++;f=false;}
				t=tem;
				Sum=0;
			}
			else Sum+=tem;
		}
		T+=t+Sum;
	}
	int l=0;
	for(int i=0;i<N;i++){
	if(serial[i])l++;
		else l=0;
	if(l==3){E++;l--;}
	}
	if(serial[0]&&serial[1]&&serial[N-1])E++;
	if(serial[0]&&serial[N-2]&&serial[N-1])E++;
	cout<<T<<' '<<D<<' '<<E;
	
	return 0;	
}

/*
  4
  4 74 -7 -12 -5
  5 73 -8 -6 59 -4
  5 76 -5 -10 60 -2
  5 80 -6 -15 59 0
  
 */

/*
  5
  4 10 0 9 0
  4 10 -2 7 0
  2 10 0
  4 10 -3 5 0
  4 10 -1 8 0
  
 */
