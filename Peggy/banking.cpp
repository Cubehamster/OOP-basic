#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char accountType;
	bool checking = false, savings = false;
	double balance, deposits, withdrawals;
	
	cout<<"Is this a checking or saving account?(c/s)"<<endl;
	cin>>accountType;
	if(accountType == 'c' || accountType == 'C')
		checking = true;
	else if(accountType == 's' || accountType == 'S')
		savings = true;
	else
		{
			cout<<"Invalid Account Type";
			return 1;
		}
	cout<<"Enter current balance: $";
	cin>>balance;
	cout<<"Enter deposits $";
	cin>>deposits;	
	cout<<"Enter withdrawals $";
	cin>>withdrawals;
	balance = balance + deposits - withdrawals;
	if(checking)	
		cout<<"Your checking account balance is now: $"<<balance<<endl;
	if(savings)		
		cout<<"Your saving account balance is now: $"<<balance<<endl;
	return 0;
}
