#define MAX 10
#define #define inputfile "C:/Users/Admin/Desktop/ThucHanhLTDT_HUTECH_SV/Bo du lieu test/test3.txt"
typedef struct GRAPH {
	int n;
	int a[MAX][MAX];
}DOTHI;
struct STACK
{
	int array[100];
	int size;
};
void taoStack(STACK &stack)
{
	stack.size=0;
}
void push(STACK &stack,int value)
{
	if(stack.size+1>=100)
		return;
	stack.array[stack.size]=value;
	stack.size++;
}
void TimDuongDi(int i,DOTHI &g,STACK &stack)
{
	for(int j=0;j<g.n;j++)
	{
		if(g.a[i][j]!=0)
		{
			g.a[i][j]=g.a[j][i]=0;
			TimDuongDi(j.g.stack);
		}
	}
	push(stack,i);
}
int ChuTrinhEuler(DOTHI g)
{
	int x=0;
	int f=0;
	for(int i=0;i<g.n;i++)
	{
		for(int j=0;j<g.n;j++)
		{
			if(g.a[i][j]!=0)
			{
				x=i;f=1;
				break;
			}
		}
		if(f==1) break;
	}
	DOTHI temp=g;
	STACK stack;
	taoStack(stack);
	TimDuongDi(x,temp,stack);
	for(int i=0;i<temp.n;i++)
	{
		for(int j=0;j<temp.n;j++)
		{
			if(temp.a[i][j]!=0)
				return 0;
		}
	}
	if(stack.array[stack.size-1]!=stack.array[0])
		return 0;
	cout<<"\nchu trinh euler: "
	for(int i=stack.size-1;i>=0;i--)
		cout<<stack.array[i]+1<<" ";
	return 1;
}
