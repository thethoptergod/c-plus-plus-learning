#include <iostream>
#include <string>
#include <sstream>
#define breakline "########################################################################################################################\n"
using namespace std;
int main() {
    string name;
    string action;
    string play;
    int shield = 0;
    int sword = 0;
    int room = 0;
    int complete = 0;
    int helmet = 0;
    int skel = 1;
    int game = 0;
    int playAgain = 0;
    int replay = 0;
    int mino = 1;
    int lich = 1;
    int lichH = 2;
    do{
    switch (replay) {
        case 0:
            do {
                switch (game) {
                    case 0:
                        playAgain = 0;
                        do {
                            switch (room) {
                                case 0:
                                    do {
                                        cout << "Welcome to Ilmeia! \nTo start the game please type whatever you would like to call yourself and then press enter. \nTo play, enter either the direction that you would like to move, or the name of the item you would like to use/pick up.\n";
                                        getline(cin, name);
                                        cout << breakline;
                                        cout << "Hello " << name << "!\nYou have woken up in a cave on some unknown world. Your last memory, however hazy, is of walking through a glowing blue portal, and now you are here.\nThere is a metal sword on the ground next to you, and a shield leaning against the wall.\nThere is a door to the north, and rock walls around you, suggesting this place has been built by someone or something.\n";
                                        room = 1;
                                    } while (room == 0);
                                    break;
                                case 1:
                                    do {
                                        getline(cin, action);
                                        if (action == "sword" && sword == 0) {
                                            cout << breakline << "You pick up the sword. It feels perfect in your hand, as if it was made for you.\n";
                                            sword = 1;
                                        } else if (action == "shield" && shield == 0) {
                                            cout << breakline << "You pick up the shield. It is weighty, and it feels like it will protect you from anything.\n";
                                            shield = 1;
                                        } else if (action == "north") {
                                            cout << breakline << "You walk up to the door, and it opens before you, revealing a new room.\nThe door slams behind you, unable to be reopened.\nThere is a door to the north, and another door to the east.\n";
                                            room = 2;
                                        } else {
                                            cout << breakline << "You cant go that way!\n";
                                        }
                                    } while (room == 1);
                                    break;
                                case 2:
                                    do {
                                        getline(cin, action);
                                        if (action == "north") {
                                            cout << breakline << "You walk through the north door, and encounter another empty room. There are doors to the west and north.\n";
                                            room = 4;
                                        } else if (action == "east") {
                                            cout << breakline << "You walk through the east door, and you walk into a damp and foggy room.\n";
                                            if(helmet == 0) {
                                                cout << "You see a rusty helmet in the mist, and a door to the north\n";
                                            }else{
                                                cout << "There is a door to the north";
                                            }
                                            room = 3;
                                        } 
                                        else{
                                            cout << breakline << "You cant go that way!\n";
                                        }
                                    } while (room == 2);
                                    break;
                                case 3:
                                    do {
                                        getline(cin, action);
                                        if (action == "north") {
                                            cout << breakline << "You walk into a room occupied by a skeleton, and it starts shambling towards you!\n";
                                            room = 6;
                                        } else if (action == "helmet" && helmet == 0) {
                                            cout << breakline << "You pick up the rusty helmet and a skull falls out. The helmet fits your head perfectly\n";
                                            helmet = 1;
                                        } else if (action == "west") {
                                            cout << breakline << "There is a door to the north, and another door to the east.\n";
                                            room = 1;
                                        } else {
                                            cout << breakline << "You cant go that way!\n";
                                        }
                                    } while (room == 3);
                                    break;
                                case 4:
                                    do {
                                        getline(cin, action);
                                        if (action == "north") {
                                            cout << breakline << "You walk through the door, and see a massive minotaur!\n";
                                            room = 9;
                                        } else if (action == "west") {
                                            cout << breakline << "You walk through the door, and see a single door to the south.\n";
                                            room = 5;
                                        } 
                                        else if (action == "south") {
                                            cout << breakline << "There is a door to the north, and another door to the east.\n";
                                            room = 1;
                                        } else {
                                            cout << breakline << "You cant go that way!\n";
                                        }
                                    } while (room == 4);
                                    break;
                                case 5:
                                    do {
                                        getline(cin, action);
                                        if (action == "south") {
                                            cout << breakline << "You walk through the door, and fall into a pit of spikes, impaling you.\n";
                                            room = 8;
                                        } else if (action == "east"){
                                            cout << breakline << "You walk through the east door, and encounter another empty room. There are doors to the north and south.\n";
                                        }else {
                                            cout << breakline << "You cant go that way!\n";
                                        }
                                    } while (room == 5);
                                    break;
                                case 6:
                                    if (sword == 1){
                                    do {
                                        getline(cin, action);
                                        if (action == "sword" && sword == 1 && skel == 1) {
                                            cout << breakline << "You swing your sword and kill the skeleton!\nYou see a door to the north.\n";
                                            skel = 0;
                                        } else if (action == "shield" && shield == 1 && skel == 1) {
                                            cout << breakline << "You raise your shield and fend off the skeleton this time. The skeleton raises its hand again!\n";
                                        } else if (action == "north" && skel == 0) {
                                            cout << breakline << "You enter the next room. You see a door to the west, and a large ornate door to the north\n";
                                            room = 7;
                                        } else if (action == "south") {
                                            cout << breakline << "There is a door to the north, and another door to the west.\n";
                                                if(helmet == 0) {
                                                    cout << "You see a rusty helmet in the mist, and a door to the north\n";
                                                }else{
                                                    cout << "There is a door to the north\n";
                                                }
                                            room = 3; 
                                        }else {
                                            cout << breakline << "You cant go that way!\n";
                                        }
                                    } while (room == 6);
                                    }else {
                                        cout << breakline << "The skeleton grabs you and thrusts his hand into your chest.\n";
                                        room = 12;
                                    }
                                    break;
                                case 7:
                                    do{
                                        getline(cin, action);
                                        if (action == "north") {
                                            cout << breakline << "You push open the ornate gold doors and come face to face with a Lich on a throne.\n\"Hello " << name << ", I remember the last time you were here, do you?\"\n He raises his staff and prepares to fire!\n";
                                            room = 11;
                                        } else if (action == "west") {
                                            cout << breakline << "You walk through the door, and see a massive minotaur!\n";
                                            room = 9;
                                        } else if (action == "south") {
                                            cout << breakline << "You see a door to the south.\n";
                                            room = 6;
                                        } 
                                        else{
                                            cout << breakline << "You cant go that way!\n";
                                        }
                                    }while (room == 7);
                                    break;
                                case 8:
                                    complete = 4;
                                    break;
                                case 9:
                                    if(sword == 1 || shield == 1){
                                        do{
                                            getline(cin, action);
                                            if (action == "sword" && sword == 1 && mino == 1) {
                                                cout << breakline << "You swing your sword and kill the minotaur!\nYou see a door to the west and to the south.\n";
                                                mino = 0;
                                            } else if (action == "shield" && shield == 1 && mino == 1) {
                                                cout << breakline << "You raise your shield and fend off the minotaur this time. The minotaur raises its head again!\n";
                                            } else if (action == "west" && mino == 0) {
                                                cout << breakline << "You enter the room and hear the most beautiful music. You follow it, and see a Siren. Not even caring, you supplicate yourself in front of her to hear the music again.\n";
                                                room = 10;
                                            } else if (action == "south" && mino == 0) {
                                                cout << breakline << "You walk through the south door, and encounter another empty room. There are doors to the west and south.\n";
                                                room = 4;
                                            } else {
                                                cout << breakline << "You cant go that way!\n";
                                            }
                                        }while (room == 9);
                                    } else {
                                        cout << breakline << "The minotaur gores you with it\'s horns before you can run the other way.\n";
                                        room = 12;
                                    }
                                    break;
                                    case 10:
                                        complete = 3;
                                        break;
                                    case 11:
                                        if(sword == 1 || shield == 1 || helmet == 1){
                                            do{
                                                getline(cin, action);
                                                if(action == "sword" && lichH == 2){
                                                    cout << breakline << "You charge at the Lich and slice at his chest. You did some damage, but he raises his staff again!\n";
                                                    lichH--;
                                                } else if(action == "sword" && lichH == 1 && helmet == 1){
                                                    lichH--;
                                                    cout << breakline << "You charge at the Lich once again. He hits you in the head, but your helmet holds. As you stab him he starts to laugh.\n";
                                                    room = 13;
                                                } else if(action == "sword" && lichH == 1 && helmet == 0){
                                                    cout << breakline << "You charge at the Lich once again. He hits you in the head, and everything goes black.\n";
                                                    room = 14;
                                                } else if(action == "shield" && shield == 1){
                                                    cout << breakline << "You block his fireball, but your shield is destroyed! He raises his staff again!";
                                                    shield = 0;
                                                } else if(action == "sheild" && shield == 0){
                                                    cout << breakline << "The Lich hits you in the head, and everything goes black.\n";
                                                    room = 14;
                                                } else {
                                                    cout << breakline << "You cant go that way!\n";
                                                }
                                            }while (room == 11);
                                        } else {
                                            cout << breakline << "He lauches the ball of fire at you, and everything is agony.\n";
                                            room = 14;
                                        }
                                    case 12:
                                        complete = 5;
                                        break;
                                    case 13:
                                        complete = 1;
                                        break;
                                    case 14:
                                        complete = 2;
                                        break;
                            }
                        } while (complete == 0);
                        if (complete == 1) {
                            cout << breakline << "You Beat The Lich! You Win! A blue portal opens in front of you and you fall through it.\n" << breakline;
                            game = 1;
                        } else if (complete == 2) {
                            cout << breakline << "You lost to the Lich. The End.\n" << breakline;
                            game = 1;
                        } else if (complete == 3) {
                            cout << breakline << "You got ensnared by the Siren and stayed with her until you died of thirst. The End!\n" << breakline;
                            game = 1;
                        } else if (complete == 4) {
                            cout << breakline << "You Fell on spikes and Died. The End!\n" << breakline;
                            game = 1;
                        } else if(complete == 5) {
                            cout << breakline << "You got killed. The End!\n" << breakline;
                            game = 1; 
                        }
                        break;
                    case 1:
                        playAgain = 1;
                        break;
                }
            } while (playAgain == 0);
            cout << "Would you like to play again? Enter [y]es or [n]o.";
            getline(cin, play);
            if (play == "y" || play == "yes") {
                cout << "Okay!\n";
                game = 0;
                room = 0;
                sword = 0;
                shield = 0;
                lich = 1;
                lichH = 2;
                skel = 1;
                mino = 1;
                complete = 0;
            } else if (play == "n" || play == "no") {
                replay = 1;
            }
            break;
        case 1:
            return 0;

    }
    }while(replay == 0);
}