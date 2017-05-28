/*
** config.c for  in /home/romain.pillot/projects/ghoulc/src
** 
** Made by romain pillot
** Login   <romain.pillot@epitech.net>
** 
** Started on  Tue May 23 13:46:43 2017 romain pillot
** Last update Sun May 28 03:33:10 2017 romain pillot
*/

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "config.h"
#include "util.h"
#include "array.h"

static bool	open_file(const char *file_name, int *fd)
{
  if ((*fd = open(file_name, O_RDONLY)) == -1)
    fprint("open_file: can't read the given file name.");
  return (*fd != -1);
}

static void	parse_line(t_config *config, const char *str)
{
  char		**data;
  char		**keys;

  data = str_split(str_dupl(str), VALUE_SEPARATOR);
  keys = str_split(data[0], KEY_SEPARATOR);
  
  TAB_FREE(data);
  FREE(keys);
}

t_config	*config_load(const char *file_name)
{
  t_config	*config;
  int		fd;
  char		*str;
  t_array	*array;
  int		index;

  index = 0;
  array = array_create();
  if (!open_file(file_name, &fd) ||
      !(config = malloc(sizeof(t_config))))
    return (NULL);
  while ((str = scan_line(fd)))
    {
      parse_line(config, str);
      free(str);
    }
  close(fd);
  return (config);
}
