#include<iostream>
#include<string>

using namespace std;

int main()
{
	int numPeople = 0;
	double tax = 0;
	double priseSh = 0, priseU = 0;

	cin >> numPeople >> tax >> priseSh >> priseU;

	double taxEnter = numPeople * tax;
	double sumSh = ceil(numPeople * 0.75) * priseSh;
	double sumU = ceil(numPeople * 0.5) * priseU;
	
	cout.setf(ios::fixed);
	cout.precision(2);

	cout << taxEnter + sumSh + sumU << " lv." << endl;

	system("pause");
	return 0;
}