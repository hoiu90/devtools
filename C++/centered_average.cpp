#include<iostream>
#include<random>
using namespace std;

int centered_average(int k){
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(0, 20);
  int size =5;
  int list_1[size];
  for(int i=0;i<=size;i++){
    list_1[i]=dis(gen);
  }
  cout<<"五个随机数分别为："<<endl;
  for(int i=0;i<size;i++) {
     cout<<list_1[i]<<" ";
  }
  for(int i=0;i<=size-1;i++){
    for(int j=0;j<size-i-1;j++){
      if(list_1[j]>list_1[j+1]){
        std::swap(list_1[j],list_1[j+1]);
      }
    }
  }

int sum=0;
for(int i=1;i<size-1;i++){
  sum+=list_1[i];
}
int new_sum=sum/(size-2);
cout<<"平均值为："<<new_sum<<endl;
return new_sum;
}

int main(){
  centered_average(2);
  return 0;
}