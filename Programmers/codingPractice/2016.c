//프로그래머스 _연습문제 _ 2016년
// 7에 대한 모듈로로 공식을 만들어 풀려고 했는데, 1~7월은 홀수년이 31일일이고 8~12월 은 짝수년이 31일일이다. 이걸 간과하고 로직을 짰다가 계속 틀렸다 ㅠㅠ
// 그래서 일단 공식으로 만들지 않고 일일히 나열해서 풀어보았다.
//나중에 다른 방식으로 풀어볼것!

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* ShowWeek(int num, int month){
    char* ans = "";
   
    int exDay;

    switch(month){
        case 1:
        exDay = 0; break;
        case 2:
        exDay = 31; break;
        case 3:
        exDay = 31 + 29; break;
        case 4 :
        exDay = 31 + 29 + 31; break;
        case 5 :
        exDay = 31 + 29 + 31+ 30; break;
        case 6:
        exDay = 31 + 29 + 31 + 30 + 31; break;
        case 7:
        exDay = 31 + 29 + 31 + 30 + 31 + 30; break;
        case 8:
        exDay = 31 + 29 + 31 + 30 + 31 + 30 + 31; break;
        case 9:
        exDay = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31; break;
        case 10:
        exDay = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30; break;
        case 11:
        exDay = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31; break;
        case 12:
        exDay = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30; break;
   
    }
    
    num = (num % 7 + exDay % 7) % 7;
    
    switch (num){
        case 1 :
            ans = "FRI";
            break;
        
        case 2:
            ans = "SAT";
            break;
        
        case 3:
            ans = "SUN";
            break;
        
        case 4:
            ans = "MON";
            break;

        case 5 :
            ans = "TUE";
            break;
        
        case 6 :
            ans = "WED";
            break;

        case 0 :
            ans = "THU";
            break;

        default : 
            ans = "UNDEFINED";
            break;
            
            
    }
    
    
    
    return ans;
    
}

char* solution(int a, int b) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    
    
    
    char* answer = (char*)malloc(sizeof(char));
    answer = ShowWeek(b,a);
    return answer;
}
