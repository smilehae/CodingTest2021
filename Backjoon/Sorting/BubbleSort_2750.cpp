#include<cstdio>
//백준 2750번. 수 정렬하기 (BubbleSort)
int ans[1000];


int main(){


    int num;
    scanf("%d",&num);

    for(int i=0;i<num;i++){
        scanf("%d",&ans[i]);
    }

    for(int i=0;i<num;i++){
        printf("%d ",ans[i]);
    }
    puts("");

//BubbleSort를 할 때는 처음부터 끝까지 돌아야 한다. 딱 자신의 오른쪽 숫자랑만 비교하기 때문에, 어떤 값이 최솟값인지 알 수 없기에 고정할 수 없다.
//따라서 모든 sorting 중 가장 효율이 나쁠 것임을 알 수 있다.
    for(int i=0;i<num-1;i++){
        for(int j=0;j<num-1;j++){
            if(ans[j]>ans[j+1]){
                int temp = ans[j];
                ans[j] = ans[j+1];
                ans[j+1] = temp;
            }
        }
    }

    
    for(int i=0;i<num;i++){
        printf("%d ",ans[i]);
    }

}
