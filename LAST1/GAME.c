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
            printf("�� ������ ���ӵ� �� ���׿�!\n");
            Sleep(2000);
            printf("���ƿ� ���� �츮�� �� �ؾ��ϴ��� �˷��ٰԿ�.\n");
            Sleep(2000);
            printf("�ϴ� ���׷� ���� ���ĳ��ٴ� ���͵��� �����ؾ��ؿ�\n");
            Sleep(2000);
            printf("�׸��� �Ϻ� �̺�Ʈ���� ���������� ���ư����� Ȯ���ؾ�����\n");
            Sleep(2000);
            printf("������ ������ ������ ������������\n");
            Sleep(2000);
            printf("���� ���� ������ ��ġ�� �̵����� �帱�״�\n");
            Sleep(2000);
            printf("��ø� ��ٸ�����.\n");
            Sleep(2000);
            printf(C_NRML);
            printf("�׷����� �ڹٲ����\n");
            Sleep(2000);
            printf("������ �ܵ��� �׷����� �����ִ� ���� ���δ�,\n");
            Sleep(2000);
            printf("�� �ָ��� �����ΰ� ���ƿ��µ�..?\n");
            Sleep(2000);
            MH();
            Hug();
            printf(C_BLUE);
            printf("���һ� �츮 ������ ������Ʈ�� �Ⱦ���䰡..");
            Sleep(2000);
            printf("�̻��´� ���� �Ⱦ��ְ� ���� �ʾƿ�..");
            Sleep(2000);
            printf("�� ���¸� �ذ��Ϸ��� ������ �ʱ�ȭ ��Ű�� ���ۿ� �����.");
            Sleep(2000);
            printf("�� �������� �� �� �ִ°� ������");
            Sleep(2000);;
            printf("��������^^");

            Fight_Hug(&player);

            system("cls");
            printPlayerInfo(&player);


            printf(C_BLUE);
            printf("�����ؿ� ������ ����ϼ˳׿�.\n");
            Sleep(2000);;
            printf("Ī���̶� �ص���� �� �� ������\n");
            Sleep(2000);
            printf("�ϴ� ���� ��ҷ� �̵����ѵ帱�Կ�.");
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
        printf("������ �����մϴ�.");
        Sleep(1000);
        exit(0);
    }
    return 0;
}

