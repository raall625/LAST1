#ifndef FIRST_H
#define FIRST_H

#define MAX_NAME_LENGTH 10

struct Player {
    char name[MAX_NAME_LENGTH + 1];
    int hp;
    int Atk;
    int Int;
    int Luk;
};

void printPlayerInfo(const struct Player* player);
void tutorial(struct Player* player);
void DoBornfire(struct Player* player);
void gotoxy(int x, int y);
void Rule(struct Player* player);
void Error();
void Title_Screen();
void TitleError();
void Badend2();


void Fight_Boss();
void Event_VS();
void Dead(const struct Player* player);
void Ending(struct Player* player);
#endif
