#include <iostream>
#include <fstream>

float lagrange(float);

int main() {
  std::cout << lagrange(3.8);
}

float lagrange(float input){
	
	std::ifstream infile("data.txt");
	
	float x[1000];
	float y[1000];
		
	float a, b;
	int len = 0;
	while (infile >> a >> b)
	{
		x[len] = a;
		y[len] = b;
		len++;
	}

	float sum = 0;
	for(int i = 0; i < len; i++){
		float product = 1;
		for(int j = 0; j < len; j++){
			if(i != j){
				product *= (input - x[j]) / (x[i] - x[j]);
			}
		}
		sum += product * y[i];
	}

	return sum;
}