#ifndef		IPARSE_HPP
# define	IPARSE_HPP

# include	<string>
/** \brief Interface for parsing the client's request   */
class		IParse
{
  public:
  /** \brief Virtual destructor */
  virtual	~IParse(){}
  /** \brief Returns the URL required by the client*/
  virtual const std::string &getURL() = 0;
  /** Set the client URL  */
  virtual void	setURL(std::string &) = 0;
};

#endif		//IPARSE_HPP
