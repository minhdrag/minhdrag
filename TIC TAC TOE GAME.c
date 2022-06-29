#include <stdio.h>
#include <stdlib.h>

char square[10]= {'o','1','2','3','4','5','6','7','8','9'};

void board();
int checkwin();

int main()
{
	int player = 1, i, choice = 0;
	
	char mark;
	do
	{
		board();
		player = (player % 2) ? 1 : 2;
		
		printf("Player %d, enter the number: ", player);
		scanf("%d", &choice);
		
		mark = (player == 1) ? 'X' : 'O';
		
		if(square[1] == '1' && choice == 1) 
			square[1] = mark;
			
		else if (square[2] == '2' && choice == 2)
			square [2] = mark;
			
		else if (square[3] == '3' && choice == 3)
			square [3] = mark;
			
		else if (square[4] == '4' && choice == 4)
			square [4] = mark;
			
		else if (square[5] == '5' && choice == 5)
			square [5] = mark;
			
		else if (square[6] == '6' && choice == 6)
			square [6] = mark;
			
		else if (square[7] == '7' && choice == 7)
			square [7] = mark;
			
		else if (square[8] == '8' && choice == 8)
			square [8] = mark;
			
		else if (square[9] == '9' && choice == 9)
			square [9] = mark;
			
		else
		{
			printf("Invalid move ");
			player--;
			getch();
		}
		i = checkwin();
		player++;
	}while(i == -1);
	 
	board();
	if(i == 1)
		printf("\nPlayer %d win ", --player);
	else
		printf("\nGame draw");
	getch();
	return 0;
}

int checkwin()
{
	if (square[1] == square[2] && square[2] == square [3])
		return 1;
	else if (square[4] == square[5] && square[5] == square [6])
		return 1;
	else if (square[7] == square[8] && square[8] == square [9])
		return 1;
	else if (square[1] == square[5] && square[5] == square [9])
		return 1;
	else if (square[3] == square[5] && square[5] == square [7])
		return 1;
	else if (square[1] == square[4] && square[4] == square [7])
		return 1;
	else if (square[2] == square[5] && square[5] == square [8])
		return 1;
	else if (square[3] == square[6] && square[6] == square [9])
		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
		return 0;
	else 
		return -1;
	
}


void board()
{
	system("cls");
	printf("\n\n TIC TAC TOE \n\n");
	
	printf("\nPlayer 1 (X) - Player 2 (O)\n\n\n");
	
	printf("     |      |    \n");
	printf("  %c  |  %c   |  %c  \n", square[1], square[2], square[3]);
	
	printf("_____|______|_____\n");
	printf("     |      |     \n");
	
	printf("  %c  |  %c   |  %c  \n", square[4], square[5], square[6]);
	
	
	printf("_____|______|_____\n");
	printf("     |      |     \n");
	
	printf("  %c  |  %c   |  %c  \n", square[7], square[8], square[9]);
	printf("     |      |    \n");
}
