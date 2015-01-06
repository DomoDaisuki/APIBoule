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
  virtual const Error &PreParse(I *){}
  /** \brief Hook after parsing request */
  virtual const Error &PostParse(IConnexion *){}
  /** \brief Hook before getting content */
  virtual const Error &preGetContent(){}
  /** \brief Hook after getting content */
  virtual const Error &postGetContent(){}
  /** \brief Hook before sending request */
  virtual const Error &PreSend(IConnexion *){}
  /** \brief Hook after sending request */
  virtual const Error &PostSend(IConnexion *){}
};

#endif		//IMODULE_HPP
