#include "First.h"
#include "Fight.h"
#include <stdio.h>
#include <windows.h>

#define C_NRML "\033[0m"
#define C_BLCK "\033[30m"
#define C_RED  "\033[31m"
#define C_GREN "\033[32m"
#define C_YLLW "\033[33m"
#define C_BLUE "\033[34m"
#define C_PRPL "\033[35m"
#define C_AQUA "\033[36m"

char MAIN_C = '0';
int Safe = 0, Play = 1, HugON = 1, FHug = 1;

int main() {
    struct Player player;
    Title_Screen();
    scanf_s("%c", &MAIN_C, sizeof(MAIN_C));
    if (MAIN_C == '1')
    {
        Play = 1;

        while(Play == 1)
        {
            tutorial(&player);
            Sleep(1000);
            system("cls");
            Sleep(1000);
            while (player.hp > 0)
            {
            printPlayerInfo(&player);
            printf(C_BLUE);
            printf("아 무사히 접속된 것 같네요!\n");
            Sleep(2000);
            printf("좋아요 이제 우리가 뭘 해야하는지 알려줄게요.\n");
            Sleep(2000);
            printf("일단 버그로 인해 미쳐날뛰는 몬스터들을 제압해야해요\n");
            Sleep(2000);
            printf("그리고 일부 이벤트들이 정상적으로 돌아가는지 확인해야하죠\n");
            Sleep(2000);
            printf("할일이 많으니 빠르게 가보도록하죠\n");
            Sleep(2000);
            printf("제가 직접 몬스터의 위치로 이동시켜 드릴테니\n");
            Sleep(2000);
            printf("잠시만 기다리세요.\n");
            Sleep(2000);
            printf(C_NRML);
            printf("그래픽이 뒤바뀌더니\n");
            Sleep(2000);
            printf("나무나 잔디의 그래픽이 꺠져있는 숲이 보인다,\n");
            Sleep(2000);
            printf("저 멀리서 무엇인가 날아오는데..?\n");
            Sleep(2000);
            MH();
            Hug();
            printf(C_BLUE);
            printf("맙소사 우리 게임의 마스코트인 안아줘요가..");
            Sleep(2000);
            printf("이상태는 전혀 안아주고 싶지 않아요..");
            Sleep(2000);
            printf("이 상태를 해결하려면 전투로 초기화 시키는 수밖에 없어요.");
            Sleep(2000);
            printf("전 전투에선 할 수 있는게 없으니");
            Sleep(2000);;
            printf("힘내세요^^");

            Fight_Hug(&player);

            system("cls");
            printPlayerInfo(&player);


            printf(C_BLUE);
            printf("축하해요 무사히 통과하셧네요.\n");
            Sleep(2000);;
            printf("칭찬이라도 해드려야 할 것 같지만\n");
            Sleep(2000);
            printf("일단 다음 장소로 이동시켜드릴게요.");
            system("cls");
            
            Safe = 1;
            while(Safe == 1)
            { 
            Bornfire();
            DoBornfire(&player);
            Safe = 0;
            }
            
            system("cls");
            printPlayerInfo(&player);
            
            Event_VS();
            Fight_Boss();
            Ending(&player);
            exit(0);
            }
        }
        Dead(&player);
    }
    else if(MAIN_C == '2')
    {
        printf("게임을 종료합니다.");
        Sleep(1000);
        exit(0);
    }
    return 0;
}

