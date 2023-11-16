﻿#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status { CONTINUE, WON, LOST };
int rollDice(void);

int main(void)
{
	srand(time(NULL));
	int myPoint = 0;
	enum Status gameStatus = CONTINUE;
	int sum;

	while (gameStatus == CONTINUE)
	{
		sum = rollDice();

		if (myPoint == 0)
		{
			switch (sum)
			{
			case 7:
			case 11:
				gameStatus = WON;
				break;
			case 2:
			case 3:
			case 12:
				gameStatus = LOST;
				break;
			default:
				myPoint = sum;
				printf("Point is %d\n", myPoint);
				break;
			}
		}
		else
		{
			if (sum == 7)
			{
				gameStatus = LOST;
			}
			else if (sum == myPoint)
			{
				gameStatus = WON;
			}
		}
	}

	if (gameStatus == WON)
	{
		printf("Player wins\n");
	}
	else
	{
		printf("Player loses\n");
	}

	system("pause");
	return 0;
}

int rollDice(void)
{
	int die1 = 1 + rand() % 6;
	int die2 = 1 + rand() % 6;
	int workSum = die1 + die2;

	printf("Player rolled %d + %d = %d\n", die1, die2, workSum);
	return workSum;
}