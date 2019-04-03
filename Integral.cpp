#include <iostream>
#include<math.h>

using namespace std;
#define f exp

float trapezoidal(int x0, int x1);
float simpson(int x0, int x1);
float ThreeEights(int x0, int x1);
float boole(int x0, int x1);

int main() {
	
  float x0, x1;

  cout<<"Please enter x0: ";
  cin>>x0;

  cout<<"Please enter x1: ";
  cin>>x1;

  cout << "Boole rule: " << boole(x0, x1) << endl;
	cout << "Simpson's rule: " << simpson(x0, x1) << endl;
	cout << "Trapezoidal rule: " << trapezoidal(x0, x1) << endl;
	cout << "Simpson's Three-Eights rule: " << ThreeEights(x0, x1) << endl;
}

float trapezoidal(int x0, int x1){
	float h = (x1 - x0);
	return h/2 * (f(x0) + f(x1));
}

float simpson(int x0, int x1){
  float h = (x1 - x0) / 2;
  return h/3 * (f(x0)  + 4*f(x0+h) + f(x1));
}

float simpsonThreeEights(int x0, int x1){
  float h = (x1 - x0) / 3;
  return 3*h/8 * (f(x0) + f(x1) + 3*f(x0+h) + 3*f(x0+2*h));
}

float boole(int x0, int x1){
  float h = (x1 - x0) / 4;
  return 2*h/45 * (7*f(x0) + 32*(x0 + h) + 12*f(x0 + 2*h) + 32*f(x0 + 3*h) + 7*f(x1));
}
