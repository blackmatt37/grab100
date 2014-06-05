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

	for(int i = 0; i < key.size(); i++)
	{
		fileOut << key[i];
	}

	fileOut << "\n";

	fileOut.close();
}

void generator(vector<char> &c)
{
	int count = 0;
	string alpha = "1234567890abcdefghijklmnopqrstuvwxyz";

	while(count < 40)
	{
		c.push_back(alpha[rand() % alpha.size()]);

		count++;
	}
}