#include <iostream>
#include <string>

using namespace std;

string valid(string s) {
    // ������ ũ��
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        // ���� ��ȣ�� push.
        if (s[i] == '(') {
            cnt += 1;
        }
        // �ݴ� ��ȣ�� pop
        else {
            cnt -= 1;
        }
        // cnt�� 0���� �۴ٴ� ���� )�ݴ� ��ȣ���� (���� ��ȣ�� �����ϴٴ� �ǹ�
        if (cnt < 0) {
            return "NO";
        }
    }
    // ������ ����ִٴ� ���� �ùٸ� ��ȣ(VPS)���� �ǹ�
    if (cnt == 0) {
        return "YES";
    }
    // �� ���� ')'�� '('���� �����ϴٴ� �ǹ�
    else {
        return "NO";
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << valid(s);
    }
    return 0;
}