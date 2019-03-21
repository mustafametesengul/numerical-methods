#include <iostream>
#include<fstream>

using namespace std;

int main()
{
	float x[1000];
	float y[1000];
	
	ifstream infile("veri.txt");
	infile.ignore(4, '\n');
	
	int len = 0;
	float a, b;
	
	while (infile >> a >> b) {
		x[len] = a;
		y[len] = b;
		len++;
	}

	float h = x[1] - x[0];

	for(int i = 0; i < len; i++){

		float d;

		if(i == 0){
			d = (0.5/h) * (4 * y[i+1] - 3 * y[i] - y[i+2]);
		}
		else if(i == len - 1){
			d = (0.5/h) * (y[i-2] - 4 * y[i-1] + 3 * y[i]);			
		}
		else {
			d = (0.5/h) * (y[i+1] - y[i-1]);
		}
		cout << "f'(" << x[i] << ")= " << d << endl;

	}
}
