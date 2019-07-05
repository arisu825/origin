#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int func(void);

int main(void){

  char name[10];
  int num[2],sum,i;

  printf("あなたのお名前は何ですか？\n");

  scanf("%s",name);

  printf("こんにちは%sさん！\n",name);
 
  srand(time(NULL));

  for(i=0;i<2;i++){
    num[i]=0;
  }

  printf("サイコロを振る...\n");

  for(i=0;i<2;i++){
    
    num[i]=func();

    printf("ダイス%d：%d\n",i+1,num[i]);

    sum+=num[i];
  
  }
  
  printf("合計値：%d\n",sum);

  return 0;
  
}

int func(void){

  return rand()%6+1;
  
}
