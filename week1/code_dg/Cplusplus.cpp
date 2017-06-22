#include <stdlib.h>
#include <string>
#include <iostream>

#include "toolbox.h"

using namespace std;

int main()
{
	int n = -1;
	int tmp = 0;
	double nmean = 0;
	int nmax = 0;
	int nmin = INT_MAX;
	int nrange = 0;

	string request = "Enter number of integers: \n";
	n = get_input(request);

	request = "Enter an integer: ";
	for (int i = 0; i < n; i++){
		int n = get_input(request);
		if (n > nmax) nmax = n;
		if (n < nmin) nmin = n;
		nmean += n;
	}

	nmean /= n;
	cout << "Mean: " << nmean << endl;
	cout << "Max: " << nmax << endl;
	cout << "Min: " << nmin << endl;
	cout << "Range: " << nmax - nmin << endl;

	cin.get();
	return 0;
}

