#include <iostream>

#include <string>


void clearer()
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main()
{

	int day;
	std::cout << "Hello! Please enter what day of the week it is in number format! (I.E. Monday - 1, Tuesday - 2, ETC\n";
	while (true)
	{
		if (!std::cin)
		{
			std::cin.clear(); // reset user op thingy
			clearer();
		}

		std::cin >> day;

		switch (day)
		{
		case 1:
			std::cout << "You have entered - Monday! ";
			break;
		case 2:
			std::cout << "You have entered - Tuesday!";
			break;
		case 3:
			std::cout << "You have entered - Wednesday!";
			break;
		case 4:
			std::cout << "You have entered - Thursday!";
			break;
		case 5:
			std::cout << "You have entered - Friday!";
			break;
		case 6:
			std::cout << "You have entered - Saturday!";
			break;
		case 7:
			std::cout << "You have entered - Sunday!";
			break;

		default:
			std::cout << "Error. There are not that many days in a week! Please try again.";
		}
		std::cout << '\n';

		clearer();


	}

}
