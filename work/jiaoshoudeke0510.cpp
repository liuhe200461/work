#include <iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int i=0;
	int a[n];
	for(;i<n;i++){
		cin>>a[i];
	}
	int index=0;
	for(i=0;i<n;i++){
		if(a[i]<=0){
			index++;
		}
	}
	if(index>=k){
		cout<<"NO";
	}else{
		cout<<"YES";
	}
	return 0;
}
