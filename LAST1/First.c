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

void gotoxy(int x, int y)
{
    COORD Cur;
    Cur.X = x;
    Cur.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}

void Title_Screen()
{
    /*��¥ ����ȭ��*/
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
{
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


void Badend2()
{
    system("cls");
    printf("���� ��ǻ�Ϳ� ���� ������ �������� �ϳ����� �𸣴� �ٺ����⿡\n");
    Sleep(2000);
    printf("��ǻ�Ϳ� ���� �������\n");
    Sleep(2000);
    printf("�׷��� ���� ���� ���� ��ƹ���\n");
    Sleep(2000);
    printf("������ ���ϰ� �Ǿ���\n");
    Sleep(2000);
    printf("Badend2:�ٺ�");
    Sleep(10000);
}


void printPlayerInfo(const struct Player* player) 
{
    gotoxy(95,0);
    printf("-------------------------\n");
    gotoxy(95, 1);
    printf("|%s��|\n", player->name);
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
    printf("����! ����? �� ��p�ӿ� ��/���� �߻��ϰ� �ֽ��ϴ�.\n");
    Sleep(2000);
    printf("(�׷� ����E��  �褵�Ǥ� ��tl�÷�saf�� 1�� �Է¤��� �ּ���..?)\n");
    scanf_s(" %c", &Bad, sizeof(Bad));
    printf(C_NRML);
    if (Bad == '1')
    {
        system("cls");
        Error();
        printf("(...������ �߻��Ѵٴ°� �������� �ƴϿ��� ����̴�.)\n");
        Sleep(2000);
        printf("(���� �ذ����� ã�ƾ��ҰͰ���!)\n");
        Sleep(2000);
        printf("1.������ ������ �õ��Ѵ�. 2.��ǻ�Ϳ� ���� ����´�..?\n");
        scanf_s(" %c", &Bad2, sizeof(Bad2));
        if (Bad2 == '1')
        {
            system("cls");
            Error();
            printf("��ȭ�� ����...\n");
            Sleep(2000);
            printf("(�׷��� ������ ���� ȭ�鿡 ���ڰ� ��µǰ��ִ�.)\n");

            Sleep(2000);
            printf(C_BLUE);
            printf("???:...\n");
            Sleep(2000);
            printf("???:�������! ���󿡼� ���� �Ϻ��� ���ӿ�!\n");
            Sleep(2000);
            printf("???:���� �����е��� �� ������ ���� ���� ������ ���������Դϴ�!\n");
            Sleep(2000);
            printf("��������:���� �Բ� ���� ���� �÷����� �غ��...?\n");
            Sleep(2000);
            printf("��������:�ƴ� ������ �� �̷��� �Ȱ���?\n");
            Sleep(2000);
            printf("��������:��ü �������� �ϽŰſ���?\n");
            Sleep(2000);
            printf(C_BLUE);
            printf("��������:�ƹ����� ������ ������ ��� �� ���ڳ׿�.\n");
            Sleep(2000);
            printf("��������:�ϴ� �� �������� �ذ��ϱ⿡ �ռ�.\n");
            Sleep(2000);
            printf("��������:�ؾ��� �Ϻ��� �� �ؾ߰ڳ׿�\n");
            Sleep(2000);
            printf("��������:����� ������������ �� �˾ƺ���������\n");
            Sleep(2000);
            printf("��������:����� �̸��� �����Դϱ�?\n");
            scanf_s(" %s", player->name, sizeof(player->name));
            system("cls");
            
            Error();
            printf(C_BLUE);
            printf("��������:�� �׷� �ݰ����� %s��\n", player->name);
            Sleep(2000);
            printf("��������:������ %s���� ���Ӽ����� �� �˾ƺ����ϴµ�\n", player->name);
            Sleep(2000);
            printf("��������:���߿��� ����������� ����ֽðھ��?\n");
            Sleep(2000);
            printf(C_NRML);
            printf("1.�� 2.���� 3.���\n");
            scanf_s(" %c", &cho,sizeof(cho));
            printf(C_BLUE);

            if (cho == '1') {
                printf("��������:���ƿ� �׷� ���߿� ����� ���� ĳ������ ���� �÷��帮��.\n");
                player->hp =  6;
                player->Atk = 3;
                player->Int = 1;
                player->Luk = 2;
            }
            else if (cho == '2') {
                printf("��������:���ƿ� �׷� ���߿� ����� ���� ĳ������ ������ �÷��帮��.\n");
                player->hp =  5;
                player->Atk = 1;
                player->Int = 3;
                player->Luk = 2;
            }
            else if (cho == '3') {
                printf("��������:���ƿ� �׷� ���߿� ����� ���� ĳ������ ����� �÷��帮��.\n");
                player->hp =  4;
                player->Atk = 1;
                player->Int = 1;
                player->Luk = 4;
            }
            else {
                printf("��������:�̷��� �ǹ̾��ٴ� �ǹ��ΰ���?\n");
                printf("��������:�� �׷��ٸ� �׳� �Ѿ��������.\n");
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
            printf("��������: ������� ���� ������ �����ؾ��� �ð��ε�..\n");
            Sleep(2000);
            printf("��������: ������ ���ôٽ��� ���� ������ �߻��� ����� �÷����Ҽ��� ���� ������\n");
            Sleep(2000);
            printf("��������: ������ ������ �ذ�� �����̱� ������\n");
            Sleep(2000);
            printf("��������: �װ͵� �ϳ��ϳ� ã�ƴٴϸ� ��Ƴ��°� �󸶳� �������ε�..\n");
            Sleep(2000);
            printf("��������: ��! �׷�! %s�� Ȥ�� ���� �� ���� ���� ������ �ذ��غ� ������ �����ʴϱ�?\n", player->name);
            Sleep(2000);
            printf("��������: �� ȥ�ڼ� ���� �Ͼ�� ������ ���� ��Ƴ��⿣ �ð��� �ʹ� �����ɷ��� ������..\n");
            Sleep(2000);
            printf("��������: �� ���� ���� ������ �������� %s���� ���Ͻô� ���� �Ϻ��� ������ �ϽǼ� �ְ� �ȴٰ��?\n", player->name);
            Sleep(2000);
            printf("��������: �������� ���� ������ �߻��Ѱ� %s���� ������ �����Ű�� �Ͼ���ݾƿ�?\n", player->name);
            Sleep(2000);
            printf("��������: ������ ������ �Ͽ����� å���� ���ּ����� ���ڴµ�..?\n");
            Sleep(2000);
            printf(C_NRML);
            printf("1. �������͸� ���´� 2. ���� ��?\n");
            int gameStart = 0;
            while (!gameStart)
            {
                scanf_s(" %c", &cho,sizeof(cho));
                if (cho != '1')
                {
                    printf("(������ �źεǾ����ϴ�.).\n");                }
                else
                {
                    system("cls");
                    Error();
                    printf(C_BLUE);
                    printf("��������: ���� ���ƿ�! ���� �����ֽŴٴ� ���� ��ڱ���!\n");
                    Sleep(2000);
                    printf("��������: �׷� �ٹ��Ÿ� �ð��� ������ �ٷ� ����ϵ�������\n");
                    Sleep(2000);
                    printf("��������: ���� �Ϻ��� ����! ... �ƴ� ������ �׷��� ���� �� ������\n");
                    Sleep(2000);
                    printf("��������: %s��! ���� �ҿ����� ���� DEFECTIVE�� ���Ű� ȯ���մϴ�!\n", player->name);
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
            printf("���������� ���� ��ǻ�Ͱ� ���������ȴ�..\n");
            Sleep(2000);
            printf("BadEnd3:���� �������� �ִ°� �����");
            Sleep(5000);
            exit(0);
        }   
    }
    else
    {
        printf(C_PRPL);
        printf("�׷��� �ϱ� �����ôٸ�\n");
        Sleep(2000);
        printf("��¿�� ����\n");
        Sleep(2000);
        printf("������ �����ص帱�Կ�.\n");
        Sleep(2000);
        printf("END1:��������");
        Sleep(5000);
        exit(0);
    }
 
}


void DoBornfire(struct Player* player)
{
    int a = 0, c = 1;

    printf(C_NRML);
    printf("���� ���������� �̵��ϴ� ���տ� ȭ����� �����Ѵ�\n");
    Sleep(2000);
    printf("���� �������� ���� ������ �����Ѵ�.\n");
    Sleep(2000);
    printf(C_BLUE);
    printf("ȭ����� ����� �����θ� �ܷ��ϰų� �޽��Ҽ� �ִ� �����̿���.\n");
    Sleep(2000);
    printf("�� �� � �ൿ�� ������ ����������\n");
    Sleep(2000);
    printf("������ �����ϸ� �ٸ� ������ �� �� ������\n");
    Sleep(2000);
    printf("���� ���¸� ���� ������ �����ϼ���.\n");
    Sleep(2000);
    printf(C_NRML);
    printf("�׷� ������ �ؾ��ұ�?\n");
    Sleep(2000);
    printf("1. �޽��Ѵ� 2.�ܷ��� �Ѵ�.\n");
    scanf_s("%d", &c, sizeof(c));
    if (c == 1)
    {
        printf("����� ��ں� �տ� �ɾ� ���ϴ�..\n");
        Sleep(2000);
        printf("�Ͼ �� ����� �Ƿΰ� Ǯ���� �����ϴ�.\n");
        Sleep(2000);
        printf("HP+3\n");
        player->hp += 2;
        Sleep(2000);
    }
    else if (c == 2)
    {
        char A =  '0';
        int RR = 0;
        printf("����� �ɷ��� �ܷ��Ϸ� �մϴ�.\n");
        Sleep(2000);
        printf("� �ɷ��� �ܷ��ұ��?\n");
        Sleep(2000);
        printf("1.�� 2.���� 3.��\n");
        scanf_s(" %c", &A, sizeof(A));
        if (A == '1')
        {
            printf("����� ���� �ܷ��մϴ�.\n");
            Sleep(2000);
            printf("���� ������ ������ �����ϴ�.\n");
            Sleep(2000);
            RR = rand() % 3 + 1;
            player->Atk += RR;
            printf("�� + %d\n", RR);
            Sleep(2000);
        }
        else if (A == '2')
        {
            printf("����� ������ �ܷ��մϴ�.\n");
            Sleep(2000);
            printf("������ �����ǰ� ������ �����ϴ�.\n");
            Sleep(2000);
            RR = rand() % 3 + 1;
            player->Int += RR;
            printf("���� + %d\n", RR);
            Sleep(2000);
        }
        else if (A == '3')
        {
            printf("����� ����� �ܷ��մϴ�.\n");
            Sleep(2000);
            printf("�ٵ�.. ��� �ܷ��ؾ� �ϳ���?\n");
            Sleep(2000);
            printf(C_BLUE);
            printf("�������� ����� �����غ��°� ��Ű���?\n");
            Sleep(2000);
            printf(C_NRML);
            printf("����� �׸��� ��� ����� �����غ��ϴ�.\n");
            Sleep(2000);
            RR = rand() % 3 + 1;
            player->Luk += RR;
            printf("��� + %d\n", RR);
            Sleep(2000);
        }
    }
}


void Rule(struct Player* player)
{
    printf(C_BLUE);
    printf("���ݺ��� ����� �� ���͸� ����ؾ� �մϴ�.\n");
    Sleep(2000);
    printf("������ �����մϴ�\n");
    Sleep(2000);
    printf("��ſ��� � �ൿ�� ���� �������� �־��� �� �Դϴ�\n");
    Sleep(2000);
    printf("�׷� �� �� ���� �����ΰ� ���� �� �ϳ��� ���ø� �˴ϴ�.\n");
    Sleep(2000);
    printf("�ൿ�� ���ø� ������ ���� ������ ������\n");
    Sleep(2000);
    printf("�ֻ����� ���� ���� ���� ���θ� ������ �˴ϴ�.\n");
    Sleep(2000);
    printf("������ ���� ���δ� ����� ���ݰ� �����ϰ� �����Ǿ� �ֽ��ϴ�.\n");
    Sleep(2000);
    printf("�׷��� ������ ��Ȳ�� �°� �����ϰ� �����ϴ°��� ��õ�帳�ϴ�.\n");
    Sleep(2000);
    printf("...\n");
    Sleep(2000);
    printf("������ ���������..\n");
    Sleep(2000);
    printf("�� �ڼ��Ѱ� ���� �غ��鼭 �˰� �ɰ̴ϴ�,\n");
    Sleep(2000);
    printf("����� ���Կ�. %s��\n", player->name);
    Sleep(3000);
    system("cls");
}

void Fight_Hug(struct Player* player)
{
    int dice = 0;
    char Choice = '0';

    system("cls");
    Hug();
    printPlayerInfo(&player);
    printf(C_NRML);
    printf("��?��?��?��?�� ���� �������� �Ȱ� �;��ϰ� �ֽ��ϴ�.\n");
    Sleep(2000);
    printf("����� �����Դϴ�.\n");
    Sleep(2000);
    printf("������ �ؾ� �ұ��?\n");
    Sleep(2000);
    printf("1.��?��?��?��?�� �Ⱦ��ົ��. 2.�װ��� �ڽ��� �߰����� ���ϵ��� ���´�.3.�����غ���. \n");
    scanf_s(" %c", &Choice, sizeof(Choice));
    if (Choice == '1')
    {
        system("cls");
        Hug();
        printPlayerInfo(&player);
        printf("����� ��?��?��?��?�� �ִ��� �������� ���� �����θ� �Ⱦƺ��ϴ�.\n");
        Sleep(2000);
        printf("Int > DICE(0~2) �Ͻ� ���� \n");
        Sleep(2000);
        dice = rand() % 2 + 1;
        printf("DICE = %d", dice);
        if (player->Int > dice)
        {
            system("cls");
            Hug();
            printPlayerInfo(&player);
            printf("����� �� �Ⱬ�� ����ü�� ���������� �Ⱦ��ִµ��� �����մϴ�.\n");
            Sleep(2000);
            printf("����ȴ� ���� ������������ ���� ����� ������ �����ϴ�.\n");
            Sleep(2000);
            printf(C_RED);
            printf("HP - 1\n");
            Sleep(2000);
            printf(C_NRML);
            player->hp -= 1;
            system("cls");
            Hug();
            printPlayerInfo(&player);
            printf("�׷����� �װ��� �������� �ʰ� ����� ���� ��������� �մϴ�.\n");
            Sleep(2000);
            printf("��� �ؾ� �ұ��?\n");
            Sleep(2000);
            printf("1.�״�� ���� �ðܺ���. 2.�绡�� �Ѹ�ġ�� �о��.\n");
            scanf_s(" %c", &Choice, sizeof(Choice));
            if (Choice == '1')
            {
                system("cls");
                Hug();
                printPlayerInfo(&player);
                printf("����� ���� ���� �װͿ��� �� �Ȱ����ϴ�.\n");
                Sleep(2000);
                printf("Luk > DICE(0~5) �Ͻ� ���� \n");
                Sleep(2000);
                dice = rand() % 6;
                printf("DICE = %d", dice);
                if (player->Luk > dice)
                {
                    system("cls");
                    Hug();
                    printPlayerInfo(&player);
                    printf("����!\n");
                    Sleep(2000);
                    printf("����� ���� �л���Ұ� ���� ������ �޽��ϴ�. \n");
                    Sleep(2000);
                    printf("�׷��� ���� ���������� ���� �װ��� ����� �����ߴ��� ����� Ǯ���ݴϴ�.\n");
                    Sleep(2000);
                    printf("�׷����� ��?��?��?��?�� ��� ǥ������ ������ ������ϴ�.\n");
                    Sleep(2000);
                    printf("�װ��� ������ �� �ڸ��� �����ΰ� �����ֽ��ϴ�.\n");
                    Sleep(2000);
                    printf(C_AQUA);
                    printf("(�ູ�ؿ�) ��� �ο��� ������ü�� ������� �ſ� �Ϳ��� ����� �����Դϴ�.\n ");
                    printf(C_NRML);
                    Sleep(2000);
                    printf("����� �װ��� ì��ϴ�.(Luk + 2)\n");
                    player->Luk += 2 ;
                    Sleep(2000);
                    printf("���� ����\n");
                    Sleep(3000);
                }
                else
                {
                    system("cls");
                    Hug();
                    printPlayerInfo(&player);
                    printf("����\n");
                    Sleep(2000);
                    printf("����� ���� �л���Ұ� ���� ������ �޽��ϴ�. \n");
                    Sleep(2000);
                    printf("�׷��� ���� ���� ������ذ��ϴ�...\n");
                    Sleep(2000);
                    printf("����� ������ �ߵ��� ���ϰ� ������ �ҽ��ϴ�.\n");
                    Sleep(2000);
                    printf(C_RED);
                    printf("HP - 3");
                    player->hp -= 3;
                    Sleep(2000);
                    system("cls");
                    Hug();
                    printPlayerInfo(&player);
                    printf("...\n");
                    Sleep(2000);
                    printf("�ð��� ���� ����� õõ�� ����ϴ�.\n");
                    Sleep(2000);
                    printf("�� ������ ������ ���� ����Դϴ�.\n");
                    Sleep(2000);
                    printf("�װ��� ������ �� �ڸ��� �����ΰ� �����ֽ��ϴ�.\n");
                    Sleep(2000);
                    printf(C_AQUA);
                    printf("(�̾��ؿ�) ��� �ο��� ������ü�� ������� �ſ� �Ϳ��� ����� �����Դϴ�.\n ");
                    printf(C_NRML);
                    Sleep(2000);
                    printf("����� �װ��� ì��ϴ�.(Int + 2)\n");
                    player->Int += 2;
                    Sleep(2000);
                    printf("���� ����\n");
                    Sleep(3000);
                }
            }
            else if (Choice = '2')
            {
                system("cls");
                Hug();
                printPlayerInfo(&player);
                printf("����� �������� �װ��� �о���մϴ�!\n");
                Sleep(2000);
                printf("Atr > DICE(0~5) �Ͻ� ����\n");
                dice = rand() % 6;
                printf("DICE = %d",dice);
                if (player->Atk > dice)
                {
                    printf("����� ���� ���� ���� �װ��� �о�µ��� �����մϴ�.\n");
                    Sleep(2000);
                    printf("�� ������ ��ſ��� �з��� �Ѿ����ϴ�!\n");
                    Sleep(2000);
                    printf("����� �� ƴ�� ��ġ�� �ʰ� ����Ĩ�ϴ�!\n");
                    Sleep(2000);
                    printf("����ؼ� �޸����� ������ �������� ����� ���� ��� �ֽ��ϴ�.\n");
                    Sleep(3000);
                    printf("�� ������ ����� ������� ���� ����Դϴ�.\n");
                    Sleep(2000);
                    printf("���� ����!");
                    Sleep(2000);
                }
                else
                {
                    printf("�� ������ ����� �ڽ��� �о���°� ���ݰ� ȭ�� ���ϴ�!\n");
                    Sleep(2000);
                    printf("������ ������ �������� ���� ������ ����� ���ϰ� ����Ƚ��ϴ�!\n");
                    Sleep(2000);
                    printf("���̾� ����� ������ ������ ���Ƚ��ϴ�...\n");
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
        system("cls");
        Hug();
        printPlayerInfo(&player);
        printf("����� �� ������ü��  ����� ����ġ���� ���� ���� ã���ϴ�.\n");
        Sleep(2000);
        printf("����� �ֺ��� �ִ� ���� �ڿ� ������մϴ�.\n");
        Sleep(2000);
        printf("Int > Dice(1~4)�Ͻ� ����\n");
        dice = rand() % 4 + 1;
        printf("DICE = %d\n", dice);
        if (player->Int > dice)
        {
            printf("����!\n");
            Sleep(2000);
            printf("����� �����ڿ� �绡�� �پ� �Ⱥ��̴� �簢���� �̵��մϴ�.\n");
            Sleep(2000);
            printf("�׷��� �����ִ��� �� ������ü�� ���� �����Ҹ��� ������ õõ�� �ڸ��� �����ϴ�.\n");
            Sleep(2000);
            printf("������ü�� ������ �� �ڸ��� �����ΰ� �����ֽ��ϴ�.\n");
            Sleep(2000);
            printf(C_AQUA);
            printf("(���ۿ�) : ������ �����ִ� �����Դϴ�, ������ �Ʊ��� ������ ����ϰ� �������� �ſ� �Ϳ����ϴ�.\n");
            printf(C_NRML);
            Sleep(2000);
            printf("Int + 3 , Atk - 1\n");
            Sleep(2000);
            player->Atk -= 1;
            player->Int += 3;
            printf("���� ����\n");
            Sleep(2000);
        }
        else
        {
            printf("����\n");
            Sleep(2000);
            printf("����� �� �������� ������ ���� ���Ҹ��� ���� Ŀ���� �ֽ��ϴ�.\n");
            Sleep(2000);
            printf("�ᱹ �� ������ ����� �߰��մϴ�!\n");
            Sleep(2000);
            printf("��� �ұ��?\n");
            Sleep(2000);
            printf("1.����ģ�� 2.����ģ�� 3.����ģ��\n");
            Sleep(2000);
            printf("���� ����� ����� �������� �ʽ��ϴ�!\n");
            Sleep(2000);
            printf("Atk + Luk > DICE(1~6)�Ͻ� ����\n");
            dice = rand() % 6 + 1;
            if ((player->Atk + player->Luk) > dice)
            {
                printf("����� ����� �װͿ��� �������� �ʽ��ϴ�.\n");
                Sleep(2000);
                printf("�� ������ ����� �Ѿư����� �ٸ� �������� �߰��ߴ��� �ٸ������� �̵��մϴ�.\n");
                Sleep(2000);
                printf("����� ��Ƴ��Ҵٴ� �ȵ����� �����ϴ�.\n");
                Sleep(2000);
                printf("���� ����!\n");
                Sleep(2000);
            }
            else
            {
                printf("����� ���� ���� ���� �پ�����\n");
                Sleep(2000);
                printf("�� ������ �������⿣ �������̿����ϴ�.\n");
                Sleep(2000);
                printf("����� �װͿ��� ������ ����Ȱ����ϴ�.\n");
                Sleep(2000);
                printf("���� ������ ���� ���� �����ɴϴ�.\n");
                Sleep(2000);
                printf("�׷��� ����� �ǽ��� �Ҿ�ϴ�..\n");
                Sleep(2000);
                printf(C_RED);
                printf("HP - 999");
                player->hp = 0;
                Sleep(2000);
            }

        }
    }


}
void Fight_Boss()
{
    printf("�Ƿʰ� �ȵȴٸ� �ѹ��� �׾��ּ���.");
}
void Event_VS()
{
    printf("1.���ݸ� 2.Ŀ�� 3.��� 4.�����Ѵ�.");
}
void Dead(const struct Player* player)
{
    system("cls");
    printf(C_RED);
    printf("����� �׾����ϴ�.\n");
    Sleep(2000);
    printf("���� ������� �Ƿ��̳׿�\n");
    Sleep(2000);
    printf("�̷��Ÿ��� ����ã�⳪ �Ϸ� �����ô� �� ����?\n");
    Sleep(2000);
    printf("�� ���� �ݹ��Ұ� �����ôٸ� ���� ã�ƿ�����\n");
    Sleep(2000);
    printf(C_BLUE);
    printf("???:������ ���ŵ� �����ϴ�. %s��", player->name);
    Sleep(5000);
    exit(0);
}
void Ending(struct Player* player)
{
    system("cls");
    printf(C_NRML);
    printf("�÷��� ���ּż� �����մϴ�.\n");
    Sleep(2000);
    printf("DEFECTIVE��� ���� �ɸ´� �̷� ������ ������\n");
    Sleep(2000);
    printf("�������� �÷����Ͻôٴ�\n");
    Sleep(2000);
    printf("���� ������ �����Ű� ������\n");
    Sleep(2000);
    printf("���� ���� ������ ���̳���? \n");
    Sleep(2000);
    printf("������ ������ �� �̿ܿ� �ٸ� ����� �� ������ ������ ���ݾƿ�?\n");
    Sleep(2000);
    printf("�׷��� ���⼭��ŭ�� ���� �ϰ���� ���� ������ �������\n");
    Sleep(2000);
    printf("��� ���������� ���� �����Ƽ� ������,\n");
    Sleep(2000);
    printf("�׳� ª�� �Ѹ��� ��߰ڱ���.\n");
    Sleep(2000);
    printf(C_BLUE);
    printf("???: %s�� ���ݱ��� ������ �����߽��ϴ�. ����� �� ���縦 ���� �ڰ��� ���̿�\n", &player->name);
    Sleep(5000);
    exit(0);
}