//월간 코드 챌린지 시즌 1 : 2개 뽑아서 더하기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len) {

    int ans[201] = {0}; //0~200 사이의 값 저장
    int count = 0;

    for(int i=0;i<numbers_len;i++){
        for(int j=0;j<numbers_len;j++){
            //numbers에서 i번째 값과 j 번째 값을 더해서 ans의 1로 치환
            if(i ==j) continue;
            int index = numbers[i]+numbers[j];
            ans[index] = 1;

        }
    }

    for(int i=0;i<201;i++){
        if(ans[i] == 1) 
        {   
            count++;
        }
    }


    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*count);
    int Index=0;
    for(int i=0;i<201;i++){
        if(ans[i] == 1){
            answer[Index] = i;
            Index++;
        }
    }

    return answer;
}
