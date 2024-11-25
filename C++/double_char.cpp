#include<iostream>
#include<string>
using namespace std;

string double_char(const string& input){

  string result;
  for(char c : input){
    result += c;
    result += c;
  }
  return result;
}
int main(){

string input1 ="wo";
string input2 ="shi";
string input3 = "nibaba";

cout<<double_char(input1)<<endl;
cout<<double_char(input2)<<endl;
cout<<double_char(input3)<<endl;

return 0;
}