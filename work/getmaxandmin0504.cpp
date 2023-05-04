#include <iostream>
using namespace std;
class getmaxandmin{
	private:
	int a,b,q,t,i;
	public:
	int max(int a,int b){
		int q=0;
		if(a<b){
			q=b;
			b=a;
			a=q;
		}
		while(b!=0){
			int t=a%b;
			a=b;
			b=t;
		}
		cout<<a<<endl;
	}
	int min(int a,int b){
		int q=0;
		if(a<b){
			q=b;
			b=a;
			a=q;
		}
		int i=a;
		for(;i<100000;i++){
			if(i%a==0 && i%b==0){
				cout<<i;
				break;
			}
		}
	}
}; 
int main(){
	int a,b;
	cin>>a>>b;
	getmaxandmin kk;
	kk.max(a,b);
	kk.min(a,b);
}
