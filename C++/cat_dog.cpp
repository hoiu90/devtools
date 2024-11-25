#include<iostream>
#include<string>
using namespace std;

int cat_dog(const string& s){
  int count=0;
  for(int i=0;i<s.length();i++){
    if(s[i]=='c'||s[i+1]=='a'||s[i+2]=='t'||s[i+3]=='d'||s[i+4]=='o'||s[i+5]=='g'){
      count++;
    }

  }
  return count;
}

int main(){
  string s1="catdogcatdog";
  string s2="catdog";
  string s3="catdogcatdogcatdog";
  cout<<cat_dog(s1)<<endl;
  cout<<cat_dog(s2)<<endl;
  cout<<cat_dog(s3)<<endl;

  return 0;
}


