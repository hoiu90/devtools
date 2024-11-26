#include<iostream>
#include<random>
using namespace std;

int sum13(int n){
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(0,26);
  std::uniform_int_distribution<> dis2(0,10);
  int times;
  times = dis2(gen);
  cout <<"随机数组的次数为："<<times << endl;
  int list_1[times];
  int sum = 0;
  for(int i=0;i<=times;i++){
    list_1[i] = dis(gen);
    cout <<"提供的随机数组，元素组成为："<< list_1[i] <<" "<<endl;
    if(list_1[i] >=13){
      list_1[i] = 0;
    }
    else{
    sum += list_1[i];}
  }

cout<<"最后的sum值为"<<sum<<endl;
return sum;

}

int main(){
  sum13(10);
  return 0;
}