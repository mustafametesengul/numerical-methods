// Mustafa Mete Şengül
// 1306170018

#include <iostream>
#include <cmath>

using namespace std;

float f(float x){
	return exp(x) + pow(2, -x) + 2 * cos(x) - 6;
}

float fd(float x){
	return exp(x) - pow(2, -x) * log(2) - 2 * sin(x);
}

int main() {	
	float x = 1.5f;
	float x_next;
	while(true){		
		x_next = x - f(x) / fd(x);
		if(abs(f(x_next) - 0) < 0.0001f){
			break;
		}
		x = x_next;
	}
	cout << x_next;
}
