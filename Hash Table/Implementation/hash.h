#include <iostream>
#include <cstdlib>
#include <string>

#ifndef HASH_H
#define HASH_H

class hash
{
private:
	static const int tableSize = 4;
	struct item
	{
		std::string name;
		std::string drink;
		item* next;
	};

	item* HashTable[tableSize];

public:
	hash();
	int Hash(std::string key);
	void AddItem(std::string name, std::string drink);
	int NumberOfItemsInIndex(int index);
	void PrintTable();
	void PrintItemsInIndex(int index);
	void FindDrink(std::string name);
	void RemoveItem(std::string name);
	void mainProgram();
};

#endif // !HASH_H