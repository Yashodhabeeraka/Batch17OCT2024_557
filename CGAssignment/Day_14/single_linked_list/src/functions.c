/*****************************************************
    FILENAME: functions.c

    DESCRIPTION: 
        This file contains varius functions of linked
        list operations insertion, deletion, etc.

*****************************************************/

#include <header.h>


/*****************************************************
                   Local Functions
*****************************************************/
int create_node(Node **, int);



/*****************************************************

    FUNCTION_NAME: create_node
    
    DESCRIPTION:
        This function allocates memory to a node.
    
    PARAMETERS:
        Parameters are self descriptive.

    RETURN VALUE:
        It returns SUCCESS or FAILURE.

*****************************************************/
int create_node(Node **new_node, int data_len)
{
    *new_node = (Node *)malloc(sizeof(Node));
     if (NULL == *new_node)
     {
         perror("error while creating node");
         return FAILURE;
     }

    (*new_node)->str = (char *)calloc(data_len, sizeof(char));
    if (NULL == (*new_node)->str)
    {
         perror("error while creating node, allocating memory for str");
         return FAILURE;
  
    }
    (*new_node)->next = NULL;
    return SUCCESS;
}

/*****************************************************

    FUNCTION_NAME: myfflush
    
    DESCRIPTION:
        This function is a replacement of inbuilt
        function fflush(stdin)
    
    PARAMETERS:
        No parameters

    RETURN VALUE:
        It returns void

*****************************************************/
void myfflush(void)
{
    while('\n' != getchar());
}

/*****************************************************

    FUNCTION_NAME: get_string_input
    
    DESCRIPTION:
        This function reads a string from the stdin.
    
    PARAMETERS:
        Parameters are self descriptive.

    RETURN VALUE:
        It returns void

*****************************************************/
void get_string_input(char *input_string)
{
    while(1)
    {
        fgets(input_string, SIZE-1, stdin);
        int len = strlen(input_string);
        if (1 == len)
        {
            printf("\tempty string, enter again: ");
            memset(input_string, 0, SIZE);
            continue;
        }
        if ('\n' == input_string[len - 1])
        {
            input_string[len - 1] = '\0';
        }
        else
        {
            myfflush();
        }
        break;
    }
}

/*****************************************************

    FUNCTION_NAME: insert_at_beg
    
    DESCRIPTION:
        This function insert a node at the beginning
        of list.
    
    PARAMETERS:
        Parameters are self descriptive.

    RETURN VALUE:
        It returns SUCCESS or FAILURE


*****************************************************/
int insert_at_beg(Node **head, char *str)
{
    Node *new_node = NULL;
    if (FAILURE == create_node(&new_node, strlen(str) + 1))
    {
        return FAILURE;
    }
    strcpy(new_node->str, str);
    
    new_node->next = *head;
    *head = new_node;

    return SUCCESS;
}




/*****************************************************

    FUNCTION_NAME: insert_in_middle
    
    DESCRIPTION:
        This function insert a node in the list anywhere.
    
    PARAMETERS:
        Parameters are self descriptive.

    RETURN VALUE:
        It returns SUCCESS or FAILURE


*****************************************************/
int insert_in_middle(Node **head, char *str, char *after)
{
    Node *tmp = NULL;
   
    Node *new_node = NULL;
    if (FAILURE == create_node(&new_node, strlen(str) + 1))
    {
        return FAILURE;
    }
    strcpy(new_node->str, str);
        
    if(NULL == *head)
    {
        *head = new_node;
        return SUCCESS;
    }

    tmp = *head;

    while (NULL != tmp->next)
    {
        if(!strcmp(tmp->str, after))
        {
            new_node->next = tmp->next;
            tmp->next = new_node;
            return SUCCESS;
        }
        tmp = tmp->next;
    }
    
    tmp->next = new_node;
    
    return SUCCESS;
}




