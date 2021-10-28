#include <stdio.h>

void startGame(){
printf("Welcome, select your Character\n");
}

int main( int argc, const char* argv[] )
{
	char inputAnswer;
	printf("Welcome to the Adventure Game!\n" );
	printf("Enter Y if you want to play or N to exit:%c", inputAnswer);
	scanf("%c", &inputAnswer);
	if (inputAnswer == 'Y')
	{
	
		startGame();
	}
	else if (inputAnswer == 'N')
	{
		printf("Thank you for playing, See you!\n");

	}
	else {
		printf("Please enter Y or N\n");
	}

	
	return 0;
}

