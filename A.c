#include <stdio.h>

int check(int arr[])
{
  for(int i=0;i<10;++i)
    if(arr[i]) return 1;
  return 0;
}

void cross(int n, int arr[])
{
  if(!n) return;

  arr[n%10]=0;
  cross(n/10,arr);
}

int main()
{
  int t,n;


  scanf("%d",&t);

  for(int i=0;i<t;++i)
  {
    scanf("%d",&n);
    int arr[10] = {1,1,1,1,1,1,1,1,1,1};
    if(!n)
    {
      printf("Case #%d: INSOMNIA\n",i+1);
      continue;
    }

    int j=0;
    while(check(arr))
    {
      ++j;
      cross(j*n,arr);
    }

    printf("Case #%d: %d\n",i+1,j*n);
  }

  return 0;
}
