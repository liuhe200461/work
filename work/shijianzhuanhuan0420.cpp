#include <iostream>
using namespace std;
int main(){
	int n;
	int m;
	cin>>n;
	if(n>800){
		m=n-800;
	}else{
		m=n+1600;
	}
	cout<<m;
	return 0;
}
