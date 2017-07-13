#include <iostream>
#include <vector>

#include "statistics.h"

int main()
{
	// Get number of inputs to do statistics
	std::cout << "Enter number of inputs: ";
	int N = 0;
	std::cin >> N;

	// Get numbers
	std::vector<int> x_vals;
	x_vals.reserve(N);

	int max = -100000;
	int min = 100000;
	int sum = 0;
	int range = 0;

	for (int i = 0; i != N; i++)
	{
		int tmp = 0;
		std::cout << "Enter number: ";
		std::cin >> tmp;
		x_vals.push_back(tmp);

		if (tmp > max)
			max = tmp;
		if (tmp < min)
			min = tmp;

		sum += tmp;
	}
	
	std::cout << "Simple calculation\n";
	std::cout << "Max: " << max << "\n";
	std::cout << "Min: " << min << "\n";
	std::cout << "Mean: " << double(sum) / N << "\n";
	std::cout << "Range: " << max - min << "\n";

	std::cout << "Library calculation\n";
	std::cout << "Max: " << max_vector(x_vals) << "\n";
	system("pause");
	return 0;
}