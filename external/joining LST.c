#include <stdio.h>
int GetThePosition(int t[],int Size)
{
    int max=0,subseq=0,FinalPosition=-1,pos;
    for (int a=Size-1;a>-1;a--)
    {
        pos=-1;
        for (int b=a;b>-1;b--)
        {
            if ((!(t[b]+t[b+1])&& b!=Size-1 && b!=a)||(t[b]==0&&pos!=-1))
            {
                printf("\t\t%d\t%d\n",a,b);
                break;
            }
            subseq++;
            if (t[b]==0)
                pos=b;
        }
        if (subseq>max)
        {
            max=subseq;
            FinalPosition=pos;
        }
        subseq=0;
    }
    return FinalPosition;
}
void main()
{
  int Array[]={1,1,1,1},Size=5;
  printf("%d\n",GetThePosition(Array,Size));
  /*
  1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 1               19
  1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 1               19

  */

}
