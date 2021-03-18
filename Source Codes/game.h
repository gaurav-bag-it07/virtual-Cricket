#include"team.h"
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<limits>
#include<unistd.h>
#include<windows.h>

class Game
{

	public:
			Game();

			int playersPerTeam;
			int maxBalls;
			int totalPlayers;
			std::string players[11];
			bool isFirstInnings;
			Team teamA, teamB;
			Team *battingTeam, *bowlingTeam;
			Player *batsman, *bowler;


			void welcome();
			void showAllPlayers();
			int takeIntegerInput();
			void selectPlayers();
			bool validateSelectedPlayer(int);
			void showTeamPlayers();
			void toss();
			void tossChoice(Team);
			void startFirstInnings();
			void initializePlayers();
			void playInnings();
			void bat();
			bool validateInningsScore();
			void showGameScorecard();
			void startSecondInnings();
			void displaySummary();
};


