#include <bits/stdc++.h>
using namespace std;

string mul(string a, string b) {
    // 初始化结果数组，长度为两数长度之和
    vector<int> res(a.size() + b.size(), 0);
    
    // 从低位到高位逐位相乘
    for (int i = a.size()-1; i >= 0; i--) {
        for (int j = b.size()-1; j >= 0; j--) {
            // 当前位相乘结果，加上之前的进位
            res[i+j+1] += (a[i]-'0') * (b[j]-'0');
            // 处理进位
            res[i+j] += res[i+j+1] / 10;
            res[i+j+1] %= 10;
        }
    }
    
    // 转成字符串并去除前导零
    string ans = "";
    int pos = 0;
    // 找到第一个非零位
    while (pos < res.size() && res[pos] == 0) pos++;
    // 如果全零，返回"0"
    if (pos == res.size()) return "0";
    // 拼接结果
    while (pos < res.size()) ans += res[pos++] + '0';
    
    return ans;
}

int main() {
    string a, b;
    cin >> a >> b;
    cout << mul(a, b) << endl;
    return 0;
}