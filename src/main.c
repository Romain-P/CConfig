/*
** main.c for  in /home/romain.pillot/projects/ghoulc/src
** 
** Made by romain pillot
** Login   <romain.pillot@epitech.net>
** 
** Started on  Mon May 22 14:09:17 2017 romain pillot
** Last update Sun May 28 17:09:50 2017 romain pillot
*/

#include "config.h"
#include "array.h"
#include <stdlib.h>
#include "util.h"

int		main(int ac, char **args)
{
  t_config	*config;

  config = config_load("res/template.conf");
  config_destroy(config);
  //t_key *key = key_find(config->keys, "key");
  //key = key_find((t_array *) key->value, "array");
  //printf("number: %s\n", ((t_key *)((t_array *)key->value)->values[0])->value);
  return (0);
}
