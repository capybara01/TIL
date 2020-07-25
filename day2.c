//ex) 월,월요일 /둘 다 가능하게 써봄

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
        while(1)
        {
        printf("==============================\n");
        string day = get_string("요일을 입력하세요.\n");
    
        if (strcmp("월요일", day)==0 ||strcmp("월", day)==0)
        {
           printf("월요일: 청국장\n");
        }
        else if (strcmp("화요일", day)==0 ||strcmp("화", day)==0)
        {
           printf("화요일: 비빔밥\n");
        }
        else if (strcmp("수요일", day)==0 ||strcmp("수", day)==0)
        {
           printf("수요일: 된장찌개\n");
        }
        else if (strcmp("목요일", day)==0 ||strcmp("목", day)==0)
        {
           printf("목요일: 칼국수\n");
        }
        else if (strcmp("금요일", day)==0 ||strcmp("금", day)==0)
        {
           printf("금요일: 칼국수\n");
        }
        else if (strcmp("토요일", day)==0 ||strcmp("토", day)==0)
        {
           printf("토요일: 소불고기\n");
        }
        else if (strcmp("일요일", day)==0 ||strcmp("일", day)==0)
        {
            printf("일요일: 오삼불고기\n");
        }
        else if (strcmp("끝", day)==0)
        {                
            break;
        }
                    else
                    {
                    printf("요일을 입력하세요. ex)월요일\n");
                    }
              printf("==============================\n");
        }
}
