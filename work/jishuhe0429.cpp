#include <iostream>
using namespace std;

int even(int n) {
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}

int main() {
    int num, sum = 0;
    while (true) {
        cin >> num;
        if (num <= 0) break;
        if (even(num) == 0) sum += num; // ���� even ���������ж�
    }
    cout << sum << endl;
    return 0;
}



