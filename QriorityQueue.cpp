#define MaxLength 100

typedef int ElementType;

typedef int Position;

typedef struct

{

	ElementType Data[MaxLength];

	Position Last;

} PriorityQueue;

void MakeNullPriorityQueue(PriorityQueue *L)

{

	(*L).Last=0;

}

void InsertPriorityQueue(ElementType X, PriorityQueue *L)

{

	Position P;

	ElementType temp;

	if (FullPriorityQueue(*L))

		printf("Hang day");

	else

	{

		Position i=++L->Last;

		L->Data[L->Last]=X;

		while ((i>0)&&(p(L->Data[i])<p(L->Data[i/2])))

		{

			temp=(*L).Data[i];

			(*L).Data[i]=(*)L.Data[i/2];

			(*L).Data[i/2]=temp;

			i=i/2;

		}

	}

}

ElementType DeleteMin(Position P,PriorityQueue *L)

{

	if (EmptyPriorityQueue(*L))

		printf("\nHang rong!");

	else

	{

		ElementType minimum= (*L).Data[1];

		(*L).Data[1]=(*L).Data[(*L).Last];

		(*L).Last--;

		int i=1,found =0;

		while ((i<=L->Last/2)&&(found==0))

			if((p((*L).Data[2*i]<p((*L).Data[2*i+1]))||(2*i==L->Last))

				j=2*i;

		else j=2*i+1;

		if ((p((*L).Data[i]>p((*L).Data[j]))

		{

			temp=(*L).Data[i];

			(*L).Data[i]=(*L).Data[j];

			(*L).Data[j]=temp;

			i=j; 

		} else found=1;

	return minimum;

	}

}
