#include <iostream>
#include <cmath>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float x {.7};
	if(abs(x-.7)<0.001)
		cout<<"They are the same";
	else
	{
		cout<<"Thenumbers are different"<<endl;
		cout<<x;
	}

	return 0;
}
