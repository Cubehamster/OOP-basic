#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int global = 10;

void function1(int local3)
{
	int local1 = 20;
	local1 +=global;
	cout<<"from function1: "<<local1<<endl;
	cout<<local3<<endl;
}

int main(int argc, char** argv) {
	int local2 = 30;
	local2 += global;
	cout<<"from main: "<<local2<<endl;
	function1(100);
	return 0;
}
