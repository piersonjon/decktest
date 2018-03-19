#include <iostream>
#include <string>

using namespace std;

int fib(int t) {
  switch (t) {
    case 0: return 0;
    case 1: return 1;
    default: return (fib(t)+fib(t-1));
  }
  //fibonacci!
}

int main() {
  for (int i=0;i<10;i++) {
    printf("Fibonacci %i: %i\n",i,fib(i));
  }
  return 0;
}
