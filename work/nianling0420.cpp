#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n>0&&n<11){
		cout<<"Children";
	}else if(n>10&&n<21){
		cout<<"Teenagers";
	}else if(n>20&&n<41){
		cout<<"Youth";
	}else if(n>40&&n<51){
		cout<<"middle-aged";
	}else if(n>50&&n<81){
		cout<<"Elderly";
	}else if(n>80&&n<101){
		cout<<"Old man";
	}
	return 0;
}
