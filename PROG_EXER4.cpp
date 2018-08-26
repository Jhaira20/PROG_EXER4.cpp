/*
Determine the Force in a body
and the number of the rice bags in one metric ton
*/
#include <iostream>
using namespace std;
int main() 
{
	float m1,m2,d,F;
	const double k=0.0000000667;
	float num;
	float lb;
	cout << "Determining the Force" << endl;
	cout << "Enter the first mass :" ;
	cin >> m1;
	cout << "Enter the second mass :" ;
	cin >> m2;
	cout << "Enter the distance :" ;
	cin >> d;
	cout << "Determining the number of rice bag" << endl;
	cout << "Enter the amount of rice in bag in pound :";
	cin >> lb;
	
	 F=k*((m1*m2)/(d*d));
	 num = 2205/lb;
	 cout << "The number of bags of rice in one metric ton is :" << num << endl;
	 cout << "The Force is :"<< F << endl;

	return 0;
}
