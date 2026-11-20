#include "functions.h"
#include <iostream>
#include <iomanip>
#include <windows.h>
#include <conio.h>
using namespace std;


const HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
const int BLACK = 0;
const int WHITE = 7;
const int LIGHT_GREEN = 10; // Used for a card that can be played.
const int LIGHT_RED = 12;
const int BRIGHT_WHITE = 15;


void BulletPoint(int i, string para){
	
	SetConsoleTextAttribute(hConsole, LIGHT_RED);

	
	cout << i << ".";
	SetConsoleTextAttribute(hConsole, WHITE);

	cout << "  "<< para << endl;
	
	
}

void enterPressed(void (*func)()){
	
	Sleep(500);
	while(true)
    {
    	if(GetAsyncKeyState(VK_RETURN) & 0x8000){
    	system("cls");
//        Sleep(100);
        func();
        break;
    }
		}

}

	//FOR ANY ALPHABETICAL KEY

void keyPressed(char key, void (*func)()){
	
	Sleep(500);
	while(true)
    {
    	if(GetAsyncKeyState(key) & 0x8000){
    	system("cls");
//        Sleep(100);
        func();
        break;
    }
		}

}


void DrawMainMenu(){
	BulletPoint(1,"Start New Game");
	BulletPoint(2,"Instructions");
	BulletPoint(3,"View Leaderboard");
	BulletPoint(4,"Exit");
	

}

void showInstructions(){
	system("cls");
	cout << setfill('-') << setw(50) << "-" << endl;
	cout << setfill(' ') << setw(30) << "INSTRUCTIONS" << endl;
	cout << setfill('-') << setw(50) << "-" << endl;
	
	BulletPoint(1, "Each player gets 7 cards. Empty your hand to win.");
	BulletPoint(2, "Match the top card by suit or value, or press 0 to draw.");
	BulletPoint(3, "J  : play on any card and choose the next suit.");
	BulletPoint(4, "2  : next player draws 2 (answer with a 2).");
	BulletPoint(5, "A? : next player draws 5 (answer with any Ace).");
	BulletPoint(6, "8  : next player is skipped (answer with an 8).");
	BulletPoint(7, "7  : play it and you win the round at once!");
	BulletPoint(8, "Cards left in your hand are added to your total.");
	BulletPoint(9, "Reach 502 points and you lose the game.");		

	cout << setfill('-') << setw(50) << "-" << setfill(' ')<< endl;
	
	cout << "(Press Enter to return to the Main Menu...)";
	
	

	

};

void viewLeaderBoards(){
	system("cls");
	
	int length1=5,length2=5;
	string names[length1]={"Sara","Hamza","Ali","Ayesha","Usman"};
	double scores[length2]={95,140,210,275,388};
	length1=sizeof(names)/sizeof(names[0]);
	length2=sizeof(scores)/sizeof(scores[0]);
	cout<<"=========================================================\n";
	cout<<right<<setw(47)<<"LEADERBOARD (lowest total is best)\n";
	cout<<"=========================================================\n";
	cout<< setw(4) << " " <<"Rank"<<setw(12)<< "Name"<<setw(20)<<"Score"<<endl;
	cout<< setw(4) << " " << "----"<<setw(23)<<"---------------"<<setw(9)<<"-----"<<endl;
	for(int i=0;i<length1;i++){
		cout<< setw(5) << " "<<i+1<< setw(10)<<" " << left << setw(12) << names[i]<<setw(9)<< " " << scores[i]<<endl;
	}
	cout << "\n\n Press Enter to return to the main menu...";
	
	
	
};

void Exit(){
	
	system("cls");
	cout << "Do you really wnna quit?" << endl;
	
	cout << "Y = Yes, N = No" << endl;
	
		Sleep(500);
	while(true)
    {
    	if(GetAsyncKeyState('Y') & 0x8000){
    	system("cls");
//        Sleep(100);
        return;
        break;
    }
		}
}


