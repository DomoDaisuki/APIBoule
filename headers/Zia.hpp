#ifndef		ZIA_HPP
# define	ZIA_HPP

#include	<stdint.h>

#if defined (linux)
typedef int SOCKET;
#endif

struct
{
  uint32_t	hostID;
  char		port[5];
}		s_ip;

#endif		//ZIA_HPP
