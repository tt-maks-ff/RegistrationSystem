#include <iostream>

int main()
{
    while (true) {

        std::system("cls");
        std::cout << "1. Login to existing account" << std::endl;
        std::cout << "2. Create a new account" << std::endl;
        std::cout << "0. Exit" << std::endl;

        int choice;
        std::cin >> choice;
        std::cin.get();

        switch (choice)
        {
        case 0: return 0;

        case 1: {
            // login to existing account

            break;
        }
        case 2: {
            // creating a new account

            break;
        }
        default:
            std::cout << "Incorrect number. Try again" << std::endl;
            std::system("pause");

            break;
        }

    }

    return 0;
}
