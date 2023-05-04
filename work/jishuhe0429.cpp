#include <iostream>
using namespace std;
class jishuhe{
	int a[10];
	int i;
	int s=0;
	public:
		void even(){
			for(i=0;i<10;i++){
				if(a[i]<1){
					break;
				}else if(a[i]%2==1){
					a[i]==a[i];
				}else if(a[i]%2==0){
					a[i]=0;
				}
			}
		}
		void qiuhe(){
			for(i=0;i<10;i++){
				s=s+a[i];
			}
		}
};
int main(){
	int a[10];
	int i;
	for(i=0;i<10;i++){
		cin>>a[i];
	}
	jishuhe kk;
	kk.even();
	kk.qiuhe();
}
