// Portfolio1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    srand(time(0));  // Seed for random number generation

    int gold = 0;  // Gold counter
    bool gameOver = false;
    char continueGame;
    int randomEncounter;
    int choice;
    bool usedExtraLife;

    std:: cout << "Welcome to the Cave Adventure!\n";
    std::cout << "You start with no gold. Let's see if you survive the cave.\n";

    // Loop for moving through the cave
    while (gameOver == false) {
        std::cout << "\nYou are walking through the cave...\n";

        // Random event: 0 = monster, 1 = gift
        randomEncounter = rand() % 2; // Random number: 0 or 1

        if (randomEncounter == 0) {
            // Encounter a monster
            std::cout << "       (o)(o)   \n";
            std::cout << "        /  |     \n";
            std::cout << "     \\  |__/     \n";
            std::cout << "      \\  |       \n";
            std::cout << "     /\\ |        \n";
            std::cout << "    /  \\|        \n";
            std::cout << "   /    |        \n";
            std::cout << "  (_____)        \n";
            std::cout << "     MONSTER!!!  \n";
            std::cout << "Oh no! A monster appears!\n";
            std::cout << "You must choose how to react.\n";
            std::cout << "1. Fight the monster\n";
            std::cout << "2. Run away\n";
            std::cout << "What do you do? (1/2): ";
            std::cin >> choice;

            if (choice == 1) {
                // Fighting the monster
                if (rand() % 2 == 0) {
                    std::cout << "You defeated the monster!\n";
                    gold += 10;  // You gain gold after defeating the monster
                    if (gold >= 200) {
                        std::cout << "\nYou have reached 200 gold, YOU WON.\n ";
                        gameOver = true;
                    }
                }
                else {
                    std::cout << "The monster defeated you!\n";
                    gameOver = true;
                }
            }
            /*else if (choice == 1 && gold <= 5) {
                std::cout << "You ran back out of the cave. Game over.";
                gameOver = true;
            }*/
            else {
                // Running away
                if (gold <= 5) {
                    std::cout << "You ran back out of the cave. Game over.";
                    gameOver = true;
                } 
                else {
                    if (rand() % 2 == 0) {
                        std::cout << "You successfully ran away!\n";
                        gold += 5;  // You gain some gold for escaping
                        if (gold >= 200) {
                            std::cout << "\nYou have reached 200 gold, YOU WON.\n ";
                            gameOver = true;
                        }
                    }
                    else {
                        std::cout << "The monster caught up to you. Game over.";
                        gameOver = true;
                    }
                }
                //if (rand() % 2 == 0) {
                //    std::cout << "You successfully ran away!\n";
                //    gold += 5;  // You gain some gold for escaping
                //}
                //else {
                //    std::cout << "The monster caught up to you. Game over.";
                //    gameOver = true;
                //}
                
            }

        }
        else {
            // Encounter a gift
            std::cout << "  _______\n";
            std::cout << " /       \\\n";
            std::cout << "/  GIFT  \\\n";
            std::cout << "|         |\n";
            std::cout << "\\_______/\n";
            std::cout << "You found a gift box!";
            std::cout << "You gain 20 gold!";
            gold += 20;  // You gain gold
            if (gold >= 200) {
                std::cout << "\nYou have reached 200 gold, YOU WON.\n ";
                gameOver = true;
            }


        }

        // Question to continue or quit the game
        std::cout << "\nYour current gold: " << gold << "\n";
        std::cout << "Do you want to continue exploring the cave? (y/n): ";
        std::cin >> continueGame;

        if (continueGame == 'n' || continueGame == 'N') {
            gameOver = true;
        }
    }

    if (gameOver == true && gold >= 50) {
        std::cout << "Would you like another chance? (Cost: 50 gold) (y/n): ";
        std::cin >> continueGame; 
        if (continueGame == 'n' || continueGame == 'N') {
            std::cout << "Hope to see you soon, thanks for playing!";
        }
        else {
            gameOver = false;
            gold -= 50;
            if (gameOver == false) {
                usedExtraLife = true;
                srand(time(0));  // Seed for random number generation

                //int gold = 0;  // Gold counter
                //bool gameOver = false;
                //char continueGame;
                //int randomEncounter;
                //int choice;

                std::cout << "Welcome to the Cave Adventure!\n";
                std::cout << "You start with no gold. Let's see if you survive the cave.\n";

                // Loop for moving through the cave
                while (gameOver == false) {
                    std::cout << "\nYou are walking through the cave...\n";

                    // Random event: 0 = monster, 1 = gift
                    randomEncounter = rand() % 2; // Random number: 0 or 1

                    if (randomEncounter == 0) {
                        // Encounter a monster
                        std::cout << "       (o)(o)   \n";
                        std::cout << "        /  |     \n";
                        std::cout << "     \\  |__/     \n";
                        std::cout << "      \\  |       \n";
                        std::cout << "     /\\ |        \n";
                        std::cout << "    /  \\|        \n";
                        std::cout << "   /    |        \n";
                        std::cout << "  (_____)        \n";
                        std::cout << "     MONSTER!!!  \n";
                        std::cout << "Oh no! A monster appears!\n";
                        std::cout << "You must choose how to react.\n";
                        std::cout << "1. Fight the monster\n";
                        std::cout << "2. Run away\n";
                        std::cout << "What do you do? (1/2): ";
                        std::cin >> choice;

                        if (choice == 1) {
                            // Fighting the monster
                            if (rand() % 2 == 0) {
                                std::cout << "You defeated the monster!\n";
                                gold += 10;  // You gain gold after defeating the monster
                                if (gold >= 200) {
                                    std::cout << "\nYou have reached 200 gold, YOU WON.\n ";
                                    gameOver = true;
                                }
                            }
                            else {
                                std::cout << "The monster defeated you!\n";
                                gameOver = true;
                            }
                        }
                        /*else if (choice == 1 && gold <= 5) {
                            std::cout << "You ran back out of the cave. Game over.";
                            gameOver = true;
                        }*/
                        else {
                            // Running away
                            if (gold <= 5) {
                                std::cout << "You ran back out of the cave. Game over.";
                                gameOver = true;
                            }
                            else {
                                if (rand() % 2 == 0) {
                                    std::cout << "You successfully ran away!\n";
                                    gold += 5;  // You gain some gold for escaping
                                    if (gold >= 200) {
                                        std::cout << "\nYou have reached 200 gold, YOU WON.\n ";
                                        gameOver = true;
                                    }
                                }
                                else {
                                    std::cout << "The monster caught up to you. Game over.";
                                    gameOver = true;
                                }
                            }
                            //if (rand() % 2 == 0) {
                            //    std::cout << "You successfully ran away!\n";
                            //    gold += 5;  // You gain some gold for escaping
                            //}
                            //else {
                            //    std::cout << "The monster caught up to you. Game over.";
                            //    gameOver = true;
                            //}

                        }

                    }
                    else {
                        // Encounter a gift
                        std::cout << "  _______\n";
                        std::cout << " /       \\\n";
                        std::cout << "/  GIFT  \\\n";
                        std::cout << "|         |\n";
                        std::cout << "\\_______/\n";
                        std::cout << "You found a gift box!";
                        std::cout << "You gain 20 gold!";
                        gold += 20;  // You gain gold 
                        if (gold >= 200) {
                            std::cout << "\nYou have reached 200 gold, YOU WON.\n ";
                            gameOver = true;
                        }


                    }

                    // Question to continue or quit the game
                    std::cout << "\nYour current gold: " << gold << "\n";
                    std::cout << "Do you want to continue exploring the cave? (y/n): ";
                    std::cin >> continueGame;

                    if (continueGame == 'n' || continueGame == 'N') {
                        gameOver = true;
                    }
                }

                if (gameOver == true && gold >= 50) {
                    std::cout << "Would you like another chance? (Cost: 50 gold) (y/n): ";
                    std::cin >> continueGame;
                    if (usedExtraLife = true) {
                        std::cout << "You have already used your extra life. \n\n";
                        std::cout << "You collected " << gold << "gold!\n\n";
                        std::cout << "Thanks for playing!\n\n";
                    }
                    else {
                        if (continueGame == 'n' || continueGame == 'N') {
                            std::cout << "Hope to see you soon, thanks for playing!";
                        }
                        else {
                            gameOver = false;
                            gold -= 50;
                        }
                    }
                    
                }
                else if (usedExtraLife == true) {
                    std::cout << "You already used your extra life. Game over.\n";
                    std::cout << "You gathered " << gold << " gold!\n";
                }
                else {
                    std::cout << "You gathered " << gold << " gold!\n";
                    std::cout << "You don't have enough gold to continue. Game over.";
                    gameOver = true;
                }
            }
        }
    }
    else {
        std::cout << "You gathered " << gold << " gold!\n";
        std::cout << "You don't have enough gold to continue. Game over.";
        gameOver = true; 
    }

    


     

    //// End of game logic
    //if (gold < 50) {
    //    std::cout << "You don't have enough gold to continue the adventure...\n";
    //    std::cout << "Game over!\n";
    //}
    //else {
    //    std::cout << "Congratulations! You gathered " << gold << " gold!\n";
    //    std::cout << "You successfully completed the adventure!\n";
    //}

    return 0;
}


