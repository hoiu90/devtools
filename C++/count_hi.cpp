#include<iostream>
#include<string>
using namespace std;

int count_hi(const string& s){
  int count=0;
  for (int i=0;i<s.length();i++){
    if(s[i]=='H' || s[i]=='h'){
      count++;
    }
  }
  return count;
}

int main(){
  string s;
  cout<<"Enter string: ";
  cin>>s;
  cout<<count_hi(s);

  return 0;
}