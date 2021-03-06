// 수박 재고 관리 프로그램 / charles님 코드 + 리더 forest님 코드 참조
// do while 반복문 + 사용자 지정 함수 사용 
// 더 공부가 필요한 부분 

#include <cs50.h>
#include <stdio.h>

int stock=5; //총 재고 5개
int price=10000; // 개당 가격
int sales; // 매출액
int quantity; // 주문수량

void all(int);
void outof(int);

int main(void)
{ 
  do
  {
      printf("================================\n");
      quantity=get_int("주문수량: ");
 
      int order=0;
      
      if(quantity<=stock)
      {
        all(order);
      }
      else
      { 
        outof(order);
      }
        
  }
   while (0<stock);
   
   printf("매진되었습니다.\n");
}

void all(order)
{ 
      printf("--------------------------------\n");
      printf("주문수량: %i개\n", quantity);
      printf("기존 재고량: %i개\n", stock);
      
      order++;          
      stock-=quantity;
      sales+= 1.1*quantity*price; // 매출액은 10%*가격*수량 으로 계산 // +10% -> 110% = 1.1

      printf("남은 재고량: %i개\n", stock);
      printf("총 매출액(부가세 포함): %i원\n",sales);
      printf("================================\n");
}

void outof(order)
{
      printf("재고가 부족합니다.\n남은 재고량: %i개\n", stock);
      printf("================================\n");
}
