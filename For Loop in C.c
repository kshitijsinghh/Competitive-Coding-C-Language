#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int a, b;
    int i;
    char * number[11]= {"one", "two","three","four","five","six","seven","eight","nine","odd","even"};
    scanf("%d\n%d", &a, &b);
  	 for(i=a;i<=b;i++){
          if(i<=9){
              printf("%s \n", number[i-1]);

          }
          else{
              if(((i-1)%2)==0){
                  printf("%s \n",number[9]);
              }
              else{
                  printf("%s \n",number[10]);
              }
          }
       }
    return 0;
}


