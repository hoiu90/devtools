#include<iostream>
using namespace std;

int main(){
  cout<<"请输入一个字符串"<<endl;
  string zifuchuan,new_zifuchuan;
  int time;
  cin>>zifuchuan;
  cout<<"请输入重复多少次"<<endl;
  cin>>time;
  for (int i=0;i<time;i++) {

    new_zifuchuan+=zifuchuan;
  }
  cout<<new_zifuchuan<<endl;
  return 0;
}