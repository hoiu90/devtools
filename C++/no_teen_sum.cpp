#include<iostream>
using namespace std;

int fix_teen(int n){
  if ((n>=13&&n<=19)&& (n!=15&&n!=16) ){
      return 0;
  }
  return n;
}

int no_teen_sum(int a , int b, int c){

  return fix_teen(a)+fix_teen(b)+fix_teen(c);
}

int main(){
  int a,b,c;
  cout<<"Enter three numbers: ";
  cin>>a>>b>>c;

  int result = no_teen_sum(a,b,c);
  cout<<"修正后的结果为"<<result<<endl;
  return 0;

}