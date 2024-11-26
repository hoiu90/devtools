#include<iostream>
#include<random>
#include<string>
using namespace std;

int sum67(int n) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 99);
    std::uniform_int_distribution<> dis2(5, 10); // 控制数组长度
    int times = dis2(gen);
    int sum = 0;
    int list_1[times];

    // 生成随机数组
    cout << "数组中的随机元素为: ";
    for (int i = 0; i < times; i++) {
        list_1[i] = dis(gen);
        cout << list_1[i] << " ";
    }
    cout << endl;

    // 转换为字符串形式（非必要，仅为展示）
    string list_str = "[";
    for (int i = 0; i < times; i++) {
        list_str += to_string(list_1[i]);
        if (i < times - 1) list_str += ",";
    }
    list_str += "]";
    cout << "数组转字符串化后: " << list_str << endl;

    // 忽略逻辑
    bool ignore = false; // 是否忽略当前数字
    for (int i = 0; i < times; i++) {
        string num_str = to_string(list_1[i]); // 当前数字转字符串

        // 检查是否以6开头
        if (num_str[0] == '6') {
            ignore = true;
            cout << "遇到以6开头的数字，开始忽略" << endl;
            continue;
        }

        // 检查是否以7开头
        if (num_str[0] == '7' && ignore) {
            ignore = false;
            cout << "遇到以7开头的数字，停止忽略" << endl;
            continue;
        }

        // 如果不在忽略范围，累加
        if (!ignore) {
            sum += list_1[i];
        }
    }

    cout << "最后的值为: " << sum << endl;
    return sum;
}

int main() {
    sum67(10);
    return 0;
}
