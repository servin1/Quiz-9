#include <iostream>
using namespace std;

 bool isPalindrome(string x, int y){
    for(int i = 0; i < y/2; i++)
    if(x[i] != x[y-i-1])
    return false;
    return true;
}
 int main(){

    string x;

    cout << "Enter de word: ";
     getline(cin, x);

    isPalindrome(x,x.length()) ?
        cout << "\nThe word is a palindrome \n" : cerr << "\nThe word is not a palindrome \n";
       cin.get();
       cin.get();
       return 0;
}
