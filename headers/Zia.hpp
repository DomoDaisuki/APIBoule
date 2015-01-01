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

enum priority {VERY_LOW, LOW, MODERATE, HIGH, VERY_HIGH, CRITICAL};

#endif		//ZIA_HPP
