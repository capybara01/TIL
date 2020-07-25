// 수박 재고 프로그램 // 리더 forest님 작업 참고

#include <cs50.h>
#include <stdio.h>

int main(void)
{ 
    int stock=5; //총 재고 5개
    int order=0; //주문건수
    int price=10000; //가격
    int quantity; //주문수량
    int sales=0; //총 매출액(부가세 포함)

        while(stock>0)
        {
            printf("=================\n");
            quantity=get_int("주문수량 : ");
            
            while (stock < quantity)
            {
                quantity = get_int("주문할 수량을 다시 입력하세요.\n현재 재고는 %i개입니다.\n\n주문수량 : ", stock);
            }
                if (quantity==0)
                {
                quantity = get_int("재고수량을 정해주세요.\n 주문수량 : ");
                }

            order++; // 주문건수는 1씩 증가
            
            printf("=================\n");
            printf("주문건수: %i개\n", order);
            printf("기존 재고량: %i개\n", stock);

            stock -= quantity; // 이후 재고량: 재고에서 주문수량을 빼고 할당
            sales += 1.1*quantity*price; // 매출액은 10%*가격*수량 으로 계산 // +10% -> 110% = 1.1

            printf("남은 재고량: %i개\n", stock);
            printf("매출액: %i원\n", sales);
            printf("=================\n");

        }
         printf("재고가 없습니다.\n");
}
