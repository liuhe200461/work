#include <iostream>
using namespace std;
int main(){
	int x,n;
	cin>>x>>n;
	int k=1;
	for(int i=0;i<n;i++){
		k=k*x;
	}
	cout<<k;
	return 0;
} 
