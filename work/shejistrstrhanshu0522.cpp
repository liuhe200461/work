#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    int pos = str1.find(str2); // 查找第一次出现的位置
    bool flag = false; // 标识是否找到过一次
    while (pos != -1) { // 如果存在，则输出位置并继续查找
        cout << pos << " ";
        flag = true;
        break;
    }
    if (!flag) { // 如果未找到，输出-1
        cout << -1 << endl;
    }
    return 0;
}
