#include <iostream>
#include <cmath>
using namespace std;

//Osvaldo Mendoza Servín
//A01630327

long superpower(long a, long b){
  return pow(a,b);
}

int main () {
 
  long a, b;

  cout <<"Give me the first number "; cin >> a;
  cout <<"Give me the second number "; cin >> b;
 
  cout<<superpower(a, b)<< endl;

  return 0;
}
