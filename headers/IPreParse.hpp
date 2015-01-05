#ifndef		IPREPARSE_HPP
# define	IPREPARSE_HPP

# include	<string>

/** \brief Interface for parsing the client's request   */
class		IPreParse
{
  public:
  /** \brief Virtual destructor */
  virtual	~IPreParse(){}
  /** \brief Returns the URL required by the client*/
  virtual const std::string &getURL() const = 0;
  /** Set the client URL  */
  virtual void	setURL(std::string &) = 0;
};

#endif		//IPREPARSE_HPP
