#include <iostream>
using namespace std;
int main(){
	int n,i=0;
	cin>>n;
	int a[50];
	for(;i<50;i++){
		a[i]=n%8;
		n=n/8;
	}
	for(i=49;i>-1;i--){
		if(a[i]==0){
			continue;
		}else{
			cout<<a[i];
		}
	}
}
