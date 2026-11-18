#include <iostream>
#include <iomanip>
#include <windows.h>
#include "functions.h"
using namespace std;


void startGame(){
	system("cls");
	cout << setw(30) << "START NEW GAME" << endl ; 
	cout << setfill('-') << setw(50) << "-" << endl;
	
	BulletPoint(1, "Vs Player    (2 people share this computer)");
	BulletPoint(2, "Vs Computer  (you against the computer)");
	
	int gameType;
	cout << "Enter your choice (1-2): ";
	cin >> gameType;
}



void mainMenu(){
	cout << setfill('=') << setw(40) << "="<< endl;
	cout << setfill(' ') <<right << setw(32) << "WELCOME TO 502 CARD GAME" << endl;
	cout << setfill('=') << setw(40) << "="<< endl;
	cout << endl << endl;
	cout << setfill(' ') << setw(25) << "MAIN MENU" << endl << endl;
	cout << setfill('-') << setw(40) << "-" << setfill(' ') << endl;
	
	DrawMainMenu();
	
	cout << endl;
	
	int choice;
	cout << "Enter your choice (1-4): ";
	cin>> choice;
	
	
	switch(choice){
		
		case 1: startGame(); break;
		case 2: showInstructions(); break;
		case 3: viewLeaderBoards(); break;
		case 4: Exit(); break;
		
	}
	
	
}


int main(){
	
	mainMenu();
	
	return 0;
	}
	
	
	
	
