#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int k;
	int i=0;
	for(int j=0;j<n-1;j++){
		for(;i<n-j-1;i++){
			if(a[i]>a[i+1]){
				k=a[i];
				a[i]=a[i+1];
				a[i+1]=k;
			}
		}
		i=0;
	}
	if(a[0]==a[1] && a[1]!=a[2]){
			cout<<a[0];
		}
	for(int i=0;i<n;i++){
		if(a[i]!=a[i+1] && a[i+1]==a[i+2] && a[i+2]!=a[i+3]){
			cout<<a[i+1]<<" ";
		}
	} 
}
