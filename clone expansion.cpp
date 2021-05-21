#include<stdio.h>
#include<stdlib.h>

void print(int **s,int i,int columns,int degree)
{
    int j,x;
    for(j=0;j<columns;j++)
        {
            x=0;
            if(columns%2!=0)
                if(j!=columns/2) {
                    while(x<=degree) {
                        printf("%d ",s[i][j]);
                        x++; }
                    }
                else
                    printf("%d ",s[i][j]);
            else
                {
                    if(j==columns/2 || j==columns/2-1)
                        printf("%d ",s[i][j]);
                    else
                        while(x<=degree) {
                            printf("%d ",s[i][j]);
                            x++; }
                }

        }
}

int main()
{
    int rows,columns,i,j,degree,y,**s;
    printf("Enter rows and columns : ");
    scanf("%d %d",&rows,&columns);
    s=(int**)malloc(sizeof(int)*rows);
    for(i=0;i<rows;i++)
        s[i]=(int*)malloc(sizeof(int)*columns);
    printf("Enter array :-\n");
    for(i=0;i<rows;i++)
        {
            for(j=0;j<columns;j++)
                scanf("%d",&s[i][j]);
        }
    printf("Enter expansion degree : ");
    scanf("%d",&degree);
    printf("\n");
    for(i=0;i<rows;i++)
        {
            y=0;
            if(rows%2!=0)
                {
                if(i!=rows/2)
                while(y<=degree)
                    {
                        print(s,i,columns,degree);
                        printf("\n");
                        y++;
                    }
                else
                    {
                        print(s,i,columns,degree);
                        printf("\n");
                    }
                }
            else
                {
                    if(i==rows/2 || i==rows/2-1)
                        {
                            print(s,i,columns,degree);
                            printf("\n");
                        }
                    else
                        {
                            while(y<=degree)
                                {
                                    print(s,i,columns,degree);
                                    printf("\n");
                                    y++;
                                }
                        }
                }
        }
    return 0;
}
