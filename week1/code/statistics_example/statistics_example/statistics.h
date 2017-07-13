#ifndef _STATISTICS_H_
#define _STATISTICS_H_

# include<vector>

int max_vector(std::vector<int> numbers)
{
	int max = -10000;
	for (int i = 0; i != numbers.size(); i++)
	{
		if (numbers[i] > max)
			max = numbers[i];
	}
	return max;
}



#endif