#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string reformat(string S, int K) {
        // ֻ������ĸ������
        string newS;
        for (auto c : S) {
            if (isalnum(c)) {
                // ����ĸת��Ϊ��д
                newS += toupper(c);
            }
        }
        int n = newS.size();
        // ����ַ�������С�ڵ���K����ֱ�ӷ���
        if (n <= K) {
            return newS;
        }
        // ���ַ�����ΪN+1��
        int N = (n - 1) / K;
        // �洢���������
        vector<string> groups(N + 1);
        for (int i = 0; i < N; i++) {
            // ��ȡÿ������
            groups[i] = newS.substr(i * K, K);
        }
        // �������һ��
        groups[N] = newS.substr(N * K);
        // ������һ��Ϊ�գ���ɾ������
        if (groups[N].size() == 0) {
            groups.pop_back();
            N--;
        }
        // �����һ��
        if (groups[0].size() < K) {
            int num_chars = groups[0].size();
            // �ڵ�һ��ǰ��������ۺ�ʹ�䳤��ΪK
            for (int i = 0; i < K - num_chars; i++) {
                groups[0] = '-' + groups[0];
            }
        }
        // ��װ�ַ���
        string res;
        for (int i = 0; i <= N; i++) {
            if (!res.empty()) {
                res += '-';
            }
            res += groups[i];
        }
        return res;
    }
};

int main() {
    Solution solution;
    string S, res;
    int K;
    getline(cin, S);
    cin >> K;
    res = solution.reformat(S, K);
    cout << res << endl;
    return 0;
}

