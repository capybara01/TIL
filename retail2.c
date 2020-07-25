// 수박 재고 관리 프로그램

#include <cs50.h>
#include <stdio.h>

int main(void)
{ 
    int stock=5; //총 재고 5개
    int price=10000; // 개당 가격
    int sales=0; //총 매출액(부가세 포함)
    int quantity=0; //주문수량

        do
        {
            printf("=================\n");

            quantity=get_int("주문수량: ");

            if (quantity>stock)
            {
                printf("현재 재고량은 %i 개 입니다. 다시 입력해주세요.\n",stock);
            }
            else if (quantity==0)
            {
                printf("입력값이 없습니다. 현재 재고량은 %i 개 입니다.\n",stock);
            }
            else if (quantity<=stock)
            {
                printf("-----------------\n");

                printf("주문수량: %i개\n", quantity);
                printf("기존 재고량: %i개\n", stock);
                
                stock-=quantity;
                sales += 1.1*quantity*price; // 매출액은 10%*가격*수량 으로 계산 // +10% -> 110% = 1.1

                printf("남은 재고량: %i개\n", stock);
                printf("매출액(부가세 포함): %i원\n", sales);
            }
            printf("=================\n");
  
        }
            while (0<stock); // 재고가 있으면 주문이 계속됨

            printf("매진되었습니다.\n");
}
