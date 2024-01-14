#include<iostream>
#include<vector>

void printVector(std::vector<int> &v)
{
	for (int i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;
}

void generateJacobsthalNumbers(int n, std::vector<int> &v)
{
	v.push_back(0);
	if (n == 1)
		return;
	v.push_back(1);
	if (n == 2)
		return;
	for (int i = 2; i < n; i++){
		v.push_back(v[i - 1] + 2 * v[i - 2]);
	}
}
	// the current vector element are 0 1 3 5 11
	// the missing numbers are 2 4 6 7 8 9 10
	// the output should be 0 1 3 2 5 4 10 9 8 7 6 11

void fillMissingNumbers(std::vector<int> &v)
{
    std::vector<int> missing;
	int i = 0;
	int j = 0;
	while (i < v.size() - 1)
	{
		j = v[i];
		if (i == v[j])
			i++;
		else
		{
			
		}
	}
	printVector(missing);
}


int main()
{
	int n = 6;
	std::vector<int> v;

	generateJacobsthalNumbers(n, v);
	std::cout << "sequence: ";
	printVector(v);
	v.erase(v.begin() + 2);
	fillMissingNumbers(v);
	std::cout << "modfied: ";
	printVector(v);
	return 0;
}
