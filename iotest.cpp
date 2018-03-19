#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ofstream myfile;
  myfile.open("test.dat");
  myfile << "1";
  myfile.close();
  return 0;
}
