#include<iostream>
using namespace std;

int main() {

    int a, money;
    cout << "欢迎来到儿童游乐场，儿童免费，成人收费！" << endl;
    cout << "请输入您的年龄: ";  
    cin >> a;

    // 检查年龄是否小于等于18岁
    if (a <= 18) {
        cout << "欢迎您！您未满18岁，可以免费进入游乐场！" << endl;
    } 
    else {
        cout << "欢迎您！您已满18岁，需要支付30元才能进入游乐场" << endl;
        cout << "请输入支付金额: ";
        cin >> money;

        // 检查支付金额是否大于等于30
        if (money >= 30) {
            cout << "支付成功！恭喜您！您已成功进入游乐场！" << endl;
        } 
        else {
            cout << "支付失败！您未支付足够的金额，请重新支付30元！" << endl;
        }
    }

    return 0;
}
