//<snippet111>
#include "Cardgame.h"
#include <iostream>

using namespace std;

int Cardgame::totalParticipants = 0;

Cardgame::Cardgame(int players)
    : players(players)
{
    totalParticipants += players;
    cout << players << " players have started a new game.  There are now "
         << totalParticipants << " players in total." << endl;
}

Cardgame::~Cardgame()
{
//<snippet110>
    totalParticipants -= players;
    cout << players << " players have finished their game.  There are now "
         << totalParticipants << " players in total." << endl;
//</snippet110>
}
//</snippet111>