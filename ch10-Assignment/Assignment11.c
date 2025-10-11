/* 파일명: Assignment11.c

 * 내용: PA11. PRODUCT 구조체 배열을 이용해서 제품명을 입력받아 검색 후 주문 처리하는 프로그램을 작성하라 
               주문 수량을 입력받아 결제 금액을 알려 주고, 제품 제고를 주문 수량만큼 감소시켜야 한다 제품명으로 검색할 수 없거나 찾은 제품의 재고가 
               주문 수량보다 적으면 에러 메시지를 출력한다 PRODUCT 구조체 배열은 크기가 5인 배열로 선언하고 적당한 값으로 초기화해서 사용한다 (난이도 상)

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.08
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct product
{
    char name[20];
    int price;
    int inven;
} PRODUCT;

void Print(void);
void order(PRODUCT products[], int size);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    PRODUCT products[5] = {
        {"아메리카노", 4000, 10},
        {"카페라떼", 4500, 10},
        {"플랫화이트", 5000, 10},
        {"아이스티", 3000, 10},
        {"에스프레소", 4000, 10}
    };

    order(products, 5);
}

void order(PRODUCT products[], int size)
{
    char name[20];
    int amount;

    while (1)
    {
        printf("주문할 제품명? ");
        scanf("%s", name);

        if (strcmp(name, ".") == 0)
        {
            break;
        }


        int found = 0;
        for (int i = 0; i < size; i++)
        {
            if (strcmp(products[i].name, name) == 0)
            {
                found = 1;

                printf("주문할 수량? ");
                scanf("%d", &amount);

                if (amount <= 0)
                {
                    printf("주문 수량은 1 이상이어야 합니다.\n");
                    break;
                }

                if (products[i].inven < amount)
                {
                    printf("재고가 부족합니다. 현재 재고: %d\n", products[i].inven);
                }
                else
                {
                    products[i].inven -= amount;
                    int total = amount * products[i].price;
                    printf("결제 금액: %d  %s 재고: %d\n", total, products[i].name, products[i].inven);
                }

                break;
            }
        }

        if (!found)
        {
            printf("해당 제품이 없습니다.\n");
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("[%s %d원 재고:%d]\n", products[i].name, products[i].price, products[i].inven);
    }
}