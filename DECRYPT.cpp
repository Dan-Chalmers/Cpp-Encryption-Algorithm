/*
Title: Encryption (Decrypt) for Client/Server Communication
Author: Daniel J Chalmers
Date: 05/03/20 - 07/03/20
Part of BSc Computer Science, Module 4007CEM: Activity Led Learning, Coventry University
Project Co-Authors: Daniel Perks, Harrison Duffield, Robert Crabtree
For integration with 'ENCRYPT', 'Server' and 'Client' .cpp files
***EXECUTION IN ISOLAION REQUIRES INPUTTED DATA (nothing imported)***
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string encodedString;
	cout << "Enter your encoded string\n>";
	getline(cin, encodedString);
	char randomSubset;
	randomSubset = encodedString[0];
	encodedString.erase(0, 6);
	vector<int> vec;

	for (size_t i = 0; i < encodedString.size(); ++i)
	{
		vec.push_back(encodedString[i] - '0'); // The digits will be in the same order as before
	}

	int n = 0;
	int a = encodedString.length();
	a = a / 2;
	vector<char> decodedVector;

	for (int i = 0; i < a; ++i)
	{
		int subset = vec[n];
		int index = vec[n + 1];
		n = n + 2;

		if (randomSubset == '3')
		{
			char subset1[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I' };
			char subset2[] = { 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R' };
			char subset3[] = { 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', ' ' };
			char subset4[] = { '.', ',', '?', '!', '%', '-', '+', '0', '1' };
			char subset5[] = { '2', '3', '4', '5', '6', '7', '8', '9', 'a' };
			char subset6[] = { 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' };
			char subset7[] = { 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's' };
			char subset8[] = { 't', 'u', 'v', 'w', 'x', 'y', 'z', '\'' };
			if (subset == 1)
			{
				char character = subset1[index - 1];
				decodedVector.push_back(character);
			}
			else if (subset == 2)
			{
				char character = subset2[index - 1];
				decodedVector.push_back(character);
			}
			else if (subset == 3)
			{
				char character = subset3[index - 1];
				decodedVector.push_back(character);
			}
			else if (subset == 4)
			{
				char character = subset4[index - 1];
				decodedVector.push_back(character);
			}
			else if (subset == 5)
			{
				char character = subset5[index - 1];
				decodedVector.push_back(character);
			}
			else if (subset == 6)
			{
				char character = subset6[index - 1];
				decodedVector.push_back(character);
			}
			else if (subset == 7)
			{
				char character = subset7[index - 1];
				decodedVector.push_back(character);
			}
			else if (subset == 8)
			{
				char character = subset8[index - 1];
				decodedVector.push_back(character);
			}
		}
		else if (randomSubset == '4')
		{
			char subset1[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H' };
			char subset2[] = { 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P' };
			char subset3[] = { 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X' };
			char subset4[] = { 'Y', 'Z', ' ', '.', ',', '?', '!', '%' };
			char subset5[] = { '-', '+', '0', '1', '2', '3', '4', '5' };
			char subset6[] = { '6', '7', '8', '9', 'a', 'b', 'c', 'd' };
			char subset7[] = { 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l' };
			char subset8[] = { 'm', 'n', 'o', 'p', 'q', 'r', 's', 't' };
			char subset9[] = { 'u', 'v', 'w', 'x', 'y', 'z', '\'' };
			if (subset == 1)
			{
				char character = subset1[index - 1];
				decodedVector.push_back(character);
			}
			else if (subset == 2)
			{
				char character = subset2[index - 1];
				decodedVector.push_back(character);
			}
			else if (subset == 3)
			{
				char character = subset3[index - 1];
				decodedVector.push_back(character);
			}
			else if (subset == 4)
			{
				char character = subset4[index - 1];
				decodedVector.push_back(character);
			}
			else if (subset == 5)
			{
				char character = subset5[index - 1];
				decodedVector.push_back(character);
			}
			else if (subset == 6)
			{
				char character = subset6[index - 1];
				decodedVector.push_back(character);
			}
			else if (subset == 7)
			{
				char character = subset7[index - 1];
				decodedVector.push_back(character);
			}
			else if (subset == 8)
			{
				char character = subset8[index - 1];
				decodedVector.push_back(character);
			}
			else if (subset == 9)
			{
				char character = subset9[index - 1];
				decodedVector.push_back(character);
			}
		}
	}
	cout << "\n";
	for(vector<char>::const_iterator i = decodedVector.begin(); i != decodedVector.end(); ++i)
	{
		cout << *i << "";
	}
	cout << "\n";
	
}

// Written in Microsoft Visual Studio Community 2019