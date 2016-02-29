// Author: Kevin De La Torre
// Program: Fitness Program

#include <iostream>
#include <stdlib.h>

#include "diary.h"
#include "database.h"

int main()
{
	int choice;

	while ( choice < 1 || choice > 3 ) // If choice is not valid loop.
	{
		system( "clear" );
		std::cout << "Welcome to your daily logger, what would you like to do?" << std::endl;
		std::cout << "( 1 )    Diary" << std::endl;
		std::cout << "( 2 )    Database Manager" << std::endl;
		std::cout << "( 3 )    Exit" << std::endl;
		std::cout << ">> ";
		std::cin >> choice;
	}

	switch ( choice ) {
		case 1:
			diary();
			break;
		case 2:
			databaseManager();
			break;
		case 3:
			system( "clear" );
			break;
	}
}
