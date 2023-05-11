#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    int pos = str2.find(str1); // 查找第一次出现的位置
    bool flag = false; // 标识是否找到过一次
    while (pos != -1) { // 如果存在，则输出位置并继续查找
        cout << pos << " ";
        flag = true; // 找到过至少一次
        pos = str2.find(str1, pos + 1); // 继续查找从上一次匹配结束后开始的位置
    }
    if (!flag) { // 如果未找到，输出-1
        cout << -1 << endl;
    }
    return 0;
}

