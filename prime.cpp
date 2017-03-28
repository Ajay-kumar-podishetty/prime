#include <bits/stdc++.h>

using namespace std;

int a[1000005];


int main()

{
    
   
          int i,j,n;

          a[0]=1;

          a[1]=1;
    
    for(i=2;i<=1000000;i++)

        {

                if(a[i]==0)

               {
           
                      for(j=2*i;j<=1000000;j=j+i)

                      {

                             a[j]=1;

                      }

              }

        }
       scanf("%d",&n);
       if(a[n]==0)
       {
              printf("it is  a prime no");
       }
       else
       {
               printf("Not a prime no");
       }
      return 0;
}
