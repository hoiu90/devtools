#include<iostream>
#include<string>
using namespace std;

bool cat_dog_new_standard(const string& s){
  int cat_count=0,dog_count=0;
  for(int i=0;i<s.length();i++){
    if(s.substr(i,3)=="cat"){
      cat_count++;
    }
    else if(s.substr(i,3)=="dog"){
      dog_count++;
    }
  }
 return cat_count==dog_count;
}

int main(){
  string s = "catdog";
  string s1 = "catcatdog";
  cout<<cat_dog_new_standard(s)<<endl;
  cout<<cat_dog_new_standard(s1)<<endl;
  return 0;

}