#include <iostream>
#include <string>
#include "mat.hpp"
using namespace ariel;
using namespace std;

 int main(){
  int row;
  int cols;
  char a;
  char b;
  cout << "please enter a cols number" << endl;
  cin >> cols;
  cout << "please enter a rows number" << endl;
  cin >> row;
  cout << "please enter a first char" << endl;
  cin >> a;
  cout << "please enter a second char" << endl;
  cin >> b;
  cout << ariel::mat(cols, row, a, b) << endl;
  
  
 }
