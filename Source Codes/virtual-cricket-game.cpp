//============================================================================
// Name        : virtual-cricket-game.cpp
// Author      : Gaurav Baghel , Inernshala
// Version     : 1.0.0
// Copyright   : Your copyright notice
// Description : CRIC-IN ,the virtual cricket game project
//============================================================================


#include "game.h"
using namespace std;

int main()
{
	Game game;
	game.welcome();

	cout<<"press enter to continue"<<endl<<endl;
	getchar();




	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	game.showAllPlayers();

	cout<<"press enter to continue"<<endl<<endl;
	getchar();


	game.selectPlayers();
	game.showTeamPlayers();

	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	cout<<"press enter to toss"<<endl<<endl;
	getchar();


	game.toss();
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	game.startFirstInnings();

	game.startSecondInnings();
	game.displaySummary();


	return 0;


}
