#include<stdio.h> // importing C langage
#include<iostream> // importing C++
#include<string.h> // imorting strings
#include<time.h> //time functions library


int main()
{
	std::cout << "Welcome to the game, your mission is to escape the prison which you are being held in" << std::endl;
	std::cout << "-------------------------------------------------------------------------------------" << std::endl;
	std::cout << "Your head hurts, you got strongly hit in a head just the second ago as you remember, woke up in small room" << std::endl;
	int unlock1 = 0;
	int random = 0;
	int lock1 = 0;
	bool menu = true;
	int fill = 0;

	do
	{
		int answer = 0;


		std::cout << "What can I do, that question started to repeat in your mind" << std::endl;
		std::cout << "-----------------------------------------------------------" << std::endl;
		std::cout << "1. Search the room" << std::endl;
		std::cout << "2. Check what can you see outside" << std::endl;
		if (lock1 == 0)
		{
			std::cout << "3. Check the doors" << std::endl;
		}
		if (lock1 == 1)
		{
			std::cout << "3. Try to unlock the doors" << std::endl;
		}
		if (lock1 == 2)
		{
			std::cout << "3. Leave the room" << std::endl;
		}
		std::cout << "4. Give up" << std::endl;
		if (unlock1 == 1)
		{
			std::cout << "5. *Unlocked* Read the note" << std::endl;
			int unlock1 = 2;
		}
		if (unlock1 == 2)
		{
			std::cout << "5. Read the note" << std::endl;
		}
		std::cin >> answer;
		switch (answer)
		{
		case 1:
			std::cout << "You found a wierd key, you can move parts of it around. Maybe it can fit multiple doors ?" << std::endl;
			std::cout << "After a few seconds you found a note under the chair" << std::endl;
			lock1 = 1;
			break;
		case 2:
			std::cout << "You cannot see anything, it is dark and rainy" << std::endl;
			std::cout << "Wander a bit around the room quite hopeless" << std::endl;
			break;
		case 3:
			if (lock1 == 0)
			{
				std::cout << "The dors are clearly locked, cold and made from steel. You cant kick them off." << std::endl;
				std::cout << "You spotted 2 holes for a key" << std::endl;
			}
			if (lock1 == 1)
			{
				std::cout << "You have found the key is nearly fitting the whole, as you spoted before you can rotate parts of it" << std::endl;
				std::cout << "---------------------------------------------------------------------------------------------------" << std::endl;
				std::cout << "To unlock the first door you need to hit nr 5 on a dice" << std::endl;
				bool roll1 = true;
				bool roll2 = true;
				do
				{
					int fill = 0;
					random = rand() % 6 + 1;
					std::cout << "Press Return to roll" << std::endl;
					system("pause");
					std::cout << "You rolled " << random << std::endl;
					if (random == 5)
					{
						std::cout << "You got it, first lock unlocked" << std::endl;
						roll1 = false;
					}
					else
					{
						std::cout << "Oh shit, you rolled " << random << std::endl;
					}

				} while (roll1 == true);
				std::cout << "You need to roll 1 to open that lock !" << std::endl;
				do
				{
					random = rand() % 6 + 1;
					std::cout << "Write Roll to roll" << std::endl;
					system("pause");
					std::cout << "You rolled " << random << std::endl;
					if (random == 1)
					{
						std::cout << "You got it, dors are now unlocked" << std::endl;
						roll2 = false;
					}
					else
					{
						std::cout << "Oh shit, you rolled " << random << std::endl;
					}
				} while (roll2 == true);
				std::cout << "You unlocked the door !" << std::endl;
				lock1 = 2;
				break;
			}
			if (lock1 == 2)
			{
				std::cout << "You finished the game !" << std::endl;
				return 0;
				break;
			}
			break;
		case 5:
			std::cout << "to be continued" << std::endl;
			break;
		case 4:
			std::cout << "You gave up" << std::endl;
			return 0;
			break;
		}
		


	} while (menu == true);
	return 0;
}