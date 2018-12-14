// filesandparsing_hw1 – Jin Doh
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void randCapitalLetter(int capacity){

  srand(time(0));
  for(int i=1; i<=capacity; i++)
    cout << static_cast<char>(rand()%26 + 64) << " ";
}

void randPunctuation(int capacity){

  srand(time(0));
  for(int i=1; i<=capacity; i++)
    cout << static_cast<char>(rand()%5 + 42) << " ";
}

void randNumber(int capacity){

  srand(time(0));
  for(int i=1; i<=capacity; i++)
    cout << rand()%100 << " ";
}

int main(){
  int capacity = 10;

  randCapitalLetter(capacity);
  cout << endl;

  randPunctuation(capacity);
  cout << endl;

  randNumber(capacity);

 return 0;
}
