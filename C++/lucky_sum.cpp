#include<iostream>
using namespace std;

int main(){
  int a,b,c,sum=0;
  cout<<"Enter three numbers: ";
  cin>>a>>b>>c;
  sum=a+b+c;
  if (a==13){
    b=0;
    a=0;
    cout<<"Lucky sum is: "<<sum;
  }
  else if (b==13){
    b=0;
    c=0;
    cout<<"Lucky sum is: "<<sum;
  }
  else{
    cout<<"Lucky sum is: "<<sum;
  }


  return 0;
}