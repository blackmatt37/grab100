#include <iostream>
#include <vector>
#include <ctime>
#include <string>

using namespace std;

int main()
{
	srand(time(NULL));
	vector<char> key;
	string alpha = "1234567890abcdefghijklmnopqrstuvwxyz";

	for(int i = 0; i < 40; i++)
	{
		key.push_back(alpha[rand() % 36]);
	}

	for(int j = 0; j < key.size(); j++)
	{
		cout << key[j];
	}

	cout << "\n";
}