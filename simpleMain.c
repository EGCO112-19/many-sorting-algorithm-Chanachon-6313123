#include <stdio.h>
int main(){

  int id ;
  char name[50];
  int i,N=0,num;

  printf("Your Id : ");
  scanf("%d",&id);

  printf("Your Name : ");
  scanf("%s",name);

  printf("Get Num : ");
  scanf("%d",&num);

  
  for(i=1;i<=num;i++){
    printf("%d Number\n",i);
    N+=1;
    printf("N = %d\n",N);
  }

  return 0;
}