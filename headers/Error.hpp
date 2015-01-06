#ifndef		ERROR_HPP
# define	ERROR_HPP

# include	<string>
# include	<exception>

/** \brief Class managing potential errors */
class		Error : public std::exception
{
  public:
  short		code;
  std::string	message; 

  Error(const char* msg){message = msg;}
  Error(const std::string msg){message = msg;}
  virtual ~Error() throw(){}
  virtual const char* what() const throw(){return message.c_str();}
};

#endif		//ERROR_HPP
