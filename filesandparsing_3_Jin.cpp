// filesandparsing_hw3 – Jin Doh

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int main(){

  const int CAPACITY = 100;
  int numElements = 0;
  string arr[CAPACITY];
  string line, token;
  ifstream fin("text.txt");
  int col = 0;

  while(getline(fin, line))
  {
    istringstream parser(line);
    col = 0;

    while(getline(parser, token, ','))
    {
      if (col == 0)
          {
          arr[numElements] = token;
          numElements++;
          }
      col++;
    }
  }

  fin.close();

  for(int i=0; i < numElements; i++){
    cout << arr[i] << endl;
  }

 return 0;
}
