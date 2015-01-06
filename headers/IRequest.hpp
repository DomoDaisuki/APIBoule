#ifndef		IREQUEST_HPP
# define	IREQUEST_HPP

#include	<string>
/** \brief  class managing the http requests*/
class		Request
{
public:
  /** \brief Virtual destructor  */
  virtual       ~IGenResponse(){}
  /** \brief returns the http response code */
  virtual       short int getCode() const = 0;
  /** \brief sets the http response code */
  virtual       void setCode(short int) = 0;
  /** \brief returns the http response status message */
  virtual       std::string getStatus() const = 0;
  /** \brief sets the http response status message */
  virtual       std::string setStatus() = 0;
};

#endif		//IREQUEST_HPP
