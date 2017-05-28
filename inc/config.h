/*
** config.h for  in /home/romain.pillot/projects/ghoulc
** 
** Made by romain pillot
** Login   <romain.pillot@epitech.net>
** 
** Started on  Mon May 22 16:07:46 2017 romain pillot
** Last update Sun May 28 03:14:52 2017 romain pillot
*/

#ifndef CONFIG_H_
# define CONFIG_H_

# include <stdbool.h>
# include "array.h"

# define KEY_SEPARATOR		('.')
# define VALUE_SEPARATOR	(':')

typedef enum	e_keytype
{
  KEY_ARRAY,
  INTEGER,
  STRING,
  BOOLEAN,
  STRING_ARRAY,
  UNDEFINED
}		t_keytype;

typedef struct	s_key
{
  char		*name;
  t_keytype	type;
  void		*value;
}		t_key;

typedef struct	s_config
{
  char		*name;
  t_array	*keys;
}		t_config;

#endif /* !CONFIG_H_ */
