#include "First.h"
#include "Fight.h"
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

#define C_NRML "\033[0m"
#define C_BLCK "\033[30m"
#define C_RED  "\033[31m"
#define C_GREN "\033[32m"
#define C_YLLW "\033[33m"
#define C_BLUE "\033[34m"
#define C_PRPL "\033[35m"
#define C_AQUA "\033[36m"
//색깔(예쁘다)

void gotoxy(int x, int y)
{   //아주 유용한 위치조절
    //근데 이거 하나하나 다해줘야하는거 너무 귀찮은데
    COORD Cur;
    Cur.X = x;
    Cur.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}

void Title_Screen()
{
    /*진짜 시작화면*/
    printf("______________________________\n");
    printf("|                            |\n");
    printf("|         DEFECTIVE          |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|       1.GAME START         |\n");
    printf("|       2.GAME EXIT          |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("------------------------------\n");
}

void TitleError()
{   //이거 fight로 옮겨야 할지도?
    system("cls");
    printf(C_AQUA);
    printf("______________________________\n");
    printf("|                            |\n");
    printf("|         DEFECTIVE          |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|       1.GAME START         |\n");
    printf("|       2.GAME EXIT          |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("------------------------------\n");
    Sleep(500);
    system("cls");
    printf("______________________________\n");
    printf("|                            |\n");
    printf("|         DEFECTIV           |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|       1.GAME START         |\n");
    printf("|       2.GAME EXIT          |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("------------------------------\n");
    Sleep(500);
    system("cls");
    printf("______________________________\n");
    printf("|                            |\n");
    printf("|         DEFECTI            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|       1.GAME START         |\n");
    printf("|       2.GAME EXIT          |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("------------------------------\n");
    Sleep(500);
    system("cls");
    printf("______________________________\n");
    printf("|                            |\n");
    printf("|         DEFECT             |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|       1.GAME START         |\n");
    printf("|       2.GAME EXIT          |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("------------------------------\n");
    Sleep(500);
    system("cls");
    printf("______________________________\n");
    printf("|                            |\n");
    printf("|         DEFEC              |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|       1.GAME START         |\n");
    printf("|       2.GAME EXIT          |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("------------------------------\n");
    Sleep(500);
    system("cls");
    printf("______________________________\n");
    printf("|                            |\n");
    printf("|         DEFE               |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|       1.GAME START         |\n");
    printf("|       2.GAME EXIT          |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("------------------------------\n");
    Sleep(500);
    system("cls");
    printf("______________________________\n");
    printf("|                            |\n");
    printf("|         DEF                |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|       1.GAME START         |\n");
    printf("|       2.GAME EXIT          |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("------------------------------\n");
    Sleep(500);
    system("cls");
    printf("______________________________\n");
    printf("|                            |\n");
    printf("|         DE                 |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|       1.GAME START         |\n");
    printf("|       2.GAME EXIT          |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("------------------------------\n");
    Sleep(500);
    system("cls");
    printf("______________________________\n");
    printf("|                            |\n");
    printf("|         D                  |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|       1.GAME START         |\n");
    printf("|       2.GAME EXIT          |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("------------------------------\n");
    Sleep(500);
    system("cls");
    printf("______________________________\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|       1.GAME START         |\n");
    printf("|       2.GAME EXIT          |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("------------------------------\n");
    Sleep(3000);
    system("cls");
    printf(C_PRPL);
    printf("______________________________\n");
    printf("|                            |\n");
    printf("|        B                   |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|       1.GAME START         |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("------------------------------\n");
    Sleep(500);
    system("cls");
    printf("______________________________\n");
    printf("|                            |\n");
    printf("|        BE                  |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|       1.GAME START         |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("------------------------------\n");
    Sleep(500);
    system("cls");
    printf("______________________________\n");
    printf("|                            |\n");
    printf("|        BES                 |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|       1.GAME START         |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("------------------------------\n");
    Sleep(500);
    system("cls");
    printf("______________________________\n");
    printf("|                            |\n");
    printf("|        BEST                |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|       1.GAME START         |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("------------------------------\n");
    Sleep(500);
    system("cls");
    printf("______________________________\n");
    printf("|                            |\n");
    printf("|        BEST G              |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|       1.GAME START         |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("------------------------------\n");
    Sleep(500);
    system("cls");
    printf("______________________________\n");
    printf("|                            |\n");
    printf("|        BEST GA             |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|       1.GAME START         |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("------------------------------\n");
    Sleep(500);
    system("cls");
    printf("______________________________\n");
    printf("|                            |\n");
    printf("|        BEST GAM            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|       1.GAME START         |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("------------------------------\n");
    Sleep(500);
    system("cls");
    printf("______________________________\n");
    printf("|                            |\n");
    printf("|        BEST GAME           |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|       1.GAME START         |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("|                            |\n");
    printf("------------------------------\n");
}
void Error()
{
    //이거도 애니메이션 만들어주기
    printf(C_PRPL);
    printf("______________________________\n");
    printf("|                            |\n");
    printf("|        BA^D                |\n");
    printf("|               $@Eds        |\n");
    printf(C_GREN);
    printf("|         QUY!Fhou           |\n");
    printf("|                            |\n");
    printf("|       2eq ST$RT            |\n");
    printf("|             sdbqygy2q      |\n");
    printf("|                            |\n");
    printf(C_AQUA);
    printf("|     T*HIS I& NOT @E*&@#!!! |\n");
    printf("------------------------------\n");
}
//그래서 화면 for문으로 어케 바꿔야 했을까
void ErrorAni()
{
    printf(C_PRPL);
    printf("______________________________\n");
    Sleep(500);;
    system("cls");
    printf(C_PRPL);
    printf("______________________________\n");
    printf("|                            |\n");
    Sleep(500);;
    system("cls");
    printf(C_PRPL);
    printf("______________________________\n");
    printf("|                            |\n");
    printf("|        BA^D                |\n");
    Sleep(500);;
    system("cls");
    printf(C_PRPL);
    printf("______________________________\n");
    printf("|                            |\n");
    printf("|        BA^D                |\n");
    printf("|               $@Eds        |\n");
    Sleep(500);;
    system("cls");
    printf(C_PRPL);
    printf("______________________________\n");
    printf("|                            |\n");
    printf("|        BA^D                |\n");
    printf("|               $@Eds        |\n");
    printf(C_GREN);
    printf("|         QUY!Fhou           |\n");
    Sleep(500);;
    system("cls");
    printf(C_PRPL);
    printf("______________________________\n");
    printf("|                            |\n");
    printf("|        BA^D                |\n");
    printf("|               $@Eds        |\n");
    printf(C_GREN);
    printf("|         QUY!Fhou           |\n");
    printf("|                            |\n");
    Sleep(500);;
    system("cls");
    printf(C_PRPL);
    printf("______________________________\n");
    printf("|                            |\n");
    printf("|        BA^D                |\n");
    printf("|               $@Eds        |\n");
    printf(C_GREN);
    printf("|         QUY!Fhou           |\n");
    printf("|                            |\n");
    Sleep(500);;
    system("cls");
    printf(C_PRPL);
    printf("______________________________\n");
    printf("|                            |\n");
    printf("|        BA^D                |\n");
    printf("|               $@Eds        |\n");
    printf(C_GREN);
    printf("|         QUY!Fhou           |\n");
    printf("|                            |\n");
    Sleep(500);;
    system("cls");
    printf(C_PRPL);
    printf("______________________________\n");
    printf("|                            |\n");
    printf("|        BA^D                |\n");
    printf("|               $@Eds        |\n");
    printf(C_GREN);
    printf("|         QUY!Fhou           |\n");
    printf("|                            |\n");
    printf("|       2eq ST$RT            |\n");
    printf("|             sdbqygy2q      |\n");
    Sleep(500);;
    system("cls");
    printf(C_PRPL);
    printf("______________________________\n");
    printf("|                            |\n");
    printf("|        BA^D                |\n");
    printf("|               $@Eds        |\n");
    printf(C_GREN);
    printf("|         QUY!Fhou           |\n");
    printf("|                            |\n");
    printf("|       2eq ST$RT            |\n");
    printf("|             sdbqygy2q      |\n");
    printf("|                            |\n");
    Sleep(500);;
    system("cls");
    printf(C_PRPL);
    printf("______________________________\n");
    printf("|                            |\n");
    printf("|        BA^D                |\n");
    printf("|               $@Eds        |\n");
    printf(C_GREN);
    printf("|         QUY!Fhou           |\n");
    printf("|                            |\n");
    printf("|       2eq ST$RT            |\n");
    printf("|             sdbqygy2q      |\n");
    printf("|                            |\n");
    printf(C_AQUA);
    printf("|     T*HIS I& NOT @E*&@#!!! |\n");
    Sleep(500);;
    system("cls");
    printf(C_PRPL);
    printf("______________________________\n");
    printf("|                            |\n");
    printf("|        BA^D                |\n");
    printf("|               $@Eds        |\n");
    printf(C_GREN);
    printf("|         QUY!Fhou           |\n");
    printf("|                            |\n");
    printf("|       2eq ST$RT            |\n");
    printf("|             sdbqygy2q      |\n");
    printf("|                            |\n");
    printf(C_AQUA);
    printf("|     T*HIS I& NOT @E*&@#!!! |\n");
    printf("------------------------------\n");
    Sleep(500);;
    system("cls");
}
void Badend2()
{
    //바보같다 진짜
    system("cls");
    printf("나는 컴퓨터에 물을 쏟으면 무슨일이 일나는지 모르는 바보였기에\n");
    Sleep(2000);
    printf("컴퓨터에 물을 끼얹었고\n");
    Sleep(2000);
    printf("그렇게 쏟은 물이 몸에 닿아버려\n");
    Sleep(2000);
    printf("감전을 당하게 되었다\n");
    Sleep(2000);
    printf("Badend2:바보");
    Sleep(10000);
}


void printPlayerInfo(const struct Player* player) 
{
    gotoxy(95,0);
    printf("-------------------------\n");
    gotoxy(95, 1);
    printf("|%s님|\n", player->name);
    gotoxy(95, 2);
    printf("|HP: %d|\n", player->hp);
    gotoxy(95, 3);
    printf("|ATK: %d|\n", player->Atk);
    gotoxy(95, 4);
    printf("|INT: %d|\n", player->Int);
    gotoxy(95, 5);
    printf("|LUK: %d|\n", player->Luk);
    gotoxy(95, 6);
    printf("-------------------------\n");
    gotoxy(0, 0);
}

void tutorial(struct Player* player) {
    char cho, Bad, Bad2;

    TitleError();
    printf("주의! 지금? 이 게p임에 오/류가 발생하고 있습니다.\n");
    Sleep(2000);
    printf("(그럼 ㅇㅔE도  계ㅅㅗㄱ 하tl시려saf면 1을 입력ㅎㅐ 주세요..?)\n");
    scanf_s(" %c", &Bad, sizeof(Bad));
    printf(C_NRML);
    if (Bad == '1')
    {
        system("cls");
        ErrorAni();
        Error();
        printf("(...오류가 발생한다는게 거짓말은 아니였던 모양이다.)\n");
        Sleep(2000);
        printf("(뭔가 해결방법을 찾아야할것같다!)\n");
        Sleep(2000);
        printf("1.게임을 끄려고 시도한다. 2.컴퓨터에 물을 끼얹는다..?\n");
        scanf_s(" %c", &Bad2, sizeof(Bad2));
        if (Bad2 == '1')
        {
            system("cls");
            Error();
            printf("변화가 없다...\n");
            Sleep(2000);
            printf("(그렇게 생각한 순간 화면에 글자가 출력되고있다.)\n");

            Sleep(2000);
            printf(C_BLUE);
            printf("???:...\n");
            Sleep(2000);
            printf("???:어서오세요!  DEFECTIVE 에!\n");
            Sleep(2000);
            printf("???:저는 여러분들이 이 게임을 즐기는 것을 도와줄 나레이터입니다!\n");
            Sleep(2000);
            printf("나레이터:저와 함께 지금 당장 플레이할 준비는...?\n");
            Sleep(2000);
            printf("나레이터:아니 게임이 왜 이렇게 된거죠?\n");
            Sleep(2000);
            printf("나레이터:대체 무슨짓을 하신거에요?\n");
            Sleep(2000);
            printf(C_BLUE);
            printf("나레이터:아무래도 지금은 게임을 즐길 수 없겠네요.\n");
            Sleep(2000);
            printf("나레이터:일단 이 문제들을 해결하기에 앞서.\n");
            Sleep(2000);
            printf("나레이터:해야할 일부터 좀 해야겠네요\n");
            Sleep(2000);
            printf("나레이터:당신이 누구인지부터 좀 알아보도록하죠\n");
            Sleep(2000);
            printf("나레이터:당신의 이름은 무엇입니까?\n");
            scanf_s(" %s", player->name, sizeof(player->name));
            system("cls");
            
            Error();
            printf(C_BLUE);
            printf("나레이터:아 그래 반가워요 %s씨\n", player->name);
            Sleep(2000);
            printf("나레이터:다음은 %s씨의 게임성향을 좀 알아보려하는데\n", player->name);
            Sleep(2000);
            printf("나레이터:이중에서 갖고싶은것을 골라주시겠어요?\n");
            Sleep(2000);
            printf(C_NRML);
            printf("1.힘 2.지능 3.행운\n");//좀더 멋진 선택지로 바꿔보기
            scanf_s(" %c", &cho,sizeof(cho));
            printf(C_BLUE);

            if (cho == '1') {
                printf("나레이터:좋아요 그럼 나중에 당신을 위한 힘의 캐릭터를 골라드리죠.\n");
                player->hp =  6;
                player->Atk = 3;
                player->Int = 1;
                player->Luk = 2;
            }
            else if (cho == '2') {
                printf("나레이터:좋아요 그럼 나중에 당신을 위한 지능의 캐릭터를 골라드리죠.\n");
                player->hp =  5;
                player->Atk = 1;
                player->Int = 3;
                player->Luk = 2;
            }
            else if (cho == '3') {
                printf("나레이터:좋아요 그럼 나중에 당신을 위한 지능의 캐릭터를 골라드리죠.\n");
                player->hp =  4;
                player->Atk = 1;
                player->Int = 1;
                player->Luk = 4;
            }
            else {
                printf("나레이터:이런건 의미없다는 의미인가요?\n");
                printf("나레이터:뭐 그렇다면 그냥 넘어가도록하죠.\n");
                player->hp = 10;
                player->Atk = 1;
                player->Int = 1;
                player->Luk = 1;
            }

            cho = '0';
            Sleep(4000);
            system("cls");
            Error();
            printf(C_BLUE);
            printf("나레이터: 원래라면 이제 게임을 시작해야할 시간인데..\n");
            Sleep(2000);
            printf("나레이터: 문제는 보시다시피 지금 오류가 발생해 제대로 플레이할수가 없단 말이죠\n");
            Sleep(2000);
            printf("나레이터: 오류만 잡으면 해결될 문제이긴 하지만\n");
            Sleep(2000);
            printf("나레이터: 그것들 하나하나 찾아다니며 잡아내는게 얼마나 힘든일인데..\n");
            Sleep(2000);
            printf("나레이터: 아! 그래! %s님 혹시 저를 좀 도와 같이 문제를 해결해볼 생각은 없으십니까?\n", player->name);
            Sleep(2000);
            printf("나레이터: 저 혼자서 지금 일어나는 오류를 전부 잡아내기엔 시간이 너무 오래걸려서 말이죠..\n");
            Sleep(2000);
            printf("나레이터: 제 일이 빨리 끝나면 끝날수록 %s님이 원하시는 가장 완벽한 게임을 하실수 있게 된다고요?\n", player->name);
            Sleep(2000);
            printf("나레이터: 무엇보다 지금 오류가 발생한건 %s님이 게임을 실행시키다 일어난거잖아요?\n", player->name);
            Sleep(2000);
            printf("나레이터: 본인이 저지른 일에대한 책임을 져주셨으면 좋겠는데..?\n");
            Sleep(2000);
            printf(C_NRML);
            printf("1. 나레이터를 돕는다 2. 내가 왜?\n");
            int gameStart = 0;
            while (!gameStart)
            {
                scanf_s(" %c", &cho,sizeof(cho));
                if (cho != '1')
                {
                    printf("(선택이 거부되었습니다.).\n");                }
                else
                {
                    system("cls");
                    Error();
                    printf(C_BLUE);
                    printf("나레이터: 아주 좋아요! 저를 도와주신다니 정말 기쁘군요!\n");
                    Sleep(2000);
                    printf("나레이터: 그럼 꾸물거릴 시간이 없으니 바로 출발하도록하죠\n");
                    Sleep(2000);
                    printf("나레이터: 가장 완벽한 게임! ... 아니 지금은 그렇게 말할 수 없군요\n");
                    Sleep(2000);
                    printf("나레이터: %s님! 가장 불완전한 게임 DEFECTIVE에 오신걸 환영합니다!\n", player->name);
                    Sleep(5000);
                    gameStart = 1;
                }
            }
        }
        else if(Bad2 == '2')
        {
            Badend2();
        }
        else
        {
            //이거 변수로 만들고 좀 써먹을까?
            printf("오동작으로 인해 컴퓨터가 망가져버렸다..\n");
            Sleep(2000);
            printf("BadEnd3:제발 선택지에 있는걸 골라줘");
            Sleep(5000);
            exit(0);
        }   
    }
    else
    {
        //너무 심심함
        printf(C_PRPL);
        printf("그렇게 하기 싫으시다면\n");
        Sleep(2000);
        printf("어쩔수 없죠\n");
        Sleep(2000);
        printf("게임을 종료해드릴게요.\n");
        Sleep(2000);
        printf("END1:게임종료");
        Sleep(5000);
        exit(0);
    }
 
}


void DoBornfire(struct Player* player)
{
    //화톳불 애니메이션 추가
    int a = 0, c = 1;
    printPlayerInfo(player);
    Bornfire();
    printf(C_NRML);
    printf("다음 스테이지로 이동하니 눈앞에 화톳불이 존재한다\n");
    Sleep(2000);
    printf("불의 따스함이 몸에 스며들기 시작한다.\n");
    Sleep(2000);
    printf(C_BLUE);
    printf("화톳불은 당신이 스스로를 단련하거나 휴식할수 있는 공간이에요.\n");
    Sleep(2000);
    printf("둘 중 어떤 행동을 할지는 자유이지만\n");
    Sleep(2000);
    printf("한쪽을 선택하면 다른 한쪽은 할 수 없으니\n");
    Sleep(2000);
    printf("현재 상태를 보고 신중히 결정하세요.\n");
    Sleep(2000);
    printf(C_NRML);
    printf("그럼 무엇을 해야할까?\n");
    Sleep(2000);
    printf("1. 휴식한다 2.단련을 한다.\n");
    scanf_s("%d", &c, sizeof(c));
    if (c == 1)
    {
        printf("당신은 모닥불 앞에 앉아 잠듭니다..\n");
        Sleep(2000);
        printf("일어난 후 당신은 피로가 풀림을 느낍니다.\n");
        Sleep(2000);
        printf("HP+3\n");
        player->hp += 2;
        Sleep(2000);
    }
    else if (c == 2)
    {
        //뭔가 추가할만한게 없나?
        char A =  '0';
        int RR = 0;
        printf("당신은 능력을 단련하려 합니다.\n");
        Sleep(2000);
        printf("어떤 능력을 단련할까요?\n");
        Sleep(2000);
        printf("1.힘 2.지능 3.운\n");
        scanf_s(" %c", &A, sizeof(A));
        if (A == '1')
        {
            printf("당신은 힘을 단련합니다.\n");
            Sleep(2000);
            printf("몸에 근육이 붙음을 느낍니다.\n");
            Sleep(2000);
            RR = rand() % 3 + 1;
            player->Atk += RR;
            printf("힘 + %d\n", RR);
            Sleep(2000);
        }
        else if (A == '2')
        {
            printf("당신은 지능을 단련합니다.\n");
            Sleep(2000);
            printf("지혜가 축적되고 있음을 느낍니다.\n");
            Sleep(2000);
            RR = rand() % 3 + 1;
            player->Int += RR;
            printf("지능 + %d\n", RR);
            Sleep(2000);
        }
        else if (A == '3')
        {
            printf("당신은 행운을 단련합니다.\n");
            Sleep(2000);
            printf("근데.. 어떻게 단련해야 하나요?\n");
            Sleep(2000);
            printf(C_BLUE);
            printf("스스로의 행운을 시험해보는건 어떠신가요?\n");
            Sleep(2000);
            printf(C_NRML);
            printf("당신은 그말을 듣고 행운을 시험해봅니다.\n");
            Sleep(2000);
            RR = rand() % 3 + 1;
            player->Luk += RR;
            printf("행운 + %d\n", RR);
            Sleep(2000);
        }
    }
}


void Rule(struct Player* player)
{
    printf(C_BLUE);
    printf("지금부터 당신은 전투를 수행해야 합니다.\n");
    Sleep(2000);
    printf("상대법은 간단합니다\n");
    Sleep(2000);
    printf("당신에게 어떤 행동을 할지 선택지가 주어질 것 입니다\n");
    Sleep(2000);
    printf("그럼 그 중 가장 정답인것 같은 것 하나를 고르시면 됩니다.\n");
    Sleep(2000);
    printf("행동을 고르시면 성공과 실패 조건이 생성되\n");
    Sleep(2000);
    printf("주사위를 굴려 성공 실패 여부를 가르게 됩니다.\n");
    Sleep(2000);
    printf("성공과 실패 여부는 당신의 스텟과 밀접하게 연관되어 있습니다.\n");
    Sleep(2000);
    printf("그러니 본인의 상황에 맞게 신중하게 선택하는것을 추천드립니다.\n");
    Sleep(2000);
    printf("...\n");
    Sleep(2000);
    printf("설명이 길어졌군요..\n");
    Sleep(2000);
    printf("뭐 자세한건 직접 해보면서 알게 될겁니다,\n");
    Sleep(2000);
    printf("행운을 빌게요. %s씨\n", player->name);
    Sleep(3000);
    system("cls");
    // 좀더 간결하고 친절하게
}

void Fight_Hug(struct Player* player)
{
    int dice = 0;
    char Choice = '0';
    //사라지는 이펙트,추가 선택지, 다이스 값 조정,대사 추가
    system("cls");
    printPlayerInfo(player);
    Hug();
    printf(C_NRML);
    printf("안?아?줘?요?는 지금 누군가를 안고 싶어하고 있습니다.\n");
    Sleep(2000);
    printf("당신의 차례입니다.\n");
    Sleep(2000);
    printf("무엇을 해야 할까요?\n");
    Sleep(2000);
    printf("1.안?아?줘?요?를 안아줘본다. 2.그것이 자신을 발견하지 못하도록 숨는다.3.공격해본다. \n");
    scanf_s(" %c", &Choice, sizeof(Choice));
    if (Choice == '1')
    {
        system("cls");
        printPlayerInfo(player);
        Hug();
        printf("당신은 안?아?줘?요?를 최대한 위험하지 않을 정도로만 안아봅니다.\n");
        Sleep(2000);
        printf("Int > DICE(0~2) 일시 성공 \n");
        Sleep(2000);
        dice = rand() % 2 + 1;
        printf("DICE >= %d", dice);
        Sleep(2000);
        if (player->Int >= dice)
        {
            system("cls");
            printPlayerInfo(player);
            Hug();
            printf("당신은 그 기괴한 생명체를 안정적으로 안아주는데에 성공합니다.\n");
            Sleep(2000);
            printf("끌어안는 힘이 비정상적으로 강해 당신은 고통을 느낍니다.\n");
            Sleep(2000);
            printf(C_RED);
            printf("HP - 1\n");
            Sleep(2000);
            printf(C_NRML);
            player->hp -= 1;
            system("cls");
            printPlayerInfo(player);
            Hug();
            printf("그럼에도 그것은 만족하지 않고 당신을 더욱 끌어안으려 합니다.\n");
            Sleep(2000);
            printf("어떻게 해야 할까요?\n");
            Sleep(2000);
            printf("1.그대로 몸을 맡겨본다. 2.재빨리 뿌리치고 밀어낸다.\n");
            scanf_s(" %c", &Choice, sizeof(Choice));
            if (Choice == '1')
            {
                Choice = '0';
                system("cls");
                printPlayerInfo(player);
                Hug();
                printf("당신은 힘을 빼고 그것에게 쭉 안겨집니다.\n");
                Sleep(2000);
                printf("Luk > DICE(0~5) 일시 성공 \n");
                Sleep(2000);
                dice = rand() % 6;
                printf("DICE = %d", dice);
                Sleep(2000);
                if (player->Luk > dice)
                {
                    system("cls");
                    printPlayerInfo(player);
                    Hug();
                    printf("성공!\n");
                    Sleep(2000);
                    printf("당신은 점차 압사당할거 같은 느낌을 받습니다. \n");
                    Sleep(2000);
                    printf("그렇게 눈이 깜깜해지는 순간 그것이 충분히 만족했는지 당신을 풀어줍니다.\n");
                    Sleep(2000);
                    printf("그러더니 안?아?줘?요?는 기쁜 표정으로 서서히 사라집니다.\n");
                    Sleep(2000);
                    printf("그것이 떠나고 난 자리에 무엇인가 남아있습니다.\n");
                    Sleep(2000);
                    printf(C_AQUA);
                    printf("(행복해요): 방금 싸웠던 괴생명체와 닮았지만 매우 귀여운 모습의 인형입니다.\n ");
                    printf(C_NRML);
                    Sleep(2000);
                    printf("당신은 그것을 챙깁니다.(Luk + 2)\n");
                    player->Luk += 2 ;
                    Sleep(2000);
                    printf("전투 종료\n");
                    Sleep(3000);
                }
                else
                {
                    Choice = '0';
                    system("cls");
                    printPlayerInfo(player);
                    Hug();
                    printf("실패\n");
                    Sleep(2000);
                    printf("당신은 점차 압사당할거 같은 느낌을 받습니다. \n");
                    Sleep(2000);
                    printf("그렇게 몸이 점점 압축당해갑니다...\n");
                    Sleep(2000);
                    printf("당신은 고통을 견디지 못하고 정신을 잃습니다.\n");
                    Sleep(2000);
                    printf(C_RED);
                    printf("HP - 3");
                    player->hp -= 3;
                    Sleep(2000);
                    system("cls");
                    printPlayerInfo(player);
                    Hug();
                    printf("...\n");
                    Sleep(2000);
                    printf("시간이 지나 당신은 천천히 깨어납니다.\n");
                    Sleep(2000);
                    printf("그 괴물은 떠나고 없는 모양입니다.\n");
                    Sleep(2000);
                    printf("그것이 떠나고 난 자리에 무엇인가 남아있습니다.\n");
                    Sleep(2000);
                    printf(C_AQUA);
                    printf("(미안해요): 방금 싸웠던 괴생명체와 닮았지만 매우 귀여운 모습의 인형입니다.\n ");
                    printf(C_NRML);
                    Sleep(2000);
                    printf("당신은 그것을 챙깁니다.(Int + 2)\n");
                    player->Int += 2;
                    Sleep(2000);
                    printf("전투 종료\n");
                    Sleep(3000);
                }
            }
            else if (Choice = '2')
            {
                system("cls");
                printPlayerInfo(player);
                Hug();
                printf("당신은 온힘으로 그것을 밀어내려합니다!\n");
                Sleep(2000);
                printf("Atr >= DICE(0~5) 일시 성공\n");
                dice = rand() % 6;
                printf("DICE = %d",dice);
                Sleep(2000);
                if (player->Atk >= dice)
                {
                    printf("당신은 죽을 힘을 다해 그것을 밀어내는데에 성공합니다.\n");
                    Sleep(2000);
                    printf("그 괴물은 당신에게 밀려나 넘어집니다!\n");
                    Sleep(2000);
                    printf("당신은 그 틈을 놓치지 않고 도망칩니다!\n");
                    Sleep(2000);
                    printf("계속해서 달리던중 정신을 차려보니 어느새 숲을 벗어나 있습니다.\n");
                    Sleep(3000);
                    printf("그 괴물은 당신을 따라오지 못한 모양입니다.\n");
                    Sleep(2000);
                    printf("전투 종료!");
                    Sleep(2000);
                }
                else
                {
                    printf("그 괴물은 당신이 자신을 밀어내려는걸 깨닫고 화를 냅니다!\n");
                    Sleep(2000);
                    printf("괴물은 이제껏 느껴본적 없는 힘으로 당신을 강하게 끌어안습니다!\n");
                    Sleep(2000);
                    printf("곧이어 당신은 완전히 짓눌려 버렸습니다...\n");
                    Sleep(2000);
                    printf("HP-999");
                    player->hp = 0;
                    Sleep(2000);
                }
            }
        }
        
    }
    else if (Choice == '2')
    {
        Choice = '0';
        system("cls");
        printPlayerInfo(player);
        Hug();
        printf("당신은 그 괴생명체가  당신은 지나치도록 숨을 곳을 찾습니다.\n");
        Sleep(2000);
        printf("당신은 주변에 있는 나무 뒤에 숨어보려합니다.\n");
        Sleep(2000);
        printf("Int > Dice(1~4)일시 성공\n");
        dice = rand() % 4 + 1;
        printf("DICE >= %d\n", dice);
        Sleep(2000);
        if (player->Int >= dice)
        {
            printf("성공!\n");
            Sleep(2000);
            printf("당신은 나무뒤에 재빨리 붙어 안보이는 사각으로 이동합니다.\n");
            Sleep(2000);
            printf("그렇게 숨어있던중 그 괴생명체는 슬픈 울음소리를 내더니 천천히 자리를 떠납니다.\n");
            Sleep(2000);
            printf("괴생명체가 떠나고 난 자리에 무엇인가 남아있습니다.\n");
            Sleep(2000);
            printf(C_AQUA);
            printf("(슬퍼요) : 눈물이 묻어있는 인형입니다, 인형은 아까의 괴물과 비슷하게 생겻지만 매우 귀엽습니다.\n");
            printf(C_NRML);
            Sleep(2000);
            printf("Int + 3 , Atk - 1\n");
            Sleep(2000);
            player->Atk -= 1;
            player->Int += 3;
            printf("전투 종료\n");
            Sleep(2000);
        }
        else
        {
            printf("실패\n");
            Sleep(2000);
            printf("당신은 그 괴물에게 공포를 느껴 숨소리가 점차 커지고 있습니다.\n");
            Sleep(2000);
            printf("결국 그 괴물이 당신을 발견합니다!\n");
            Sleep(2000);
            printf("어떻게 할까요?\n");
            Sleep(2000);
            printf("1.도망친다 2.도망친다 3.도망친다\n");
            Sleep(2000);
            printf("도망 말고는 방법이 떠오르지 않습니다!\n");
            Sleep(2000);
            printf("Atk + Luk > DICE(1~6)일시 성공\n");
            dice = rand() % 6 + 1;
            printf("DEC >= %d\n", dice);
            Sleep(2000);
            if ((player->Atk + player->Luk) >= dice)
            {
                printf("당신은 가까스로 그것에게 붙잡히지 않습니다.\n");
                Sleep(2000);
                printf("그 괴물은 당신을 쫓아가던중 다른 안을것을 발견했는지 다른곳으로 이동합니다.\n");
                Sleep(2000);
                printf("당신은 살아남았다는 안도감을 느낍니다.\n");
                Sleep(2000);
                printf("전투 종료!\n");
                Sleep(2000);
            }
            else
            {
                printf("당신은 죽을 힘을 다해 뛰었으나\n");
                Sleep(2000);
                printf("그 괴물을 따돌리기엔 역부족이였습니다.\n");
                Sleep(2000);
                printf("당신은 그것에게 붙잡혀 끌어안겨집니다.\n");
                Sleep(2000);
                printf("몸이 짓눌려 점차 숨이 막혀옵니다.\n");
                Sleep(2000);
                printf("그렇게 당신은 의식을 잃어갑니다..\n");
                Sleep(2000);
                printf(C_RED);
                printf("HP - 999");
                Sleep(2000);
                player->hp = 0;
            }

        }
    }
    else if (Choice == 3);
    {
        Choice = '0';
        printf("저 괴생명체의 약점이라 생각되는 곳을 때리려합니다.\n");
        Sleep(2000);
        printf("Atk+Luk > dice0~10 일시 성공\n");
        dice = rand() & 10;
        printf("DICE = %d",dice);
        Sleep(2000);
        if ((player->Atk + player->Luk) >= dice)
        {
            printf("성공!\n");
            Sleep(2000);
            printf("당신은 그 괴생명체의 약점을 정확히 공격하는데에 성공합니다!\n");
            Sleep(2000);
            printf("상대는 순식간에 쓰러져 움직이지 않습니다.\n");
            Sleep(2000);
            printf("그러더니 서서히 희미해져 사라집니다.\n");
            Sleep(2000);
            printf("사라진 자리에 무엇인가 남아있습니다.\n");
            Sleep(2000);
            printf(C_AQUA);
            printf("(두려워요):개미가 바들바드 떨고있는 인형입니다..?\n");
            Sleep(2000);
            printf(C_NRML);
            printf("당신은 그것을 챙깁니다.(Akt+1,Luk+2)\n");
            Sleep(2000);
            printf("전투 종료!");
            Sleep(2000);
           
        }
        else
        {
            Choice = '0';
            printf("실패\n");
            Sleep(2000);
            printf("당신은 온힘을 다해 공격해보지만\n");
            Sleep(2000);
            printf("저 오류덩어리 괴물에겐 공격이 통하지 않는것 같습니다.\n");
            Sleep(2000);
            printf("그 순간 안?아?줘?요?는 자신을 공격하려 했음을 깨닫습니다!\n");
            Sleep(2000);
            printf("그것은 매우 화난 표정으로 당신에게 다가오기 시작합니다.\n");
            Sleep(2000);
            printf("어떻게 해야할까요?\n");
            Sleep(2000);
            printf("1.도망친다 2.전력으로 도망친다. 3.살려달라고 소리지르며 도망친다\n");
            Sleep(2000);
            printf("매우 큰일난 상황입니다!\n");
            Sleep(2000);
            printf("도망치는 것 말고는 방법이 없어요!\n");
            Sleep(2000);
            printf("Luk >= Dice(1,10)일시 성공\n");
            Sleep(2000);
            dice = rand() % 11 + 1;
            printf("DICE = %d\n", dice);
            Sleep(2000);
            if (player->Atk >= dice)
            {
                printf("성공!\n");
                Sleep(2000);
                printf("당신은 열심히 달려보지만 저 괴물에게서 도망치기엔 역부족입니다.\n");
                Sleep(2000);
                printf("그렇게 잡히기 직전 당신의 눈앞에서 다른 안?아?줘?요?가 날아옵니다!\n");
                Sleep(2000);
                printf("그 괴물들은 서로를 마주보더니 당신에게서 관심을 잃습니다!\n");
                Sleep(2000);
                printf("그리곤 그 둘은 서로를 안더니 사라집니다!\n");
                Sleep(2000);
                printf("그들이 사라진 곳에 가보니 무엇인가가 떨어져있습니다.\n");
                Sleep(2000);
                printf(C_AQUA);
                printf("(안아줘요!):행복하게 웃고있는 안아줘요입니다, 정말 껴안고 싶어집니다.\n");
                Sleep(2000);
                printf(C_NRML);
                printf("당신은 그것을 챙깁니다.\n");
                Sleep(2000);
                printf("HP+1 ATK+1 INT+1 LUK+1\n");
                player->hp += 1;
                player->Atk += 1;
                player->Int += 1;
                player->Luk += 1;
                printf("전투 종료!");

            }
            else
            {
                printf("실패!\n");
                Sleep(2000);
                printf("당신은 그 괴물에게서 도망치려 하지만\n");
                Sleep(2000);
                printf("그것은 너무 빠릅니다!\n");
                Sleep(2000);
                printf("당신은 그렇게 붙잡히고 말았습니다.\n");
                Sleep(2000);
                printf("당신은 살아남지 못할것이라는걸 느낍니다..\n");
                Sleep(2000);
                printf(C_RED);
                printf("Hp-999");
                Sleep(2000);
                player->hp = 0;

            }
            
            
        }
    }
    
}

void Fight_Boss(struct Player* player)
{
    system("cls");
    printPlayerInfo(player);
    printf("원래라면 최종보스가 등장해야하지만...\n");
    Sleep(2000);
    printf("제작자의 나태함과 수많은 버그가 겹쳐\n");
    Sleep(2000);
    printf("결국 최종보스같은거 없는 겜이 되버렷답니다.\n");
    Sleep(2000);
    printf("뭐 어쩌겠나요 게임 제목에서 보다시피 이 게임은 미완성인 게임인데");
    Sleep(2000);
    printf("언젠간 분명 완성되겠지만\n");
    Sleep(2000);
    printf("그건 그때 일이고 지금 해드릴 수 있는게 없단 말이죠?\n");
    Sleep(2000);
    printf("그러니 대충 버그가 일어났다 치고\n");
    Sleep(2000);
    printf("일단 맘편히 엔딩이나 출력해봅시다");
    Sleep(2000);
    system("cls");
    //완전한 게임을 꿈꾸며
}

void Event_VS(struct Player* player)
{
    char ccc = '0';
    int VDice = 0;
    system("cls");
    printPlayerInfo(player);
    printf("이곳은 주변에 어떠한 그래픽도,몬스터도 존재하지 않습니다.\n");
    Sleep(2000);
    printf("그저 원하는걸 말해보라는 쪽지만이 놓여있을 뿐이네요.\n");
    Sleep(2000);
    printf("쪽지엔 이렇게 쓰여 있습니다.\n");
    Sleep(2000);
    printf("1.초콜릿 2.커피 3.스텟? 4.돈...?\n");
    scanf_s(" %s", ccc, sizeof(ccc));
    if (ccc == '1')
    {
        char ccc = '0';
        printf("당신은 초콜릿을 원한다고 말해봅니다.\n");
        Sleep(2000);
        printf("그러자 하늘에서 카카오가 떨어지기 시작합니다..?\n");
        Sleep(2000);
        printf("Atk >= dice(1~6) 일시 성공\n");
        VDice = rand() % 6 + 1;
        printf("DICE = %d\n", &VDice);
        Sleep(2000);
        if (player->Atk >= VDice)
        {

            printf("성공!\n");
            Sleep(2000);
            printf("당신은 떨어지는 카카오를 붙잡습니다.\n");
            Sleep(2000);
            printf("그리고 그 카카오를 먹어봅니다.\n");
            Sleep(2000);
            printf("달달한 맛이 몸에 퍼져 힘이 납니다.\n");
            Sleep(2000);
            printf("HP+1 Atk+1\n");
            player->hp += 1;
            player->Atk += 1;
            printf("이벤트 종료!\n");
            Sleep(2000);
            system("cls");
            //코코아로 직접 초콜릿만들어보기...?
        }
        else
        {
            printf("실패!\n");
            printf("당신은 떨어지는 코코아에 머리를 맞아버립니다!\n");
            Sleep(2000);
            printf("머리를 맞으니 멍청해지는 기분입니다..\n");
            Sleep(2000);
            printf("Int - 1\n");
            player->Int -= 1;
            printf("이벤트 종료!");
            Sleep(2000);
            //이걸로 쌓인 분노를 코코아에 풀기
        }
    }
    else if (ccc == '2')
    {
        char ccc = '0';
        printf("당신은 커피를 달라고 말해봅니다\n");
        Sleep(2000);
        printf("그러자 눈앞에 커피 자판기가 나타납니다!\n");
        Sleep(2000);
        printf("당신은 자판기의 커피를 뽑아 먹으려 합니다.\n");
        Sleep(2000);
        printf("그런데.. 우리 돈이 있던가요?\n");
        Sleep(2000);
        printf("LUK >= Dice(1~6)\n");
        VDice = rand() % 6 + 1;
        Sleep(2000);
        printf("Dice = %d\n",VDice);
        Sleep(2000);
        if (player->Luk >= VDice)
        {
            printf("성공!\n");
            Sleep(2000);
            printf("당신은 주머니를 뒤지다 동전을 발견합니다!\n");
            Sleep(2000);
            printf("운수가 좋군요! 덕분에 따뜻한 커피 한잔의 여유를 즐길 수 있겠어요!\n");
            Sleep(2000);
            printf("당신은 커피를 마십니다.\n");
            Sleep(2000);
            printf("몸에 카페인이 돌자 생기가 돌기 시작합니다!\n");
            Sleep(2000);
            printf("Hp + 1, Int + 3\n");
            Sleep(2000);
            player->hp += 1;
            player->Int += 3;
            printf("이벤트 종료!");
            Sleep(2000);
            //어떤 커피를 마실지?

        }
        else
        {
            printf("실패!\n");
            Sleep(2000);
            printf("아무리 주머니를 뒤져보고 주변을 둘러봐도\n");
            Sleep(2000);
            printf("돈은 한푼도 나오지 않네요..\n");
            Sleep(2000);
            printf("어쩔 수 없이 커피 한잔의 여유는 포기해야겠네요.");
            Sleep(2000);
            printf("이벤트 종료!");
            Sleep(2000);
            //자판기 때려부수기 선택지 추가,돈 소원 한번 빌어보기 추가

        }
    }
    else if (ccc == "3")
    {
        char ccc = '0';
        printf("당신은 스텟을 원한다고 말합니다.");
        Sleep(2000);
        printf("그러자 당신의 스텟이 뒤바뀌기 시작합니다!\n");
        Sleep(2000);
        printf("Hp = 1 Atk = 5 Int = 5 Luk = 1");
        Sleep(2000);
        player->hp = 0;
        player->Atk = 5;
        player->Int = 5;
        player->Luk = 5;
        printf("뭐 원하는대론 이루어 지셧네요 축하드려요.\n");
        player->hp = 0;
        printf("이벤트 종료!\n");
        //랜덤하게 다른경우의 스텟이 나올수도 있게끔

    }
    else if (ccc = '4')
    {
        char ccc = '0';
        printf("당신은 돈을 원한다고 말해봅니다.\n");
        Sleep(2000);
        printf("그러자 하늘에서 달러가 쏟아집니다! 야호!\n");
        Sleep(2000);
        printf("그런데 여긴 게임속인데 달러가 의미가 있나요?\n");
        Sleep(2000);
        printf("심지어 이게임 상점같은것도 구현이 안되있다고요?\n");
        Sleep(2000);
        printf("왜 이걸 고르신거죠..?\n");
        Sleep(2000);
        printf("뭐.. 잠깐 기분은 좋았으니 무의미 하진 않았다고 생각하자고요..\n");
        Sleep(2000);
        printf("이벤트 종료!");
        Sleep(2000);
        //돈을 챙겨놓고 특정 상태에서 사용할 수 있도록?
    }
    else
    {
        printf("오류가 발생했거나 게임이 조졋거나 잘못입력했거나?");
        Sleep(2000);
        exit(0);
        //돌아가게 해야함
    }

}

void Dead(struct Player* player)
{
    system("cls");
    printf(C_RED);
    printf("당신은 죽었습니다.\n");
    Sleep(2000);
    printf("정말 형편없는 실력이네요\n");
    Sleep(2000);
    printf("이런거말고 지뢰찾기나 하러 가보시는 건 어떨까요?\n");
    Sleep(2000);
    printf("제 말에 반박할게 있으시다면 직접 찾아오시죠\n");
    Sleep(2000);
    printf(C_BLUE);
    printf("언제든 오셔도 좋습니다. %s님", player->name);
    Sleep(5000);
    exit(0);
}

void Ending(struct Player* player)
{
    system("cls");
    printf(C_NRML);
    printf("플레이 해주셔서 감사합니다.\n");
    Sleep(2000);
    printf("DEFECTIVE라는 제목에 걸맞는 이런 하찮은 게임을\n");
    Sleep(2000);
    printf("엔딩까지 플레이하시다니\n");
    Sleep(2000);
    printf("정말 할짓이 없으신가 보군요\n");
    Sleep(2000);
    printf("지금 제가 무례해 보이나요? \n");
    Sleep(2000);
    printf("하지만 어차피 저 이외에 다른 사람이 이 문구를 볼리가 없잖아요?\n");
    Sleep(2000);
    printf("그러니 여기서만큼은 제가 하고싶은 말을 마음껏 적어야죠\n");
    Sleep(2000);
    printf("라고 생각했지만 슬슬 귀찮아서 말이죠,\n");
    Sleep(2000);
    printf("그냥 짧게 한마디만 써야겠군요.\n");
    Sleep(2000);
    printf(C_BLUE);
    printf("%s님 지금까지 정말로 감사했습니다. 당신은 제 감사를 받을 자격이 있이요\n", &player->name);
    Sleep(5000);
    exit(0);
}