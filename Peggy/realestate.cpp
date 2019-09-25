#include <iostream>
#include <iomanip>
#include <string>;
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string lname;
	double listingprice;
	double sellercost = 0.06;
	double agentcommision = 0.15;
	cout<<"Enter homeowner's last name: ";
	cin>>lname;
	cout<<"Enter the sales price for the house: (no commas or deciaml points) ";
	cin>>listingprice;
	cout<<"\tHome Owner\tPrice of Home\tSeller's Cost\tAgent's Commission"<<endl;
	cout<<"\t"<<left<<setw(16)<<lname<<"$"<<listingprice<<"\t\t$"<<listingprice*sellercost<<"\t\t$"<<listingprice*agentcommision<<endl;
	return 0;
}
