#include<iostream>
using namespace std;

int main(){
  int a,b;
  int sum,new_sum;
  cout<<"Enter two numbers: ";
  cin>>a>>b;
  sum=a+b;
  new_sum=a-b;
  if (a==6 || b==6){
    cout<<"The sum of the two numbers is 6 good numbers"<<endl;
  }
  else if(sum==6 || new_sum== 6){
    cout<<"the sum of the two numbers is 6 good numbers"<<endl;
  }
  else{
    cout<<"not good"<<endl;
  }

  return 0;
}