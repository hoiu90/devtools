#include<iostream>
#include<random>
using namespace std;

int count_evens(int n){
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(0,20);
  int times;
  int SIZE=5;
  int count=0;
  int list_1[SIZE];
  cout<<"Enter the number of times you want to count: ";
  cin>>times;

  for(int i=1;i<=times;i++){
    count=0;
    for(int j=0;j<5;j++){
      list_1[j]=dis(gen);
    }
    for(int j=0;j<SIZE;j++){
      if(list_1[j]%2==0){
      count++;}
    }
  cout<<"第"<<i<<"次5个中存在偶数的数量为:"<<count<<endl;

  }
   return count;
}


int main(){
  count_evens(5);
  return 0;
}