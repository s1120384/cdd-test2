#include <iostream>
using namespace std;

int main() {
    // 印出星號三角形
    for (int i = 1; i <= 6; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl; // 空一行分隔兩個輸出

    // 印出九九乘法表
    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= 9; ++j) {
            cout << i << " * " << j << " = " << i * j << "\t";
        }
        cout << endl;
    }

    return 0;
}
