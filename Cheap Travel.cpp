
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,a,b,ans;
	cin>>n>>m>>a>>b;
	int cost_1=n*a;
	int cost_2=(n/m)*b;
	if(cost_1>cost_2){
		ans=(n/m)*b+min((n%m)*a,b);
		cout<<ans;
 
	}
	else{
		cout<<n*a;
	}
}
