#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdarg.h>

#define HASH_TABLE_SIZE 50

/* struct to hold entries in symbol table */
typedef struct entry_s
{
	char* lexeme;
	double value;
	double data_type;
	double storage;
	int line_no;
	struct entry_s* successor;
}entry_t;

/* Create hashtable */
entry_t** create_table()
{
	entry_t** hash_table_ptr = NULL; 

	/* Hardcoing and allocating 50 entries */
	if( ( hash_table_ptr = malloc( sizeof( entry_t* ) * HASH_TABLE_SIZE ) ) == NULL )
    		return NULL;// Heap consumed

	int i;


	for( i = 0; i < HASH_TABLE_SIZE; i++ )
	{
		hash_table_ptr[i] = NULL;//All pointers made NULL
	}

	return hash_table_ptr;
}

/* Generate hash from a string. Then generate an index in [0, HASH_TABLE_SIZE) */
uint32_t hash( char *lexeme )
{
	size_t i;
	uint32_t hash;

//Jenkins hash function being applied
	for ( hash = i = 0; i < strlen(lexeme); ++i ) {
		hash += lexeme[i];
		hash += ( hash << 10 );
		hash ^= ( hash >> 6 );
	    }
	hash += ( hash << 3 );
	hash ^= ( hash >> 11 );
	hash += ( hash << 15 );

	return hash % HASH_TABLE_SIZE; 
}

/* Create an entry for a lexeme, token pair. This will be called from the insert function */
entry_t *create_entry( char *lexeme, int value )
{
	entry_t *newentry;

	/* Allocate space for newentry */
	if( ( newentry = malloc( sizeof( entry_t ) ) ) == NULL ) {
		return NULL;
	}
	/* Copy lexeme to newentry location using strdup. Return NULL if it fails */
	if( ( newentry->lexeme = strdup( lexeme ) ) == NULL ) {
		return NULL;
	}

	newentry->value = value;
	newentry->successor = NULL;

	return newentry;
}

/* Search for an entry given a lexeme. Return a pointer to the entry of the lexeme exists, else return NULL */
entry_t* search( entry_t** hash_table_ptr, char* lexeme )
{
	uint32_t idx = 0;
	entry_t* myentry;

    // get the index of this lexeme as per the hash function
	idx = hash( lexeme );

	/* Traverse the linked list at this idx and see if lexeme exists */
	myentry = hash_table_ptr[idx];

	while( myentry != NULL && strcmp( lexeme, myentry->lexeme ) != 0 )
	{
		myentry = myentry->successor;
	}

	if(myentry == NULL) // lexeme is not found
		return NULL;

	else // lexeme found
		return myentry;

}

/* Insert an entry into a hash table. */
entry_t* insert( entry_t** scope_stack[10], int curr_scp, char* lexeme, int value, int DECL )
{
//printf("%d %s %d\n", curr_scp, lexeme, DECL);

if (DECL) {
 
entry_t** hash_table_ptr = scope_stack[curr_scp];
	
	entry_t* finder = search( hash_table_ptr, lexeme );
	int temp_curr_scp = curr_scp;
	if( finder != NULL) // If lexeme already exists, don't insert, return
	    return finder ;
	    
	
	hash_table_ptr = scope_stack[curr_scp];
	finder = search( hash_table_ptr, lexeme );
	

	uint32_t idx;
	entry_t* newentry = NULL;
	entry_t* head = NULL;

	idx = hash( lexeme ); // Get the index for this lexeme based on the hash function
	newentry = create_entry( lexeme, value ); // Create an entry using the <lexeme, token> pair

	if(newentry == NULL) // In case there was some error while executing create_entry()
	{
		printf("Insert failed. New entry could not be created.");
		exit(1);
	}

	head = hash_table_ptr[idx]; // get the head entry at this index

	if(head == NULL) // This is the first lexeme that matches this hash index
	{
		hash_table_ptr[idx] = newentry;
	}
	else // if not, add this entry to the head
	{
		newentry->successor = hash_table_ptr[idx];
		hash_table_ptr[idx] = newentry;
	}
	return hash_table_ptr[idx];


}




else {

	entry_t** hash_table_ptr = scope_stack[curr_scp];
	
	entry_t* finder = search( hash_table_ptr, lexeme );
	int temp_curr_scp = curr_scp;
	if( finder != NULL) // If lexeme already exists, don't insert, return
	    return finder ;
	    
	while (temp_curr_scp>0) {
		temp_curr_scp--;
		hash_table_ptr = scope_stack[temp_curr_scp];
		finder = search( hash_table_ptr, lexeme );
		if( finder != NULL)
	    	return finder ;
	}

	//printf("NOT Declared\n");
	//printf("%d %s %d\n", curr_scp, lexeme, DECL);
	//exit(1); 
	
	hash_table_ptr = scope_stack[curr_scp];
	finder = search( hash_table_ptr, lexeme );
	

	uint32_t idx;
	entry_t* newentry = NULL;
	entry_t* head = NULL;

	idx = hash( lexeme ); // Get the index for this lexeme based on the hash function
	newentry = create_entry( lexeme, value ); // Create an entry using the <lexeme, token> pair

	if(newentry == NULL) // In case there was some error while executing create_entry()
	{
		printf("Insert failed. New entry could not be created.");
		exit(1);
	}

	head = hash_table_ptr[idx]; // get the head entry at this index

	if(head == NULL) // This is the first lexeme that matches this hash index
	{
		hash_table_ptr[idx] = newentry;
	}
	else // if not, add this entry to the head
	{
		newentry->successor = hash_table_ptr[idx];
		hash_table_ptr[idx] = newentry;
	}
	return hash_table_ptr[idx];
	 }
}

