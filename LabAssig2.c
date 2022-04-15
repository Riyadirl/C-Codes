#include <stdio.h>
int main(){
   
    int row, col ,n, s, num;

    printf("enter n : ");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        for(s=1;s<=n-row;s++){
            printf("  ");
        }
        for(num=1;num<=row;num++){
            printf(" %d",num);
        }
        printf("\n");
    }
    
   for(row=1;row<=n;row++){
        for(s=1;s<=row;s++){
            printf("  ");
        }
        for(num=1;num<=n-row;num++){
            printf(" %d",num);
        }
        printf("\n");
    }
    
    return 0;
    
}