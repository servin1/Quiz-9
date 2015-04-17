#include <iostream>
using namespace std;
// Osvaldo Mendoza Servín
// A01630327

long fibonacci(long a){
  long num1=0, num2=1, num3=num1+num2;
  if(a==0) return 0;
  if(a==1|| a==2) return 1;
  for(int i=3; i<=a; i++){
    num1=num2;
    num2=num3;
    num3=num1+num2;
  }
  return num3;

}


int main () {

  long a;
  cout<<"Tell me the number of which you want to know its fibonacci "; cin >> a;
  cout<<fibonacci(a)<< endl;

  return 0;
}
