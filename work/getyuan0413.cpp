#include <iostream>
using namespace std;
class getyuan{
	private:
		float r,d,c,s;
	public:
		//void shuru(float r){
	
		//}
		void zhijing(float r){
			d=2*r;
			cout<<"直径="<<d<<endl;
		}
		void zhouchang(float r){
			c=6.28*r;
			cout<<"周长="<<c<<endl;
		}	
		void mianji(float r){
			s=3.14*r*r;
			cout<<"面积="<<s<<endl;
		}
};
int main(){
	int r;
	getyuan kk;
	cin>>r;
	kk.shuru(r);
	kk.zhijing(r);
	kk.zhouchang(r);
	kk.mianji(r);
	return 0;
}
