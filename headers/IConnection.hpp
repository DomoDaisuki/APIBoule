#ifndef		CONNECTION_HPP
# define	CONNECTION_HPP

#include	<string>
#include	"Zia.hpp"

/** \brief Class representing the connexion of a client */

class		IConnection
{
  public:
  /** \brief Virtual Destructor */
  virtual ~IConnection(){};
  /** \brief Returns the client's IP Adress*/
  virtual std::string const & getIPAdress() = 0;
  /** \brief Returns the client's host ID*/
  virtual std::string const &getHostID() = 0;
  /** \brief Returns the client net ID*/
  virtual std::string const &getNetID() = 0;
  /** \brief Returns the client port*/
  virtual std::string const &getPort() = 0;
  /** \brief Returns the connection socket */
  virtual SOCKET const &getSocket() = 0;
  /** \brief Returns the client's request  */
  virtual std::string const &getRequest() = 0;
  /** \brief Set the client's socket */
  virtual void setSocket(SOCKET) = 0;
};

#endif		//CONNECTION_HPP
