#include<iostream>
using namespace std;

int round_sum(int a){
  if(a<15){
    int times=10 / a;
    int sum;
    if(times<1){
      times=1;}
    return 10*times;
  }
  if(a>=15){
    int times=a / 10;
    return 10*(times+1);
  }
}

int main(){
  cout<<"请输入您想输入多少个数字"<<endl;
  int m,number_room;
  int final_number=0;
  //m 为想输入多少个数字的次数
  //number_room为手动输入数字容器
  cin>>m;
  for (int i=0;i<m;i++){
    cout<<"请输入一个随机数字"<<endl;
    cin>>number_room;
    round_sum(number_room);
    final_number += round_sum(number_room);
  }
cout<<"最终的结果为"<<final_number<<endl;

  return 0;
}