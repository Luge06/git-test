#include<stdio.h>

int main(){
    int number,n;
    scanf ("%d  %d",&number,&n);
    int count=0;
    int cai;
    for(count=1;count<=n;count++){
        scanf ("%d",&cai);
        if (cai<0){
            break;
        }else if (cai>number){
            printf ("Too big\n");
        }else if (cai<number){
            printf ("Too small\n");
        }else {
            if (count==1){
                printf ("Bingo!\n");
            }else if (count<=3){
                printf ("Lucky You!\n");
            }else {
                printf("Good Guess\n");
            }
        }    
    }
    printf ("Game Over\n");
    


    return 0;
}