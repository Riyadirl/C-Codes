#include <stdio.h>

int main()
{

    int p,q,m,n,x;

    //Declaration of array size
    printf("Enter the size of a  ");
    scanf("%d",&m);
    printf("\nEnter the size of b  ");
    scanf("%d",&n);
    printf("\nEnter the size of c  ");
    scanf("%d",&x);

    // Declaration of array element
    int a[m], b[n],c[x];
    if((m!=n!=x)&&(x>=m+n)){

    printf("\nEnter the Elemenets of a:  ");
    for( p=0;p<m;p++)
    {
       scanf("%d",&a[p]);

    }
    printf("Enter the elements of b: ");
    for(p=0;p<n;p++)
    {

        scanf("%d", &b[p]);
    }
    for(p=0;p<n;p++){
        c[p]=b[p];
    }
    for(q=0;q<m;q++,p++){
      c[p]=a[q];
    }
    printf("\nThe new array c : ");
    for(p=0;p<m+n;p++){
        printf("%d ", c[p]);

    }
}


return 0;

}


