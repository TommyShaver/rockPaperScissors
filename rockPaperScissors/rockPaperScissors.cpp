// rockPaperScissors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <Windows.h>

using namespace std;

bool gameOver, rock, paper, scissors = false;
int tie, win, lose = 0;

// Function================================================================================================
int randNum()
{
	int f;
	return f = rand() % 3 + 1;
}


// Computer players picks logic from num gen
void computerPlayer()
{
	if (randNum() == 1)
	{
		rock = true;
	}
	if (randNum() == 2)
	{
		paper = true;
	}
	if (randNum() == 3)
	{
		scissors = true;
	}
}



//Main ========================================================================================================
int main()
{
	while (!gameOver)
	{
		bool rock, paper, scissors = false;
		string player1; 
		randNum();
		computerPlayer();
		cout << "Win: " << win << " Loss: " << lose << " Tie: " << tie << endl;
		cout << "Please choose rock, paper, or scissors" << endl << endl;
		
		cout << "(Type quit to end the game.)" << endl << endl;
		cin >> player1;
		system("CLS");
	


		//Game Logic =================================================
		system("CLS");
		cout << "					ROCK!!!";
		Sleep(1000);
		system("CLS");
		cout << "					PAPER!!!";
		Sleep(1000);
		system("CLS");
		cout << "					SCISSORS!!!";
		Sleep(1000);
		system("CLS");

		//Rock ===================================================
		if (player1 == "rock" && randNum() == 1)
		{
			cout << "Tie, try again" << endl;
			tie++;
			
			
		}
		if (player1 == "rock" && randNum() == 2)
		{
			cout << "You lose! try again" << endl;
			lose++;
			
			
		}
		if (player1 == "rock" && randNum() == 3)
		{
			cout << "You win!!!" << endl;
			win++;
			
			

		}


		//Paper ==================================================
		if (player1 == "paper" && randNum() == 2)
		{
			cout << "Tie, try again" << endl;
			tie++;
			
			
		}
		if (player1 == "paper" && randNum() == 3)
		{
			cout << "You lose! try again" << endl;
			lose++;
			
			
		}
		if (player1 == "paper" && randNum() == 1)
		{
			cout << "You win!!!" << endl;
			win++;
			
			

		}

		//Scissors ===============================================
		if (player1 == "scissors" && randNum() == 3)
		{
			cout << "Tie, try again" << endl;
			tie++;
			
			
		}
		if (player1 == "scissors" && randNum() == 1)
		{
			cout << "You lose! try again" << endl;
			lose++;
			
			
		}
		if (player1 == "scissors" && randNum() == 2)
		{
			cout << "You win!!!" << endl;
			win++;
			
			

		}
		//Clean up ================================================
		if (player1 == "quit")
		{
			system("CLS");
			cout << "Thanks for playing!!!" << endl;
			cout << "Win: " << win << " Loss: " << lose << " Tie: " << tie << endl;
			system("pause");
			gameOver = true;
		}
		Sleep(1000);
		system("CLS");
	}


	return 0;
}

