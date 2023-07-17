#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int x1,x2;
    int tiger=0,pathan=0,draw=0;
    for(int i=1;i<=n;i++){
        scanf("%d %d",&x1,&x2);
        if(x1 > x2){
            tiger++;
        }else if(x1 < x2){
            pathan++;
        }else if( x1==x2){
            draw++;
        }
    }

    if(tiger > pathan){
        printf("Tiger\n");
    }else if(tiger < pathan){
        printf("Pathan\n");
    } else if(tiger == pathan){
        printf("Draw");
    }
    return 0;
}