#include <iostream>
#include <string>
#include "mat.hpp"
#include "time.h"
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
  cout << "and one random" << endl;
  srand(time(0));
  cols = (rand()%50)+1;
  while (cols%2==0)
  {
    cols = (rand()%50)+1;  
  }
  row = (rand()%50)+1;
  while (row%2==0)
  {
    row = (rand()%50)+1;  
  }
  cout << "rows: "<<row << " cols: "<< cols <<" " << endl;
  
  cout << ariel::mat(cols, row, a, b) << endl;
 }