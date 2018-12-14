// filesandparsing_hw2 – Jin Doh
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
#include <sstream>
using namespace std;

string randString(int size){
  srand(time(0));
  string rtext;

  for(int i=0; i<size; i++){

    int ranNum = rand()%(size+1);

    for(int i=0; i<=ranNum; i++){
    	rtext += static_cast<char>(rand()%26 + 64);
    }

    rtext += static_cast<char>(rand()%5 + 42);
  }

  return rtext;
}


int main(){
  int size = 10;
  string text;

  cout << "Original string: " ;
  text = randString(size);
  cout << text << endl;

  istringstream parser(text);
  string token;


  cout <<"\nTokens: " << endl;
  while(getline(parser, token, ',')) {
    cout << token << endl;
  }
  cout << endl << endl;


 return 0;
}

//Q1 functions
void randCapitalLetter(int size){

  srand(time(0));
  for(int i=1; i<=size; i++)
    cout << static_cast<char>(rand()%26 + 64) << " ";
}

void randPunctuation(int size){

  srand(time(0));
  for(int i=1; i<=size; i++)
    cout << static_cast<char>(rand()%5 + 42) << " ";
}

void randNumber(int size){

  srand(time(0));
  for(int i=1; i<=size; i++)
    cout << rand()%100 << " ";
}
