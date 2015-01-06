#ifndef		IMODULE_HPP
# define	IMODULE_HPP

/** \brief Generic module interface */
class IModule
{
  public:
  /** \brief Virtual destructor */
  virtual ~IModule(){}
  /** \brief Hook before connecting */
  virtual const Error &PreConnexion(IConnexion *){}
  /** \brief Hook after connecting */
  virtual const Error &PostConnexion(IConnexion *){}
  /** \brief Hook before parsing request */
  virtual const Error &PreParse(IRequest *){}
  /** \brief Hook after parsing request */
  virtual const Error &PostParse(IRequest *){}
  /** \brief Hook before getting content */
  virtual const Error &preGetContent(IRequest *){}
  /** \brief Hook before getting content */
  virtual const Error &preGenerate(IResponse *){}
  /** \brief Hook after generating content */
  virtual const Error &postGenerate(IResponse *){}
  /** \brief Hook before sending request */
  virtual const Error &PreSend(IResponse *){}
};

#endif		//IMODULE_HPP
