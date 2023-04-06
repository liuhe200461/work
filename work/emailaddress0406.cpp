#include <iostream>
#include <string.h>
using namespace std; 
class emailaddress{
	private:
		int x;
		int y;
		int z;
		char str[100];
	public:
		emailaddress(char str[100]){
			cin>>str[100];
		}
		void symbol(){
		int i=0;
		for(;i<strlen(str);i++){
			if(str[i]>='a' & str[i]<='z' | str[i]>='A' & str[i]<='Z' | str[i]>=0 & str[i]<=9 | str[i]=='_' | str[i]=='-' |str[i]=='.'|str[i]=='@'){
				x=1;
			}else{
				x=0;
			}
		}
	    }
	    void Apan(){
		int j=0,j1=0;
		for(;j<strlen(str);j++){
			if(str[j]=='@'){
				j1++;
			}
			if(j1!=1 | str[0]=='@' | str[strlen(str)-1]=='@'){
				y=0;
			}else{
				y=1;
			}
		}
		}
		void dianpan(){
		int k=0,k1=0,k2=0;
		for(;k<strlen(str);k++){
			if(str[k]=='@'){
				k1=k;
				break;
			}
		}
		for(k=0;k<strlen(str);k++){
			if(str[k]=='.'){
				k2++;
			}
		}
		if(str[k1+1]=='.' | str[strlen(str)-1]=='.' | k2!=1){
			z=0;
		}else{
			z=1;
		}
		}
	    int judge(){
		if(x==1 && y==1 && z==1){
		cout<<"yes";
	    }else{
		cout<<"no";
	    }
		}
};
int main(){
	char str[100];
	cin>>str[100];
	emailaddress shuru(str);
	shuru.symbol();
	shuru.Apan();
	shuru.dianpan();
	cout<<shuru.judge()<<endl;
}
