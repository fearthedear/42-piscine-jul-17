
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct	s_node *ptr;

typedef struct	s_node
{
	char	val;
	ptr		next;
}				t_node;

void	insert(ptr *head, char c)
{
	while (*head)
		head = &(*head)->next;
	*head = malloc(sizeof(**head));
	(*head)->val = c;
	(*head)->next = NULL;
}

void fill_str(ptr head, char *str)
{
	int i;

	i = 0;
	while (head)
	{
		str[i] =  head->val;
		head = head->next;
		i++;
	}
	str[i] = '\0';
}

int		main()
{
	char	ch;
	char	*str;
	int		i;
	ptr head = NULL;

	while(read(0, &ch, 1) > 0)
	{
		insert(&head, ch);
		i++;
	}
	str = (char*)malloc(sizeof(char) * (i + 1));
	fill_str(head, str);
	printf("%s", str);
}
