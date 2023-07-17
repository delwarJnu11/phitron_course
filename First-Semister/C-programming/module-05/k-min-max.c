#include<stdio.h>
int main(){
   int min,max,a,b,c;
   scanf("%d%d%d",&a,&b,&c);
   min=a;
   max=a;
   if(min>b){ 
      min=b;
    }else if(max<b){
      max=b;
    }
   if(min>c){
      min=c;
    }else if(max < c){
      max = c;
    }
  printf("%d %d", min,max);

}