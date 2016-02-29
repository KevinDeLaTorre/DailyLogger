#include <iostream>
#include <stdlib.h>

#include "diary.h"

void diaryHeader()
{
	system( "clear" );
	std::cout << "DIARY" << std::endl;
}

void diary()
{
	int choice;

	while ( choice < 1 || choice > 2 )
	{
		diaryHeader();
		std::cout << "( 1 )    Enter status" << std::endl;
		std::cout << "( 2 )    Enter log" << std::endl;
		std::cout << ">> ";
		std::cin >> choice;
	}

	switch ( choice )
	{
		case 1:
			std::cout << "Entering status..." << std::endl;
			break;
		case 2:
			std::cout << "Entering log..." << std::endl;
			break;
	}
}
