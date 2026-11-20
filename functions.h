#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>

void BulletPoint(int i, std::string para);
void showInstructions();
void enterPressed(void (*func)());
void keyPressed(char key, void (*func)());
void viewLeaderBoards();
void DrawMainMenu();
void Exit();

#endif
