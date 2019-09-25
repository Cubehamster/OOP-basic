#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	int Principal {500};
	double rate {.02};
	int time {5};
	float interest = Principal * rate * time;
	cout << interest << endl;
	return 0;
}
