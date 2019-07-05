#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 3

int func(void);

int main(void){

  int num[N],sum,i;
  char name[10];

  printf("あなたのお名前は何ですか？\n");

  scanf("%s",name);

  printf("こんにちは%sさん！\n",name);
 
  srand(time(NULL));

  for(i=0;i<N;i++){
    num[i]=0;
  }

  printf("サイコロを振る...\n");

  for(i=0;i<N;i++){
    
    num[i]=func();

    printf("ダイス%d：%d\n",i+1,num[i]);

    sum+=num[i];
  
  }
  
  printf("合計値：%d\n",sum);

  if(sum>7){
    printf("%sは勝ちました！\n",name);
  }else{
    printf("%sは負けました！\n",name);
  }

  return 0;
  
}

int func(void){

  return rand()%6+1;
  
}
