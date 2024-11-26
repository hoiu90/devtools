#include<iostream>
#include<random>
using namespace std;

int has22(int n) {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(0,3);
  std::uniform_int_distribution<> dis2(0,6);
  int times;
  times = dis2(gen);
  cout<<"循环的次数："<<times<<endl;
  int list_1[times];
  cout <<"这次的随机数为："<<endl;
  for(int i=0;i<times;i++) {
    list_1[i] = dis(gen);
    cout <<list_1[i]<<"  ";
  }
  cout<<endl;
  for(int i=1;i<times;i++) {
    if(list_1[i] == 2 && list_1[i-1] == 2) {

      cout<<"恭喜 True"<<endl;
      return true;
    }
  }
cout<<"没有连续的2"<<endl;
return false;
}

int main(){
  has22(5);
  return 0;
}