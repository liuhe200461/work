#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int s;
	for(int i=0;i<3;i++){
		s=s+n%10;
		n=n/10;
	}
	cout<<s<<endl;
}
