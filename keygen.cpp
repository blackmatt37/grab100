#include <iostream>
#include <vector>
#include <ctime>
#include <string>
#include <fstream>

using namespace std;

void generator(vector<char> &c);

int main()
{
	srand(time(NULL));

	vector<char> key;
	ofstream  fileOut ("key.txt");

	generator(key);

	for(int j = 0; j < key.size(); j++)
	{
		fileOut << key[j];
	}

	fileOut << "\n";

	fileOut.close();
}

void generator(vector<char> &c)
{
	int i = 0;
	string alpha = "1234567890abcdefghijklmnopqrstuvwxyz";

	while(i < 40)
	{
		c.push_back(alpha[rand() % alpha.size()]);

		i++;
	}
}