#include <iostream>
#include <string>
#include <sstream>
#define break "########################################################################################################################################################################\n"
using namespace std;
int main()
{
    string name;
    string action;
    int shield = 0;
    int sword = 0;
    int room = 0;
    int complete = 0;
    int helmet = 0;
    int skel = 1;
    do{ 
    cout << "Welcome to Ilmeia! \nTo start the game please type whatever you would like to call yourself and then press enter. \nTo play, enter either the direction that you would like to move, or the name of the item you would like to use/pick up.\n";
    getline (cin, name);
    cout << break;
    cout << "Hello " << name << "!\nYou have woken up in a cave on some unknown world. Your last memory, however hazy, is of walking through a glowing blue portal, and now you are here.\nThere is a metal sword on the ground next to you, and a shield leaning against the wall.\nThere is a door to the north, and sheer rock walls around you, sugessting this place has been built by someone or something.\n";
    do{
    getline (cin, action);
    if(action == "sword" && sword == 0){cout << break << "You pick up the sword. It feels perfect in your hand, as if it was made for you.\n"; sword=1;}
    else if (action == "shield" && shield == 0){cout << break << "You pick up the shield. It is weighty, and it feels like it will protect you from anything.\n"; shield=1;}
    else if (action == "north"){cout << break << "You walk up to the door, and it opens before you, revealing a new room.\nThe door slams behind you, unable to be reopened.\nThere is a door to the north, and another door to the east.\n"; room=1;}
    // else if(action != "north" || action != "sword" || action != "shield"){cout << break << "You cant go that way!\n";}
    } while (room == 0);
    do{
    getline (cin, action);
    if(action == "north"){cout << break << "You walk through the north door, and encounter another empty room. There are doors to the west and north.\n"; room=3;}
    else if(action == "east"){cout << break << "You walk through the east door, and you walk into a damp and foggy room. You see a rusty helmet in the mist, and a door to the north\n"; room=2;}
    // else if(action != "north" || action != "east"){cout << break << "You cant go that way!\n";}
    }while (room == 1);
    do{
        getline (cin, action);
        if(action == "north"){cout << break << "You walk into a room occupied by a skeleton, and it starts shambling towards you!\n"; room=5;}
        else if(action == "helmet"){cout << break << "You pick up the rusty helmet and a skull falls out. The helmet fits your head perfectly\n"; helmet=1;}
        // else if(action != "north" || action != "helmet"){cout << break << "You cant go that way!\n";}
    }while(room == 2);
    do{
        getline (cin, action);
        if(action == "north"){cout << break << "You walk through the door, and see a massive minotaur!\n"; room=8;}
        else if(action == "west"){cout << break << "You walk through the door, and see a single door to the south.\n"; room = 4;}
        // else if(action != "north" || action != "west"){cout << break << "You cant go that way!\n";}
    }while(room == 3);
    do{
        getline (cin, action);
        if(action == "south"){cout << break << "You walk through the door, and fall into a pit of spikes, impaling you.\n"; room = 7; complete = 4;}
        // else if(action != "south"){cout << break << "You cant go that way!\n";}
    }while(room == 4);
    do{
        getline (cin, action);
        if(action == "sword" && sword == 1){cout << break << "You swing your sword and kill the skeleton!\nYou see a door to the north.\n"; skel = 0;}
        else if(action == "shield" && shield == 1){cout << break << "You raise your shield and fend off the skeleton this time. The skeleton raises its hand again!";}
        else if(action == "north" && skel == 0){cout << break << "You enter the next room. You see a door to the west, and a large ornate door to the north\n"; room=6;}
        // else if(action == "sword" && sword == 0 || action == "shield" && shield == 0 || action == "north" && skel == 1){cout << break << "You cant go that way!\n";}
    }while(room==5);












    }while (complete == 0);
    if(complete == 1){cout << break << "You Beat The Lich! You Win! A blue portal opens in front of you and you fall through it.\n" << break;}
    else if(complete == 2){cout << break << "You lost to the Lich. The End. Relaunch the game to try again!\n" << break;}
    else if(complete == 3){cout << break << "You got ensnared by the Siren and stayed with her until you died of thirst. The End! Relaunch the game to try again!\n" << break;}
    else if(complete == 4){cout << break << "You Fell on spikes and Died. The End! Relaunch the game to try again!\n" << break;}
}
