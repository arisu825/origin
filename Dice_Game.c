#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int func(void);

int main(void){

  int num[2],sum,i;

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

  if(sum>7){
    printf("%sが勝ちました！\n",name);
  }else{
    printf("%sは負けました！\n",name);
  }

  return 0;
  
}

int func(void){

  return rand()%6+1;
  
}
