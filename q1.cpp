#include <iostream>
using namespace std;

//Osvaldo Mendoza Servín
//A01630327

void triangles(int a){
  for(int i=1; i<=a; i++){
    for(int j=1; j<=i; j++){
      cout<<"T";
    }
    cout<<endl;
  }

  for(int i=a; i>=1; i--){
    for(int j=1; j<=i; j++){
      cout<<"T";
    }
    cout<<endl;

  }

}
int main () {

  int a;
  cout <<"Give a number "; cin >> a;
  triangles(a);

  return 0;
}
