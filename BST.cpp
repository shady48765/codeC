KeyType DeleteMin (Tree *Root )
{

	KeyType k;

	if ((*Root)->left == NULL)
	{

		k=(*Root)->key;

		(*Root) = (*Root)->right;

		return k;

	} else return DeleteMin(Root->left);

}

void DeleteNode(key X,Tree *Root)
{

	if ((*Root)!=NULL)

	if (x < (*Root)->Key) DeleteNode(x,Root->left)

	else if (x > (*Root)->Key) DeleteNode(x,Root->right)

	else if ((*Root)->left==NULL)&&((*Root)->right==NULL) (*Root)=NULL;

	else if ((*Root)->left == NULL) (*Root) = (*Root)->right

	else if ((*Root)->right==NULL) (*Root) = (*Root)->left

	else (*Root)->Key = DeleteMin(Root->right);

}
