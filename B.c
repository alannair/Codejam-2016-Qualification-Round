#include <stdio.h>
#include <string.h>

int fn(char arr[], int size, char var, char ch)//s is 1, t is 0
{
  if(size == 0)
  {
    if((var == 's'&& ch == '+')||(var == 't'&& ch =='-'))
      return 0;
    else return 1;
  }

  if(arr[size-1]==ch) return fn(arr,size-1,var,ch);
  else
  {
    ch = ch=='+'?'-':'+';
    var = var=='s'?'t':'s';
    return 1+fn(arr,size-1,var,ch);
  }
}

int main()
{
  int t,s;
  char arr[100];

  scanf("%d",&t );

  for(int i=0;i<t;++i)
  {
    scanf("%s",arr);
    s = strlen(arr);
    printf("Case #%d: %d\n",i+1,fn(arr,s,'s','+'));
  }

  return 0;
}
