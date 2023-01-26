#include "vectfuncs.h"

void fillVector(vector<int>& vect){
  int num;
  for(int i=0; i<5; i++){
    cout << "Enter an int: "<< endl;
    cin>>num;
    vect.push_back(num);
  }
}

void minMax(vector<int>& vect, int& min, int& max){
  min=vect[0], max=vect[0];
  for(int i=0; i<vect.size(); i++){
    if(vect[i]>max){
      max = vect[i];
    }else if(vect[i]<min){
      min = vect[i];
    }
  }
}