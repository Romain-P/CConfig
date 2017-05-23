/*
** config.h for  in /home/romain.pillot/projects/ghoulc
** 
** Made by romain pillot
** Login   <romain.pillot@epitech.net>
** 
** Started on  Mon May 22 16:07:46 2017 romain pillot
** Last update Tue May 23 14:26:00 2017 romain pillot
*/

#ifndef CONFIG_H_
# define CONFIG_H_

# include <stdbool.h>

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
  t_key		**keys;
}		t_config;

#endif /* !CONFIG_H_ */
