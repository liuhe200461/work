#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string reformat(string S, int K) {
        // 只保留字母和数字
        string newS;
        for (auto c : S) {
            if (isalnum(c)) {
                // 将字母转换为大写
                newS += toupper(c);
            }
        }
        int n = newS.size();
        // 如果字符串长度小于等于K，则直接返回
        if (n <= K) {
            return newS;
        }
        // 将字符串分为N+1组
        int N = (n - 1) / K;
        // 存储分组的向量
        vector<string> groups(N + 1);
        for (int i = 0; i < N; i++) {
            // 提取每个分组
            groups[i] = newS.substr(i * K, K);
        }
        // 处理最后一组
        groups[N] = newS.substr(N * K);
        // 如果最后一组为空，则删除该组
        if (groups[N].size() == 0) {
            groups.pop_back();
            N--;
        }
        // 处理第一组
        if (groups[0].size() < K) {
            int num_chars = groups[0].size();
            // 在第一组前面添加破折号使其长度为K
            for (int i = 0; i < K - num_chars; i++) {
                groups[0] = '-' + groups[0];
            }
        }
        // 组装字符串
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

