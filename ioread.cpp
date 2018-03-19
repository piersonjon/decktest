#include <iostream>
#include <fstream>

using namespace std;

int main() {
  string data;
  ifstream myfile ("test.dat");
  if (myfile.is_open()) {
    while (getline(myfile,data)) {
      if (data.compare("0")==0) {
        cout << "You saved a zero.\n";
      }
      else {
        cout << "You saved a non-zero.\n";
      }
    }
    myfile.close();
  }
  else {
    cout << "File read error.\n";
  }
  return 0;
}
