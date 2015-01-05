#ifndef		ISENDRESPONSE_HPP
# define	ISENDRESPONSE_HPP

#include	<string>
/** \brief Interface sending the reponse request to the client  */
class		ISendResponse
{
  public:
  /** \brief Virtual destructor  */
  virtual	~ISendResponse(){}
  /** \brief returns the http response code */
  virtual       short int getCode() const = 0;
  /** \brief sets the http response code */
  virtual       void setCode(short int) = 0;
  /** \brief returns the http response status message */
  virtual       std::string getStatus() const = 0;
  /** \brief sets the http response status message */
  virtual       std::string setStatus() = 0;
};

#endif
