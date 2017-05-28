/*
** key.c for  in /home/romain.pillot/projects/ghoulc/src
** 
** Made by romain pillot
** Login   <romain.pillot@epitech.net>
** 
** Started on  Sun May 28 04:05:26 2017 romain pillot
** Last update Sun May 28 16:11:07 2017 romain pillot
*/

#include <stdlib.h>
#include "config.h"
#include "util.h"

t_key	*key_find(t_array *array, const char *name)
{
  t_key	**keys;

  keys = array ? (t_key **) array->values : NULL;
  while (keys && *keys++)
    if (str_equals(keys[-1]->name, name))
      return (keys[-1]);
  return (NULL);
}

t_key	*key_create(const char *name, t_keytype type, void *value)
{
  t_key	*key;

  if (!(key = malloc(sizeof(t_key))))
    return (NULL);
  key->name = str_dupl(name);
  key->type = type;
  key->value = value;
  key->boolean = false;
  key->integer = -1;
  return (key);
}
