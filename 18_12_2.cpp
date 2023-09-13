#include<bits/stdc++.h>
using namespace std;
int n,L,t;
struct Ball{
	int num;
	bool des;
	int pos;
	Ball(){num=-1;des=true;pos=-1;}
};
bool cmp(Ball a,Ball b){
	return a.num<b.num;
}
int main(){
	cin.tie(0),cout.tie(0);
	cin>>n>>L>>t;
	Ball ball[n];
	for(int i=0;i<n;i++)cin>>ball[i].pos,ball[i].num=i+1;
	for(int i=0;i<t;i++){
		for(int j=0;j<n;j++){
			if(ball[j].des)ball[j].pos++;
			else ball[j].pos--;
			if(ball[j].pos==L||ball[j].pos==0)ball[j].des^=1;
			for(int k=0;k<n;k++)
				if(ball[k].pos==ball[j].pos&&k!=j)swap(ball[j].num,ball[k].num);
		}
	}
	sort(ball,ball+n,cmp);
	for(int i=0;i<n;i++)cout<<ball[i].pos<<' ';
}
