// Program to do basic statistics 
#include <iostream>
#include <vector>
#include <cmath>
#include "statistics.h"
 
int main()
{
	// get the number of integers
	int N = 0;
	std::cout << "Number of integers: ";
	std::cin >> N;

	// get the integers
	std::vector<int> numbers;
	numbers.reserve(N);

	// count statistics as we go
	double sum = 0.;
	double mean = 0.;
	int min = 1e16, max=-1e16;
	for (int i = 0; i != N; i++)
	{
		int tmp = 0;
		std::cout << "Enter number: ";
		std::cin >> tmp;
		numbers.push_back(tmp);

		sum += tmp;
		if (tmp < min)
			min = tmp;
		if (tmp > max)
			max = tmp;
	}
	
	std::cout << "Using accumulated statistics\n";
	std::cout << "Mean " << sum / double(N) << "\n";
	std::cout << "Max: " << max << "\n";
	std::cout << "Min: " << min << "\n";
	std::cout << "Range: " << max - min << "\n";

	// OR use user-defined library
	std::cout << "Using library functions\n";
	std::cout << "Mean " << vector_mean(numbers) << "\n";
	std::cout << "Max: " << vector_max(numbers) << "\n";
	std::cout << "Min: " << vector_min(numbers) << "\n";
	std::cout << "Range: " << vector_max(numbers) - vector_min(numbers) << "\n";
	
	system("pause");
}