/*****************************************************

    FUNCTION_NAME: insert_at_end
    
    DESCRIPTION:
        This function insert a node at the end of list.
    
    PARAMETERS:
        Parameters are self descriptive.

    RETURN VALUE:
        It returns SUCCESS or FAILURE


*****************************************************/
int insert_at_end(Node **head, char *str)
{
    Node *tmp = NULL;
   
    Node *new_node = NULL;
    if (FAILURE == create_node(&new_node, strlen(str) + 1))
    {
        return FAILURE;
    }
    strcpy(new_node->str, str);
        
    if(NULL == *head)
    {
        *head = new_node;
        return SUCCESS;
    }

    tmp = *head;

    while (NULL != tmp->next)
    {
        tmp = tmp->next;
    }
    
    tmp->next = new_node;
    
    return SUCCESS;
}




/*****************************************************

    FUNCTION_NAME: delete_at_beg
    
    DESCRIPTION:
        This function deletes a node at the brginning of list.
    
    PARAMETERS:
        Parameters are self descriptive.

    RETURN VALUE:
        It returns SUCCESS or FAILURE


*****************************************************/
int delete_at_beg(Node **head)
{
    Node *tmp = *head;
        
    if(NULL == tmp)
    {
        printf("\tList is empty, deletion failed");
        return FAILURE;
    }

    *head = (*head)->next;
    free(tmp->str);
    free(tmp);
    
    return SUCCESS;
}



/*****************************************************

    FUNCTION_NAME: delete_in_middle
    
    DESCRIPTION:
        This function deletes a node from anywhere in the list.
    
    PARAMETERS:
        Parameters are self descriptive.

    RETURN VALUE:
        It returns SUCCESS or FAILURE


*****************************************************/
int delete_in_middle(Node **head, char *str)
{
    Node *tmp = *head;
        
    if(NULL == tmp)
    {
        printf("\tList is empty, deletion failed\n");
        return FAILURE;
    }
    else
    {
        if(!strcmp(tmp->str, str))
        {
            *head = tmp->next;
            free(tmp->str);
            free(tmp);
            return SUCCESS;
        }
    }
    
    if(NULL == tmp->next)
    {
        printf("\t\"%s\" does not exist in the list\n", str);
        return FAILURE;
    }

    do
    {
        if (!strcmp(tmp->next->str, str))
        {
            Node *free_node = tmp->next;
            tmp->next = tmp->next->next;
            free(free_node->str);
            free(free_node);
            return SUCCESS;
        }
        tmp = tmp->next;
    }while (NULL != tmp->next);

    printf("\t\"%s\" does not exist in the list\n", str);
    return FAILURE;
}



/*****************************************************

    FUNCTION_NAME: delete_at_end
    
    DESCRIPTION:
        This function deletes a node from anywhere in the list.
    
    PARAMETERS:
        Parameters are self descriptive.

    RETURN VALUE:
        It returns SUCCESS or FAILURE


*****************************************************/
int delete_at_end(Node **head)
{
    Node *tmp = *head;
        
    if(NULL == tmp)
    {
        printf("\tList is empty, deletion failed\n");
        return FAILURE;
    }
    
    if(NULL == tmp->next)
    {
        free(tmp->str);
        free(tmp);
        *head = NULL;
        return SUCCESS;
        
    }

    while (NULL != tmp->next->next)
    {
        tmp = tmp->next;
    }
    
    Node *free_node = tmp->next;
    tmp->next = NULL;
    free(free_node->str);
    free(free_node);
    
    return SUCCESS;

}




/*****************************************************

    FUNCTION_NAME: display_list
    
    DESCRIPTION:
        This function displays the list.
    
    PARAMETERS:
        Parameters are self descriptive.

    RETURN VALUE:
        It returns void 


*****************************************************/
void display_list(Node *head)
{
    if (NULL == head)
    {
        printf("\tList is empty\n");
        return;
    }
    else
    {
        printf("\tElements in list are:\n");
    }
    while(head != NULL)
    {
        printf("\t%s\n", head->str);
        head = head->next;
    }
}




/*****************************************************

    FUNCTION_NAME: free_list
    
    DESCRIPTION:
        This function frees the list.
    
    PARAMETERS:
        Parameters are self descriptive.

    RETURN VALUE:
        It returns void 


*****************************************************/
void free_list(Node **head)
{
    Node *tmp = *head;
    while (tmp != NULL)
    {
       Node *free_node = tmp;
       tmp = tmp->next;
       free(free_node->str);
       free(free_node);
    }
    *head = NULL;
}



