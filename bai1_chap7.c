void Insert_List (ElementType X,Position p, DoubleList *DL)
{

if (*DL == NULL)
	{

		(*DL)=(Node*)malloc(sizeof(Node));

		(*DL)->Element = X;

		(*DL)->Previous =NULL;

		(*DL)->Next =NULL;

	} else{

		Position temp;

		temp=(Node*)malloc(sizeof(Node));

		temp->Element=X;

		temp->Next=p;

		temp->Previous=p->Previous;

		if (p->Previous!=NULL)

			p->Previous->Next=temp;

		p->Previous=temp;

		}

}
