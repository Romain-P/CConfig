/*
** main.c for  in /home/romain.pillot/projects/ghoulc/src
** 
** Made by romain pillot
** Login   <romain.pillot@epitech.net>
** 
** Started on  Mon May 22 14:09:17 2017 romain pillot
** Last update Sun May 28 18:09:24 2017 romain pillot
*/

#include "config.h"
#include "array.h"
#include <stdlib.h>
#include "util.h"
#include <stdio.h>

int		main()
{
  t_config	*config;
  t_key		*key;

  config = config_load("res/template.conf");
  key = get_key(config, "key");
  printf("value: %d\n", keyget_boolean(key, "path.test.bool"));
  config_destroy(config);
  return (0);
}
