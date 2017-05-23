/*
** key_array.c for  in /home/romain.pillot/projects/ghoulc/src
** 
** Made by romain pillot
** Login   <romain.pillot@epitech.net>
** 
** Started on  Tue May 23 14:48:44 2017 romain pillot
** Last update Tue May 23 15:08:04 2017 romain pillot
*/

#include <stdlib.h>
#include <unistd.h>

static void	**init_array(void *elem)
{
  void		**array;

  if (!(array = malloc(sizeof(void *) * 2)))
    return (NULL);
  array[0] = elem;
  array[1] = NULL;
  return (array);
}

void	**array_add(void **array, void *elem)
{
  void	**new;
  int	len;

  if (!elem)
    return (array);
  if (!array)
    return (init_array(elem));
  len = 0;
  while (array[len] && ++len);
  new = malloc(sizeof(void *) * (len + 1));
  new[len] = 0;
  while (len--)
    new[len] = array[len];
  while (*array)
    free(*array++);
  free(array);
  return (array);
}
