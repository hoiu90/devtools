#include<iostream>
#include<cmath>
using namespace std;

int close_far(int a,int b,int c)
{
  int total=0;

  if (abs(b - a) == 1 && (abs(c - a) >= 2 || abs(c - b) >= 2)) {
    total = 1; // 表示符合条件
  }
  else if (abs(c - a) == 1 && (abs(b - a) >= 2 || abs(b - c) >= 2)) {
    total = 1; // 表示符合条件
  }
  else {
    cout << "不符合要求" << endl;
  }

  return total;
}
int main(){
  int a,b,c;
  int result = close_far(a, b, c);
  cout<<"输入三个数字"<<endl;
  cin>>a>>b>>c;
  if (result==1) {
    cout<<" 符合close_far 条件"<<endl;
  }
  else {
    cout<<"不符合 close_far 条件"<<endl;
  }
  return 0;
}