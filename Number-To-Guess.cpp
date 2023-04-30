#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

//int random = offset + (rand() % range);

int main() {


    cout << "\n\t\t\tWelcome Guys! It's a GUESStheNUMBER game .... " << endl;
    cout << "You have to guess a number between 1 and 100. You'll have limited choices based on the level you choose. Good Luck GUys!" << endl;
    //game loop is infinite
    while (true)
    {
        cout << "\nWhich level YOu want to Play: \n";
        cout << "1 for Easy!\t";
        cout << "2 for Medium!\t";
        cout << "3 for Difficult!\t";
        cout << "0 for End & EXIT!\n" << endl;

        int level;
        cout << "Enter the number: ";
        cin >> level;

        srand(time(0));//null the sheet
        int correctNumber = 1 + (rand() % 100);
        int guessedbyPlayer;

        if (level == 1)
        {
            //we will give 10 choices here for player
            cout << "\nYou have 10 choices for guessing the CORRECT number between 1 and 100.";
            int choicesLeft = 10;
            for (int i = 1;i <= 10;i++)
            {
                cout << "\n\nEnter the number: ";
                cin >> guessedbyPlayer;
                if (guessedbyPlayer == correctNumber)
                {
                    cout << "Well played! You won, " << guessedbyPlayer << " is the CORRECT number" << endl;
                    cout << "\t\t\t Thanks for playing...." << endl;
                    cout << "Play the game again with us!!\n\n" << endl;
                    break;
                }
                else
                {
                    cout << "Nope, " << guessedbyPlayer << " is not the right number\n";
                    if (guessedbyPlayer > correctNumber)
                    {
                        cout << "The CORRECT number is smaller than the number you have chosen" << endl;
                    }
                    else {
                        cout << "The CORRECT number is greater than the number you have chosen" << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. " << endl;
                    if (choicesLeft == 0)
                    {
                        cout << "You couldn't find the CORRECT number, it was " << correctNumber << ", You lose!!\n\n";
                        cout << "Play the game again to win!!!\n\n";
                    }
                }

            }
        }
        else if (level == 2)
        {
            cout << "\nYou have 7 choices for finding the CORRECT number between 1 and 100.";
            int choicesLeft = 7;
            for (int i = 1;i <= 7;i++) {
                cout << "\n\nEnter the number: ";
                cin >> guessedbyPlayer;
                if (guessedbyPlayer == correctNumber)
                {
                    cout << "Well played! You won, " << guessedbyPlayer << " is the CORRECT number" << endl;
                    cout << "\t\t\t Thanks for playing...." << endl;
                    cout << "Play the game again with us!!\n\n" << endl;
                    break;
                }
                else
                {
                    cout << "Nope, " << guessedbyPlayer << " is not the right number\n";
                    if (guessedbyPlayer > correctNumber)
                    {
                        cout << "The CORRECT number is smaller than the number you have chosen" << endl;
                    }
                    else
                    {
                        cout << "The CORRECT number is greater than the number you have chosen" << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. " << endl;
                    if (choicesLeft == 0)
                    {
                        cout << "You couldn't find the CORRECT number, it was " << correctNumber << ", You lose!!\n\n";
                        cout << "Play the game again to win!!!\n\n";
                    }
                }

            }
        }
        else if (level == 3)
        {
            cout << "\nYou have 5 choices for finding the CORRECT number between 1 and 100.";
            int choicesLeft = 5;
            for (int i = 1;i <= 5;i++)
            {
                cout << "\n\nEnter the number: ";
                cin >> guessedbyPlayer;
                if (guessedbyPlayer == correctNumber)
                {
                    cout << "Well played! You won, " << guessedbyPlayer << " is the CORRECT number" << endl;
                    cout << "\t\t\t Thanks for playing...." << endl;
                    cout << "Play the game again with us!!\n\n" << endl;
                    break;
                }
                else
                {
                    cout << "Nope, " << guessedbyPlayer << " is not the right number\n";
                    if (guessedbyPlayer > correctNumber)
                    {
                        cout << "The CORRECT number is smaller than the number you have chosen" << endl;
                    }
                    else {
                        cout << "The CORRECT number is greater than the number you have chosen" << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. " << endl;
                    if (choicesLeft == 0)
                    {
                        cout << "You couldn't find the CORRECT number, it was " << correctNumber << ", You lose!!\n\n";
                        cout << "Play the game again to win!!!\n\n";
                    }
                }
            }
        }
        else if (level == 0)
        {
            exit(0);
        }
        else
        {
            cout << "OH!!!  Wrong choice, Enter valid choice to play the game! { 0 - 1 - 2 - 3 }" << endl;
        }
    }
    return 0;
}