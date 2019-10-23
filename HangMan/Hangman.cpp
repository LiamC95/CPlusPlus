#include "Hangman.h"
#include <iostream>

Hangman::Hangman(string word)
{
	this->word = word;
	lives = 6;
}

void Hangman::makeGuess(char c)
{
	if (!alreadyGuessed(c))
	{
		guess.push_back(c);
		bool inStr = wordHasLetter(c);
		if (!inStr)
		{
			lives--;
		}
	}
}

bool Hangman::wordHasLetter(char c)
{
	guess.push_back(c);
	for (string::size_type i = 0; i < word.size(); i++)
	{
		if (c == word[i])
		{
			return true;
			break;
		}
	}
	return false;
}

bool Hangman::alreadyGuessed(char c)
{
	for (char& c1 : guess)
	{
		if (c1 == c)
		{
			return true;
		}
	}
	return false;
}

void Hangman::printStickMan()
{
	int livesRemaining = lives;
	cout << " ----" << endl;
	cout << "|   |" << endl;
	if (livesRemaining == 6)
	{
		cout << "|    " << endl;
		cout << "|    " << endl;
		cout << "|    " << endl;
		cout << "|    " << endl;
		cout << "----" << endl;
	}
	else if (livesRemaining == 5)
	{
		cout << "|   o" << endl;
		cout << "|    " << endl;
		cout << "|    " << endl;
		cout << "|    " << endl;
		cout << "----" << endl;
	}
	else if (livesRemaining == 4)
	{
		cout << "|   o" << endl;
		cout << "|   |" << endl;
		cout << "|    " << endl;
		cout << "|    " << endl;
		cout << "----" << endl;
	}
	else if (livesRemaining == 3)
	{
		cout << "|   o" << endl;
		cout << "|  /|" << endl;
		cout << "|    " << endl;
		cout << "|    " << endl;
		cout << "----" << endl;
	}
	else if (livesRemaining == 2)
	{
		cout << "|   o" << endl;
		cout << "|  /|\\" << endl;
		cout << "|    " << endl;
		cout << "|    " << endl;
		cout << "----" << endl;
	}
	else if (livesRemaining == 1)
	{
		cout << "|   o" << endl;
		cout << "|  /|\\" << endl;
		cout << "|   |" << endl;
		cout << "|    " << endl;
		cout << "----" << endl;
	}
	else
	{
		cout << "|   o" << endl;
		cout << "|  /|\\" << endl;
		cout << "|   |" << endl;
		cout << "|  / \\" << endl;
		cout << "----" << endl;
	}
}

void Hangman::display()
{
	this->printStickMan();
	for (string::size_type i = 0; i < word.size(); i++)
	{
		if (i != 0)
		{
			cout << " ";
		}
		if (alreadyGuessed(word[i]))
		{
			cout << word[i];
		}
		else
		{
			cout << "_";
		}
	}
}

bool Hangman::gameOver()
{
	bool foundWord = true;
	for (string::size_type i = 0; i < word.size(); i++)
	{
		if (!alreadyGuessed(word[i]))
		{
			foundWord = false;
		}
	}
	return foundWord || lives == 0;
}

Hangman::~Hangman()
{

}