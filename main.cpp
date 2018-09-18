// app.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>

int main()
{
	std::cout << "Hello World!" << std::endl;
	
	std::string znak;

	std::cout << "Zadajte retazec: " << std::endl;
	std::cin >> znak;
	std::cout << "Vase retazec je: " << znak << std::endl;
	system("pause");
		
	return 0;
}
