#include <iostream>
#include <stdlib.h>
#include <fstream>

#include "database.h"

void dataHeader()
{
	system( "clear" );
	std::cout << "DATABASE MANAGER" << std::endl;
}

void databaseManager()
{
	int choice;

	while ( choice < 1 || choice > 4 )
	{
		dataHeader();
		std::cout << "( 1 )    Search for item" << std::endl;
		std::cout << "( 2 )    Add item" << std::endl;
		std::cout << "( 3 )    Add to list" << std::endl;
		std::cout << "( 4 )    Remove item" << std::endl;
		std::cout << ">> ";
		std::cin >> choice;
	}

	switch ( choice )
	{
		case 1:
			std::cout << "Searching..." << std::endl;
			break;
		case 2:
			std::cout << "Adding item..." << std::endl;
			break;
		case 3:
			std::cout << "Adding to list..." << std::endl;
			break;
		case 4:
			std::cout << "Removing item..." << std::endl;
			break;
	}
}
