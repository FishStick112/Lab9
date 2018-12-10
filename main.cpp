// Matthew Sundberg
// COSC 2030-01
// Lab 9
// 12-10-2018

#include <iostream>
#include <map>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::ifstream;
using std::ofstream;
using std::string;

int main()
{
	map<string, int> tally;
	int index = -1;
	string word;
	ifstream inFile;
	ofstream outFile;

	inFile.open("example.txt");

	while (inFile >> word)
	{
		tally.insert(std::pair<string, int>(word, index + 1));
	}

	inFile.close();

	outFile.open("output.txt");

	for (auto i = tally.begin(); i != tally.end(); i++)
	{
		outFile << i->first << endl;
	}

	outFile.close();

	return 0;
}