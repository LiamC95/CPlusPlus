#pragma once
#include <string>
#include <list>

using namespace std;

class Hangman
{
	string word;
	list<char> guess;
	int lives;
	void printStickMan();
	bool wordHasLetter(char c);
	bool alreadyGuessed(char c);

public:
	Hangman(string word = "default");
	void makeGuess(char c);
	void display();
	bool gameOver();
	~Hangman();
};