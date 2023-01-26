#include <iostream>
#include <vector>
#include "vectfuncs.h"

using namespace std;

void fillVector(vector<int>&);
void minMax(vector<int>&, int&, int&);

int main() {
  int min, max;
  vector<int> userNums;
  fillVector(userNums);
  cout << "size: " << userNums.size() << endl;
  minMax(userNums, min, max);
  cout << "Min: " << min << endl << "Max: " << max<< endl;
  //task 1: define and call a funciton to find and reutnr the min and max number in the vector
  //task 2: convert this to 3 file format
}
