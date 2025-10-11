/* 파일명: Assignment09.c

 * 내용: PA09. PRODUCT 구조체를 매개변수로 전달받아 주문 처리를 하는 order 함수를 정의하라 order 함수는 PRODUCT 구조체와 주문 수량을 매개변수로 전달받는 함수이다 
               재고가 주문 수량보다 적으면 주문할 수 없으므로 0을 리턴하고, 재고가 주문 수량보다 많으면 주문 수량만큼 재고를 감소시키고 결제 금액을 리턴한다 
               주문 수량으로 0이 입력될 때까지 반복해서 주문 처리를 하는 프로그램을 작성하라 (난이도 중)

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.08
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct product
{
    char name[20];
    int price;
    int inven;

} PRODUCT;

int order(PRODUCT* p, int amount);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    PRODUCT a;

    printf("제품명? ");
    scanf("%s", a.name);
    printf("가격? ");
    scanf("%d", &a.price);
    printf("재고? ");
    scanf("%d", &a.inven);

    int amount;
    int total = 0;

    while (1)
    {
        printf("주문 수량? ");
        scanf("%d", &amount);

        if (amount == 0)
        {
            break;
        }

        int payment = order(&a, amount);

        if (payment > 0)
        {
            printf("결제 금액: %d, 재고: %d\n", payment, a.inven);
            total += payment;
        }
    }
}

int order(PRODUCT* p, int amount)
{
    if (amount == 0)
    {
        return 0;
    }

    if (amount > p->inven)
    {
        printf("재고가 부족합니다.\n");
        return 0;
    }
    else
    {
        p->inven -= amount;
        return amount * p->price;
    }
}