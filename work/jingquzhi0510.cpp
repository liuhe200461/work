#include <iostream>
using namespace std;
int main(){
	int a,b,q;
	char c;
	cin>>a>>c>>b;
	cout<<"0." ;
	for(int i=0;i<199;i++){
		a=a*10;
		q=a/b;
		a=a%b;
		if(a==0){
			cout<<q;
			break;
		}else{
			cout<<q;
		}
	}
	return 0;
} 
