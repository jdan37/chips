#include <iostream>
#include <ctime>
#include <string>
#include <cstdalign>
using namespace std;


const int MAX_CHIPS = 100;
const float MAX_TURN = .5;
int main()
{

    bool plyaer1Trun = true;
    bool gameOver = false;
    int	chipsInPlie = 0;
    int	chipsTaken = 0;
    int maxPerTurn = 0;


    // string player1;
    // string player2;
    string playerName[2];
    cout << "Player 1, please enter your name: \n";
    cin >> playerName[0];
    cout << "Player 2, please enter your name: \n";
    cin >> playerName[1];


    //seed the random number generator
    srand(time(0));


    chipsInPlie = (rand() % MAX_CHIPS) + 1;

    cout << "This round will start with " << chipsInPlie << " chips in the pile\n";

    maxPerTurn = (MAX_TURN * chipsInPlie);


    cout << "You can only take " << maxPerTurn << endl;
    chipsTaken = (rand () % maxPerTurn) + 1;

    cout << "Number taken: " << chipsTaken << endl;

    return 0;
}