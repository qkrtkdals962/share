#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// �Լ� ����
int menu_display(void);
void hamburger(void);
void spaghetti(void);
void press_any_key(void);

// ���� �Լ�
int main(void)
{
    int c;
    while ((c = menu_display()) != 3)
    {
        switch (c)
        {
        case 1:
            hamburger();
            break;
        case 2:
            spaghetti();
            break;
        default:
            break;
        }
    }
    return 0;
}

// ���� �޴� ���
int menu_display(void)
{
    int select;
    system("cls");
    printf("���� �����\n\n");
    printf("1. �ܹ���\n");
    printf("2. ���İ�Ƽ\n");
    printf("3. ���α׷� ����\n\n");
    printf("�޴���ȣ �Է�> ");
    select = getch() - 48;  // ����Ű �Է°� ��ȯ
    return select;
}

// �ܹ��� �����
void hamburger(void)
{
    system("cls");
    printf("�ܹ��� ����� ���\n");
    printf("�߷�\n");
    press_any_key();
}

// ���İ�Ƽ �����
void spaghetti(void)
{
    system("cls");
    printf("���İ�Ƽ ����� ���\n");
    printf("�߷�\n");
    press_any_key();
}

// ���� �޴��� ���ư���
void press_any_key(void)
{
    printf("\n\n");
    printf("�ƹ� Ű�� ������ ���� �޴���...");
    getch();
}
 
