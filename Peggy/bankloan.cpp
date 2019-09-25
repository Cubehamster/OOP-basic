#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double balance,monthlyPmt, interest, totalpaid;
	int months{0};
	cout<<"Enter initial loan balance: $";
	cin>>balance;
	cout<<"Enter monthly interestrate percentage: ";
	cin>>interest;
	cout<<"Enter monthly payment: $";
	cin>>monthlyPmt;
	while(balance > 0)	
	{
		balance = balance * (1 + interest/100);
		balance -= monthlyPmt;
		months++;
	}
	totalpaid = months * monthlyPmt + balance;
	cout<<"Your loan will be paid of in "<<months<<" months"<<endl;
	cout<<"You will have paid $"<<totalpaid<<endl;
	return 0;
}
