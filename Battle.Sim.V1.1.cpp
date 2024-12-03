/******************************************************************************
1.1 Battle Sim
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
int main()
{

char returnal;
do {
    char numb, ruleselec, goback, useless;
    int P1health, P2health, attacknumb1, attacknumb2;
    int rounds, P1action, P2action;
    int P1score = 0, P2score = 0;
    int P1streak = 0, P2streak = 0;
    
    string P1attack[5] = { "Sword", "Spear", "Club", "Shield", "Wand" };

    string P2attack[5] = { "Sword", "Spear", "Club", "Shield", "Wand" };
    
    returnal = 0;
    
    cout<< "\n" <<"*******************************************************************************" << "\n";
    cout<<"Welcome to Battle Sim, please select one of the following:";
    cout<< "\n" <<"[Failing to input one of the available options, at any point, will return you to the beggining of the program]" << "\n";
    cout<< "\n" << "[1] Start Regular Match" << "\n" << "[2] Start Score Match" << "\n" << "[3] Rules" << "\n" << "Your selection is: ";
    cin>> numb;    
    
    if (numb != '1' && numb != '2' && numb != '3') {
    returnal = returnal + 1;
    } else {
    
    switch (numb) {
        
    case '1':
    cout<< "\n" <<"*******************************************************************************" << "\n";
    P1health = 5;
    P2health = 5;
    
   
    for (int i = 1; i < 100 + 1; i = i + 1){
        
        for (int x = 0; x < 6; x = x + 1){
        cout<< "*******************************************************************************" << "\n";
    }   
    
    cout<< "Round " << i << "\n" << "Player 1 [Health: " << P1health << "]" << "\n" <<"Make your move:" << "\n" << "[1] Sword" << "\n" << "[2] Spear" << "\n" << "[3] Club"<< "\n" << "[4] Shield" << "\n" << "[5] Wand" << "\n";
    cout<< "Choice: ";
    cin>> attacknumb1;
    
        if (attacknumb1 < 1 || attacknumb1 > 5) {
        returnal = returnal + 1;
        break;
        }
    
        for (int x = 0; x < 6; x = x + 1){
        cout<< "*******************************************************************************" << "\n";
    }
    
    cout<< "Round " << i << "\n" << "Player 2 [Health: " << P2health << "]" << "\n" <<"Make your move:" << "\n" << "[1] Sword" << "\n" << "[2] Spear" << "\n" << "[3] Club"<< "\n" << "[4] Shield" << "\n" << "[5] Wand" << "\n";
    cout<< "Choice: ";
    cin>> attacknumb2;
    
        if (attacknumb2 < 1 || attacknumb2 > 5) {
        returnal = returnal + 1;
        break;
        }    
    
        for (int x = 0; x < 6; x = x + 1){
        cout<< "*******************************************************************************" << "\n";
    }
    
    
    cout<< "Player 1 used their " <<  P1attack[attacknumb1 - 1] << ", while Player 2 used their " <<  P2attack[attacknumb2 - 1] << "!!!" << "\n";
    
    
    if (attacknumb1 == attacknumb2) {
        cout<< "Both opponents chose the same weapon! After a quick tussle, both found themselves equally matched, and were unable to land a blow.";
        cout<< "\n" << "Press any key to procceed to the next round" << "\n";
        cin>> useless;
    } else if (attacknumb1 == 1 && attacknumb2 == 2) {
        cout<< "Despite the distance, Player 1 manages to evade the spear, and succesfully lands a hit on Player 2" << "\n";
        cout<< "(Player 2 loses 1 point health)";
        P2health = P2health - 1;
        cout<< "\n" << "Press any key to procceed to the next round" << "\n";
        cin>> useless;
    } else if (attacknumb1 == 1 && attacknumb2 == 5 || attacknumb1 == 2 && attacknumb2 == 5 || attacknumb1 == 3 && attacknumb2 == 5) {
        cout<< "Player 2 is unable to cast a spell in time, and is overwelmed by Player 1, sustaning damage" << "\n";
        cout<< "(Player 2 loses 1 point of health)";
        P2health = P2health - 1;
        cout<< "\n" << "Press any key to procceed to the next round" << "\n";
        cin>> useless;    
    } else if (attacknumb1 == 3 && attacknumb2 == 1) {
        cout<< "During combat, Player 2 tries to counter using their sword, however the sheer weight of the Player 1's club is too much, Player 2 is unable to counter, and is struck." << "\n";
        cout<< "(Player 2 loses 1 point of health)";
        P2health = P2health - 1;
        cout<< "\n" << "Press any key to procceed to the next round" << "\n";
        cin>> useless;
    } else if (attacknumb1 == 2 && attacknumb2 == 3) {
        cout<< "As Player 2 charges at Palyer 1 with their club, Player 1 takes advantage of their spear's distance and stabs Player 2 before they can cover the distance." << "\n";
        cout<< "(Player 2 loses 1 point health)";
        P2health = P2health - 1;
        cout<< "\n" << "Press any key to procceed to the next round" << "\n";
        cin>> useless;
    } else if (attacknumb1 == 4 && attacknumb2 == 1 || attacknumb1 == 4 && attacknumb2 == 2 || attacknumb1 == 4 && attacknumb2 == 3) {
        cout<< "Player 1 uses their shield skillfully and manages to block all incoming blows from Player 2";
        cout<< "\n" << "Press any key to procceed to the next round" << "\n";
        cin>> useless;
    } else if (attacknumb1 == 5 && attacknumb2 == 4) {
        cout<< "Player 2, having no way of defending themselves, is struck by the full force of Player 1's spell, sustaning tons of damage" << "\n";
        cout<< "(Player 2 loses 2 points of health)";
        P2health = P2health - 2;
        cout<< "\n" << "Press any key to procceed to the next round" << "\n";
        cin>> useless;       
    } else if (attacknumb2 == 1 && attacknumb1 == 2) {
        cout<< "Despite the distance, Player 2 manages to evade the spear, and succesfully lands a hit on Player 1" << "\n";
        cout<< "(Player 1 loses 1 point health)";
        P1health = P1health - 1;
        cout<< "\n" << "Press any key to procceed to the next round" << "\n";
        cin>> useless;
    } else if (attacknumb2 == 1 && attacknumb1 == 5 || attacknumb2 == 2 && attacknumb1 == 5 || attacknumb2 == 3 && attacknumb1 == 5) {
        cout<< "Player 1 is unable to cast a spell in time, and is overwelmed by Player 2, sustaning damage" << "\n";
        cout<< "(Player 1 loses 1 point of health)";
        P1health = P1health - 1;
        cout<< "\n" << "Press any key to procceed to the next round" << "\n";
        cin>> useless;    
    } else if (attacknumb2 == 3 && attacknumb1 == 1) {
        cout<< "During combat, Player 1 tries to counter using their sword, however the sheer weight of the Player 2's club is too much, Player 1 is unable to counter, and is struck." << "\n";
        cout<< "(Player 1 loses 1 point of health)";
        P1health = P1health - 1;
        cout<< "\n" << "Press any key to procceed to the next round" << "\n";
        cin>> useless;
    } else if (attacknumb2 == 2 && attacknumb1 == 3) {
        cout<< "As Player 1 charges at Player 2 with their club, Player 2 takes advantage of their spear's distance and stabs Player 1 before they can cover the distance." << "\n";
        cout<< "(Player 1 loses 1 point health)";
        P1health = P1health - 1;
        cout<< "\n" << "Press any key to procceed to the next round" << "\n";
        cin>> useless;
    } else if (attacknumb2 == 4 && attacknumb1 == 1 || attacknumb2 == 4 && attacknumb1 == 2 || attacknumb2 == 4 && attacknumb1 == 3) {
        cout<< "Player 2 uses their shield skillfully and manages to block all incoming blows from Player 1";
        cout<< "\n" << "Press any key to procceed to the next round" << "\n";
        cin>> useless;
    } else if (attacknumb2 == 5 && attacknumb1 == 4) {
        cout<< "Player 1, having no way of defending themselves, is struck by the full force of Player 2's spell, sustaning tons of damage" << "\n";
        cout<< "(Player 1 loses 2 points of health)";
        P1health = P1health - 2;
        cout<< "\n" << "Press any key to procceed to the next round" << "\n";
        cin>> useless;       
    }
    
    if (P1health <= 0 || P2health <= 0) {
        
    for (int x = 0; x < 6; x = x + 1){
        cout<< "*******************************************************************************" << "\n";
    }
    
    cout<<"\n ********  Game Over!  ******** \n";
    if (P2health <= 0){
        cout<<" ****--- Player 1 Wins! ---**** \n";
        cout<<"\n";
        
        
    }else if(P1health <= 0){
        cout<<" ****--- Player 2 Wins! ---**** \n";
        cout<<"\n";
    }
    
        cout<< "Input anything to return to the main menu: ";
        cin>> returnal;
        break;
        }

}
    
break;
    
    case '2':
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    cout<<"\nScore Match!\n";
    cout<<"Enter how many rounds you want to play: ";
    cin>>rounds;
    
    for (int currentround = 1; currentround <= rounds; ++currentround){
      
      
        cout<<"\n| *********** Round "<<currentround<<" *********** |\n";
        cout<<"| P1 score: "<<P1score<<" ------- P2 score: "<<P2score<<" |\n";
        cout<<"| P1 streak: "<<P1streak<<" ----- P2 streak: "<<P2streak<<" |\n";
        cout<<"| ******************************* |\n\n";
        cout<<"Actions:\n";
        cout<<"1. Sword\n";
        cout<<"2. Spear\n";
        cout<<"3. Club\n";
        cout<<"4. Shield\n";
        cout<<"5. Wand\n\n";
        cout<<"Player 1, enter your action: ";
        cin>>P1action;
        
        if (P1action<1 || P1action> 5){           /*P1*/
         cout<<"Invalid number.\n";
         returnal = returnal + 1;
         break;
        }
        
        for (int x = 0; x < 6; x = x + 1){
        cout<< "*******************************************************************************" << "\n";
    }
    
        cout<<"\n| *********** Round "<<currentround<<" *********** |\n";
        cout<<"| P1 score: "<<P1score<<" ------- P2 score: "<<P2score<<" |\n";
        cout<<"| P1 streak: "<<P1streak<<" ----- P2 streak: "<<P2streak<<" |\n";
        cout<<"| ******************************* |\n\n";
        cout<<"Actions: \n";
        cout<<"1. Sword\n";
        cout<<"2. Spear\n";
        cout<<"3. Club\n";
        cout<<"4. Shield\n";
        cout<<"5. Wand\n\n";
        cout<<"Player 2, enter your action: ";
        cin>>P2action;
        
        if (P2action<1 || P2action> 5){            /*P2*/
         cout<<"Invalid number.\n";
         returnal = returnal + 1;
         break;
        }
        
        if (P1action == 4 && P2action < 4){        /*P1 Shield blocks basic attacks*/
         cout<<"\nP1 blocked an attack.\n";
        }
        if (P2action == 4 && P1action < 4){        /*P2 Shield blocks basic attacks*/
         cout<<"\nP2 blocked an attack.\n";
        }
        if (P1action == 5 && P2action == 4){      /*P1 Wand bypasses Shield*/
         cout<<"\nP1 earned 2 points.\n";
         P1streak++;
         P1score+=P1streak+ 1;
         P2streak = 0;
        }
        if (P2action == 5 && P1action == 4){      /*P2 Wand bypasses Shield*/
         cout<<"\nP2 earned 2 points.\n";
         P2streak++;
         P2score+=P2streak+ 1;
         P1streak =0;
        }
        
        if (P1action == P2action){                /*Both take damage if same choice*/
        cout<<"\nBoth players earn 1 point.\n";
        P1streak++;
        P2streak++;
        P1score+=P1streak;
        P2score+=P2streak;
        
        }
        
        if ((P1action == 1 && P2action == 2) ||   /*P1 Sword beats Spear*/
            (P1action == 2 && P2action == 3) ||   /*P1 Spear beats Club*/
            (P1action == 3 && P2action == 1)){    /*P1 Club beats Sword*/
         cout<<"\nP1 earned 1 points.\n";
         P1streak++;
         P1score+=P1streak;
         P2streak = 0;
        }
        
        if ((P2action == 1 && P1action == 2) ||   /*P2 Sword beats Spear*/
            (P2action == 2 && P1action == 3) ||   /*P2 Spear beats Club*/
            (P2action == 3 && P1action == 1)){    /*P2 Club beats Sword*/
         cout<<"\nP2 earned 1 points.\n";
         P2streak++;
         P2score+=P2streak;
         P1streak = 0;
        }
        
        if (P2action == 5 && P1action != 4){      /*P1 Wand vs basic actions*/   
         cout<<"\nP1 earned 1 points.\n";
         P1streak++;
         P1score+=P1streak;
         P2streak = 0;
        }
        if (P1action == 5 && P2action != 4){      /*P2 Wand vs basic actions*/
         cout<<"\nP2 earned 1 points.\n";
         P2streak++;
         P2score+=P2streak;
         P1streak = 0;
        }
        
        cout<< "Player 1 used their " <<  P1attack[P1action - 1] << ", while Player 2 used their " <<  P2attack[P2action - 1] << "!!!" << "\n";
   
        
        if (P1action == P2action) {
        cout<< "Both opponents chose the same weapon! After a quick tussle, both found themselves equally matched, and were unable to land a blow.";

    } else if (P1action == 1 && P2action == 2) {
        cout<< "Despite the distance, Player 1 manages to evade the spear, and succesfully lands a hit on Player 2" << "\n";

    } else if (P1action == 1 && P2action == 5 || P1action == 2 && P2action == 5 || P1action == 3 && P2action == 5) {
        cout<< "Player 2 is unable to cast a spell in time, and is overwelmed by Player 1, sustaning damage" << "\n";
 
    } else if (P1action == 3 && P2action == 1) {
        cout<< "During combat, Player 2 tries to counter using their sword, however the sheer weight of the Player 1's club is too much, Player 2 is unable to counter, and is struck." << "\n";

    } else if (P1action == 2 && P2action == 3) {
        cout<< "As Player 2 charges at Player 1 with their club, Player 1 takes advantage of their spear's distance and stabs Player 2 before they can cover the distance." << "\n";

    } else if (P1action == 4 && P2action == 1 || P1action == 4 && P2action == 2 || P1action == 4 && P2action == 3) {
        cout<< "Player 1 uses their shield skillfully and manages to block all incoming blows from Player 2";

    } else if (P1action == 5 && P2action == 4) {
        cout<< "Player 2, having no way of defending themselves, is struck by the full force of Player 1's spell, sustaning tons of damage" << "\n";
 
    } else if (P2action == 1 && P1action == 2) {
        cout<< "Despite the distance, Player 2 manages to evade the spear, and succesfully lands a hit on Player 1" << "\n";

    } else if (P2action == 1 && P1action == 5 || P2action == 2 && P1action == 5 || P2action == 3 && P1action == 5) {
        cout<< "Player 1 is unable to cast a spell in time, and is overwelmed by Player 2, sustaning damage" << "\n";

    } else if (P2action == 3 && P1action == 1) {
        cout<< "During combat, Player 1 tries to counter using their sword, however the sheer weight of the Player 2's club is too much, Player 1 is unable to counter, and is struck." << "\n";

    } else if (P2action == 2 && P1action == 3) {
        cout<< "As Player 1 charges at Palyer 1 with their club, Player 2 takes advantage of their spear's distance and stabs Player 1 before they can cover the distance." << "\n";

    } else if (P2action == 4 && P1action == 1 || P2action == 4 && P1action == 2 || P2action == 4 && P1action == 3) {
        cout<< "Player 2 uses their shield skillfully and manages to block all incoming blows from Player 1";

    } else if (P2action == 5 && P1action == 4) {
        cout<< "Player 1, having no way of defending themselves, is struck by the full force of Player 2's spell, sustaning tons of damage" << "\n";
       
    }
    
    }
    cout<<"\n ********  Game Over!  ******** \n";
    if (P1score>P2score && P1action <6 && P1action >0 && P2action <6 && P2action >0){
        cout<<" ****--- Player 1 Wins! ---**** \n";
        cout<<" P1 score: "<<P1score<<" ------ P2 score: "<<P2score<<"\n";
    }else if(P2score>P1score && P1action <6 && P1action >0 && P2action <6 && P2action >0){
        cout<<" ****--- Player 2 Wins! ---**** \n";
        cout<<" P1 score: "<<P1score<<" ------ P2 score: "<<P2score<<"\n";
    }else if(P1action == P2score && P1action <6 && P1action >0 && P2action <6 && P2action >0){
        cout<<" ****----     Tie!     ----**** \n";
        cout<<" Both Players got a score of "<<P1score<<"."<<"\n";
    }
        cout<< "Input anything to return to the main menu: ";
        cin>> returnal;
        break;

        
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    do {
        
        goback = 0;
        
        case '3':
    cout<< "\n" <<"*******************************************************************************" << "\n";
    cout<< "What set of rules do you want to see? (Enter anything else to return to the main menu)" << "\n" << "[1] Health Match" << "\n" << "[2] Score Match" << "\n" << "[3] Actions";
    cout<< "\n" << "Input: "; 
    cin>> ruleselec;
    
        if (ruleselec != '1' && ruleselec != '2' && ruleselec != '3') {
        returnal = returnal + 1;
    } else {
        
        switch (ruleselec) {
   
        case '1':
            cout<< "\n" <<"*******************************************************************************" << "\n";
            cout<< "Each match is comprised by two players, the goal of the match is deplete the other's health.";
            cout<< "\n" << "If both players select the same type of attack, they negate eachother.";
            cout<< "\n" << "The player to succsesfully deplete the other's health to 0 first wins.";
            cout<< "\n" << "\n" << "To see other rules enter anything" "\n";
            cin>> goback;
        break;
        
        case '2':
            cout<< "\n" <<"*******************************************************************************" << "\n";
            cout<< "Each match is comprised by two players, the match last for the amounth of rounds selected." << "\n";
            cout<< "Each time the other player succesfully atacks their oponent, they get 1 point.";
            cout<< "\n" << "Everytime a player successfully lands consecutively hit, the amount of points gained is raised by one." << "\n";
            cout<< "This continues until the player is hit.";
            cout<< "\n" << "If both players select the same type of attack, they both gain a point.";
            cout<< "\n" << "This continues until the amount of rounds is over, and the player with the most points wins";
            cout<< "\n" << "\n" << "To see other rules enter anything" "\n";
            cin>> goback;
        break;
        
        case '3':
            cout<< "\n" <<"*******************************************************************************" << "\n";
            cout<< "There are 3 types of Actions; Sword, Shield, Wand and Club. They counter eachother like this: " << "\n";
            cout<< "Sword beats Spear" << "\n" << "Spear beats Club" << "\n" << "Club beats Sword" << "\n" << "Shield negates all basic damage" << "\n" << "Wand bypasses Shield";
            cout<< "\n" << "All damage dealt by the sword, spear, and club is equal to 1 point of damage, however the wand deals 2 points damage";
            cout<< "\n" << "\n" << "To see other rules enter anything" "\n";
            cin>> goback;
        break;
        
        case 'Z':
            returnal = returnal + 1;
        break;    
    
    break;
        }}
    }while (goback != 0);
break;
}
    
    } 
} while (returnal != 0);
    return 0;
}
