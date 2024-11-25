#include<iostream>
using namespace std;

bool end_other(const string& s,const string& t){

  string alower;
  string blower;

  return alower.substr(alower.size() - blower.size())==blower;
}

int main(){
  cout<<end_other("hello","world")<<endl;
  cout<<end_other("hello","hello")<<endl;
  cout<<end_other("world","world")<<endl;

  return 0;

}