#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    int pos = str2.find(str1); // ���ҵ�һ�γ��ֵ�λ��
    bool flag = false; // ��ʶ�Ƿ��ҵ���һ��
    while (pos != -1) { // ������ڣ������λ�ò���������
        cout << pos << " ";
        flag = true; // �ҵ�������һ��
        pos = str2.find(str1, pos + 1); // �������Ҵ���һ��ƥ�������ʼ��λ��
    }
    if (!flag) { // ���δ�ҵ������-1
        cout << -1 << endl;
    }
    return 0;
}