/*Function to display the hash table*/
void display(entry_t** hash_table_ptr, int scp_level)
{
	int i;
	entry_t* ptr;
    printf("\n----------------------------------SYMBOL TABLE at SCOPE LEVEL %d--------------------------------------------\n", scp_level);
    printf(" %-20s %-20s %-20s %-20s %-20s\n","Lexeme","Value", "DT", "STORAGE", "Line Number");
    printf("-----------------------------------------------------------------------------------------------------------\n");

	for( i=0; i < HASH_TABLE_SIZE; i++)
	{
		ptr = hash_table_ptr[i];

		while( ptr != NULL)//As long as there exists more entries
		{	
			{
			char* str_dt;
			if ((int)ptr->data_type  ==1) {
				str_dt = "integer";
				printf(" %-20s %-20d %-20s %-20d %-20d\n", ptr->lexeme, (int)ptr->value, str_dt, (int)ptr->storage, ptr->line_no);
				}
			else if ((int)ptr->data_type  ==2) {
				str_dt = "short";
				printf(" %-20s %-20d %-20s %-20d %-20d\n", ptr->lexeme, (short)ptr->value, str_dt, (int)ptr->storage, ptr->line_no);
				}
			else if ((int)ptr->data_type  ==3) {
				str_dt = "long";
				printf(" %-20s %-20ld %-20s %-20d %-20d\n", ptr->lexeme, (long)ptr->value, str_dt, (int)ptr->storage, ptr->line_no);
				}
			else if ((int)ptr->data_type  ==4) {
				str_dt = "float";
				printf(" %-20s %-20f %-20s %-20d %-20d\n", ptr->lexeme, (float)ptr->value, str_dt, (int)ptr->storage, ptr->line_no);
				}
			else {
				str_dt = "complex/derived";
				printf(" %-20s %-20d %-20s %-20d %-20d\n", ptr->lexeme, (int)ptr->value, str_dt, (int)ptr->storage, ptr->line_no);
				}
			}
		
			ptr = ptr->successor;
		}
	}
    printf("-----------------------------------------------------------------------------------------------------------\n");

}


//--------------------------------------------------- AST -------------------------------------------------------

typedef struct node
{
	int isLeaf;
	char* op;
	struct entry_s* symtab_entry;	//if its an identifier
	double value;			//if its a num
	char* string;
	struct node* left;
	struct node* right;
}NODE;


//struct entry_s* symtab_entry, double value, int isiden, NODE* left_node, NODE* right_node, LEAF_NODE* left_leaf, LEAF_NODE* right_leaf, int isLeftLeaf, int isRightLeaf)
NODE* newnode(char* op, int isLeaf, int arg_count, ...)
{
	int i;
	va_list ap;
	va_start(ap, arg_count);
	NODE* temp = (NODE*) malloc(sizeof(NODE));
	temp->op = (char*) malloc(sizeof(char)*(strlen(op) + 1));
	strcpy(temp->op, op);
	temp->symtab_entry = NULL;
	temp->string = NULL;
	temp->value = 0;
	temp->left = NULL;
	temp->right = NULL;
	temp->isLeaf = 0;	

	if (isLeaf) {
		temp->isLeaf = 1;
		if (strcmp(temp->op,"ID") == 0) {
			//printf("\tCreated identifierrrr\n");
			temp->symtab_entry = va_arg(ap, struct entry_s*);
			return temp;
		}
		
		if (strcmp(temp->op,"STRING") == 0)
		{
			//printf("\tCreated STRING\n");
			strcpy(temp->string, va_arg(ap, char*));
			return temp;
		}
		
		else {
			//printf("\tCreated number\n");
			temp->value = va_arg(ap, double);
			return temp;
		}
	}
	
	else {
		//printf("\tCreated node\n");
		temp->left = va_arg(ap, struct node*);
		temp->right = va_arg(ap, struct node*);
		return temp;	
	}
	
	return temp;
}

void preorder(NODE* root)
{
	if (root == NULL)
		return;
	printf("operator = %s\n", root->op);
	if (root->isLeaf) {
	//if (root->left == NULL && root->right == NULL) {
		if (root->symtab_entry == NULL)
		{
			if (root->string == NULL)
				printf("\tvalue = %f\n", root->value);
			else
				printf("\tstring = %s\n", root->string);
		}
		else
			printf("\tSymbol table entry = %p Name of identifier = %s\n Value = %lf", root->symtab_entry,root->symtab_entry->lexeme,root->symtab_entry->value);
		return;
	}
	preorder(root->left);
	preorder(root->right);
}
