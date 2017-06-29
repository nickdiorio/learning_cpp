#ifndef _STATISTICS_H_
#define _STATISTICS_H_

// O(N) - linear
double vector_mean(std::vector<int> numbers)
{
	double sum = 0.;
	int N = numbers.size();
	for (int i = 0; i !=N ; i++)
		sum += numbers[i];
	return sum / double(N);
}

// O(N) - linear
int vector_max(std::vector<int> numbers)
{
	int max = numbers[0];
	for (int i = 1; i != numbers.size(); i++)
	{
		if (numbers[i] > max)
			max = numbers[i];
	}
	return max;
}

// O(N) - linear
int vector_min(std::vector<int> numbers)
{
	int min = numbers[0];
	for (int i = 1; i != numbers.size(); i++)
	{
		if (numbers[i] < min)
			min = numbers[i];
	}
	return min;
	// Pras
}
#endif