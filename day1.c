#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int day;
    while (1)
    {
        printf("==================================\n");
        string week = get_string("요일을 입력하세요 : ");  
        if(strcmp(week,"월요일")==0)
        {
            day=1;
        }
        else if(strcmp(week,"화요일")==0)
        {
            day=2;
        }
        else if(strcmp(week,"수요일")==0)
        {
            day=3;
        }
        else if(strcmp(week,"목요일")==0)
        {
            day=4;
        }
        else if(strcmp(week,"금요일")==0)
        {
            day=5;
        }
        else if(strcmp(week,"토요일")==0)
        {
            day=6;
        }
        else if(strcmp(week,"일요일")==0)
        {
            day=7; 
        }
        else if (strcmp(week,"끝")==0)
          {
            break;
           }   
        switch(day)
        {
            case 1 :
                printf("월요일 : 청국장\n");
                break;
            case 2 :
                printf("화요일 : 비빔밥\n");
                break;
            case 3 :
                printf("수요일 : 된장찌개\n");
                break;
            case 4 :
                printf("목요일 : 칼국수\n");
                break;     
            case 5 :
                printf("금요일 : 냉면\n");
                break;     
            case 6 :
                printf("토요일 : 소불고기\n");
                break;       
            case 7 :
                printf("일요일 : 오삼불고기\n");
                break;    
            default :
               printf("다시 입력해주세요.\n");
        }
        printf("==================================\n");
    }
}
