/*
** config.c for  in /home/romain.pillot/projects/ghoulc/src
** 
** Made by romain pillot
** Login   <romain.pillot@epitech.net>
** 
** Started on  Tue May 23 13:46:43 2017 romain pillot
** Last update Tue May 23 14:44:54 2017 romain pillot
*/

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "config.h"
#include "util.h"

static bool	open_file(const char *file_name, int *fd)
{
  if ((*fd = open(file_name, O_RDONLY)) == -1)
    fprint("open_file: can't read the given file name.");
  return (*fd != -1);
}

static void	parse_line(t_config *config, const char *str)
{
  
}

t_config	*config_load(const char *file_name)
{
  t_config	*config;
  int		fd;
  char		*str;

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
