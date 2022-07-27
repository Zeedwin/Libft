/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <jgirard-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 22:23:40 by jgirard-          #+#    #+#             */
/*   Updated: 2022/04/07 22:25:25 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*secure_lstnew(void *content, void (*del)(void *))
{
	t_list	*ret;

	ret = ft_lstnew(content);
	if (ret == NULL)
		del(content);
	return (ret);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*ptr;

	if (lst == NULL)
		return (NULL);
	ret = secure_lstnew(f(lst->content), del);
	if (ret == NULL)
		return (NULL);
	lst = lst->next;
	ptr = ret;
	while (lst)
	{
		ptr->next = secure_lstnew(f(lst->content), del);
		if (ptr->next == NULL)
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
		ptr = ptr->next;
		lst = lst->next;
	}
	return (ret);
}
