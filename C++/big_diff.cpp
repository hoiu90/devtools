#include<iostream>
#include<random>
using namespace std;

int big_diff(int a){
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(0,20);
  int size =4;
  int list_1[size];
  int max_num[size];
  for(int i=0;i<4;i++){
    list_1[i]=dis(gen);
  }
  for(int i=0;i<size -1;i++){
    for(int j= 0;j<size-i-1;j++){
       if(list_1[j]>list_1[j+1]){
       std::swap(list_1[j],max_num[j+1]);
       }
    }
  }
  int total=list_1[size-1]-list_1[0];
  return total;
}

int main(){
  big_diff(10);
  cout<<"最大的与最小的差值为"<<big_diff(10)<<endl;
  return 0;
}
