#define MaxLength ... 

typedef ... ElementType; 

typedef int Position;

typedef struct

{

	ElementType Data[MaxLength];

	Position Last;

} SET;

void MakeNullSET(SET *L)

{

	(*L).Last=0;

}


int Member(ElementType X, SET L)

{

	Position P=1, Found=0;

	while ((P <= (L.Last)) && (Found == 0))

	if ((L.Data[P]) == X) Found = 1;

	else P++;

	return Found;

}

void InsertSET(ElementType X, SET *L)

{

	if (FullSET(*L))

	printf("Tap hop day");

	else if (Member(X,*L)==0)

	{

		(*L).Last++;

		(*L).Data[(*L).Last]=X;

	} else printf ("\nPhan tu da ton tai trong tu dien");

}
void DeleteSET(ElementType X, SET *L)

{

	if (EmptySET(*L)) printf("Tap hop rong!");

	else

	{

		Position Q=1;

		while ((Q<=(*L).Last)&& ((*L).Data[Q]!=X)) Q++;

		if ( (*L).Data[Q]==X)

		{ 
			for (int i=Q;i<(*L).Last;i++)

			(*L).Data[i]=(*L).Data[i+1];

			(*L).Last--;

		}

	}

}
