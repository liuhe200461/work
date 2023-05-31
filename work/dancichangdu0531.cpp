#include <iostream>
#include <string>
using namespace std;

int main(){
	int count[100]={0};
	string str;
	getline(cin, str);
	int j=0;
		for(int i=0;i<str.length();i++){
		if(str[i]!=' ' && str[i]!='.'){
			count[j]++;
		}else{
			j++;
		}
	}
	for(int j=0;j<100;j++){
		if(count[j]!=0){
			cout<<count[j]<<' ';
		}
	}
} 
