#include <stdio.h>
int main()
{
    int i, t,x,y,z,total,total2;
    printf("enetr no  of test cases");
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {

      printf("enter x\nenter y\n enter z ") ;
      scanf("%d%d%d",&x,&y,&z);
       total=x*y;
      if(x<=3)
      {

        printf("time taken is %d minutes",total);
      }
      else
      {
        total2=(x/3)*z;
          printf("time taken is %d minutes",total+total2);

      }

    }

}