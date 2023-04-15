#include <iostream>
using namespace std;
void print_pascal_triangle(int num) {
    int triangle[num][num];
    for (int i = 0; i < num; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                triangle[i][j] = 1;
            } else {
                triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
            }
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
	int N;
	cin>>N;
    int num[N];
    for(int a=0;a<N;a++){
    cin>>num[a];}
    for(int b=0;b<N;b++){
    print_pascal_triangle(num[b]);}
    return 0;
}

