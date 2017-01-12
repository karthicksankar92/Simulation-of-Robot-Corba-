/*
 *  MICO --- an Open Source CORBA implementation
 *  Copyright (c) 1997-2006 by The Mico Team
 *
 *  This file was automatically generated. DO NOT EDIT!
 */

#include <hello.h>


using namespace std;

//--------------------------------------------------------
//  Implementation of stubs
//--------------------------------------------------------

/*
 * Base interface for class HelloWorld
 */

HelloWorld::~HelloWorld()
{
}

void *
HelloWorld::_narrow_helper( const char *_repoid )
{
  if( strcmp( _repoid, "IDL:HelloWorld:1.0" ) == 0 )
    return (void *)this;
  return NULL;
}

HelloWorld_ptr
HelloWorld::_narrow( CORBA::Object_ptr _obj )
{
  HelloWorld_ptr _o;
  if( !CORBA::is_nil( _obj ) ) {
    void *_p;
    if( (_p = _obj->_narrow_helper( "IDL:HelloWorld:1.0" )))
      return _duplicate( (HelloWorld_ptr) _p );
    if (!strcmp (_obj->_repoid(), "IDL:HelloWorld:1.0") || _obj->_is_a_remote ("IDL:HelloWorld:1.0")) {
      _o = new HelloWorld_stub;
      _o->CORBA::Object::operator=( *_obj );
      return _o;
    }
  }
  return _nil();
}

HelloWorld_ptr
HelloWorld::_narrow( CORBA::AbstractBase_ptr _obj )
{
  return _narrow (_obj->_to_object());
}

class _Marshaller_HelloWorld : public ::CORBA::StaticTypeInfo {
    typedef HelloWorld_ptr _MICO_T;
  public:
    ~_Marshaller_HelloWorld();
    StaticValueType create () const;
    void assign (StaticValueType dst, const StaticValueType src) const;
    void free (StaticValueType) const;
    void release (StaticValueType) const;
    ::CORBA::Boolean demarshal (::CORBA::DataDecoder&, StaticValueType) const;
    void marshal (::CORBA::DataEncoder &, StaticValueType) const;
};


_Marshaller_HelloWorld::~_Marshaller_HelloWorld()
{
}

::CORBA::StaticValueType _Marshaller_HelloWorld::create() const
{
  return (StaticValueType) new _MICO_T( 0 );
}

void _Marshaller_HelloWorld::assign( StaticValueType d, const StaticValueType s ) const
{
  *(_MICO_T*) d = ::HelloWorld::_duplicate( *(_MICO_T*) s );
}

void _Marshaller_HelloWorld::free( StaticValueType v ) const
{
  ::CORBA::release( *(_MICO_T *) v );
  delete (_MICO_T*) v;
}

void _Marshaller_HelloWorld::release( StaticValueType v ) const
{
  ::CORBA::release( *(_MICO_T *) v );
}

::CORBA::Boolean _Marshaller_HelloWorld::demarshal( ::CORBA::DataDecoder &dc, StaticValueType v ) const
{
  ::CORBA::Object_ptr obj;
  if (!::CORBA::_stc_Object->demarshal(dc, &obj))
    return FALSE;
  *(_MICO_T *) v = ::HelloWorld::_narrow( obj );
  ::CORBA::Boolean ret = ::CORBA::is_nil (obj) || !::CORBA::is_nil (*(_MICO_T *)v);
  ::CORBA::release (obj);
  return ret;
}

void _Marshaller_HelloWorld::marshal( ::CORBA::DataEncoder &ec, StaticValueType v ) const
{
  ::CORBA::Object_ptr obj = *(_MICO_T *) v;
  ::CORBA::_stc_Object->marshal( ec, &obj );
}

::CORBA::StaticTypeInfo *_marshaller_HelloWorld;


/*
 * Stub interface for class HelloWorld
 */

HelloWorld_stub::~HelloWorld_stub()
{
}

#ifndef MICO_CONF_NO_POA

void *
POA_HelloWorld::_narrow_helper (const char * repoid)
{
  if (strcmp (repoid, "IDL:HelloWorld:1.0") == 0) {
    return (void *) this;
  }
  return NULL;
}

POA_HelloWorld *
POA_HelloWorld::_narrow (PortableServer::Servant serv) 
{
  void * p;
  if ((p = serv->_narrow_helper ("IDL:HelloWorld:1.0")) != NULL) {
    serv->_add_ref ();
    return (POA_HelloWorld *) p;
  }
  return NULL;
}

HelloWorld_stub_clp::HelloWorld_stub_clp ()
{
}

HelloWorld_stub_clp::HelloWorld_stub_clp (PortableServer::POA_ptr poa, CORBA::Object_ptr obj)
  : CORBA::Object(*obj), PortableServer::StubBase(poa)
{
}

HelloWorld_stub_clp::~HelloWorld_stub_clp ()
{
}

#endif // MICO_CONF_NO_POA

CORBA::Long HelloWorld_stub::getTemp()
{
  CORBA::Long _res;
  CORBA::StaticAny __res( CORBA::_stc_long, &_res );

  CORBA::StaticRequest __req( this, "getTemp" );
  __req.set_result( &__res );

  __req.invoke();

  mico_sii_throw( &__req, 
    0);
  return _res;
}


#ifndef MICO_CONF_NO_POA

CORBA::Long
HelloWorld_stub_clp::getTemp()
{
  PortableServer::Servant _serv = _preinvoke ();
  if (_serv) {
    POA_HelloWorld * _myserv = POA_HelloWorld::_narrow (_serv);
    if (_myserv) {
      CORBA::Long __res;

      #ifdef HAVE_EXCEPTIONS
      try {
      #endif
        __res = _myserv->getTemp();
      #ifdef HAVE_EXCEPTIONS
      }
      catch (...) {
        _myserv->_remove_ref();
        _postinvoke();
        throw;
      }
      #endif

      _myserv->_remove_ref();
      _postinvoke ();
      return __res;
    }
    _postinvoke ();
  }

  return HelloWorld_stub::getTemp();
}

#endif // MICO_CONF_NO_POA

CORBA::Long HelloWorld_stub::getPressure()
{
  CORBA::Long _res;
  CORBA::StaticAny __res( CORBA::_stc_long, &_res );

  CORBA::StaticRequest __req( this, "getPressure" );
  __req.set_result( &__res );

  __req.invoke();

  mico_sii_throw( &__req, 
    0);
  return _res;
}


#ifndef MICO_CONF_NO_POA

CORBA::Long
HelloWorld_stub_clp::getPressure()
{
  PortableServer::Servant _serv = _preinvoke ();
  if (_serv) {
    POA_HelloWorld * _myserv = POA_HelloWorld::_narrow (_serv);
    if (_myserv) {
      CORBA::Long __res;

      #ifdef HAVE_EXCEPTIONS
      try {
      #endif
        __res = _myserv->getPressure();
      #ifdef HAVE_EXCEPTIONS
      }
      catch (...) {
        _myserv->_remove_ref();
        _postinvoke();
        throw;
      }
      #endif

      _myserv->_remove_ref();
      _postinvoke ();
      return __res;
    }
    _postinvoke ();
  }

  return HelloWorld_stub::getPressure();
}

#endif // MICO_CONF_NO_POA

CORBA::Long HelloWorld_stub::getWind()
{
  CORBA::Long _res;
  CORBA::StaticAny __res( CORBA::_stc_long, &_res );

  CORBA::StaticRequest __req( this, "getWind" );
  __req.set_result( &__res );

  __req.invoke();

  mico_sii_throw( &__req, 
    0);
  return _res;
}


#ifndef MICO_CONF_NO_POA

CORBA::Long
HelloWorld_stub_clp::getWind()
{
  PortableServer::Servant _serv = _preinvoke ();
  if (_serv) {
    POA_HelloWorld * _myserv = POA_HelloWorld::_narrow (_serv);
    if (_myserv) {
      CORBA::Long __res;

      #ifdef HAVE_EXCEPTIONS
      try {
      #endif
        __res = _myserv->getWind();
      #ifdef HAVE_EXCEPTIONS
      }
      catch (...) {
        _myserv->_remove_ref();
        _postinvoke();
        throw;
      }
      #endif

      _myserv->_remove_ref();
      _postinvoke ();
      return __res;
    }
    _postinvoke ();
  }

  return HelloWorld_stub::getWind();
}

#endif // MICO_CONF_NO_POA

struct __tc_init_HELLO {
  __tc_init_HELLO()
  {
    _marshaller_HelloWorld = new _Marshaller_HelloWorld;
  }

  ~__tc_init_HELLO()
  {
    delete static_cast<_Marshaller_HelloWorld*>(_marshaller_HelloWorld);
  }
};

static __tc_init_HELLO __init_HELLO;

//--------------------------------------------------------
//  Implementation of skeletons
//--------------------------------------------------------

// PortableServer Skeleton Class for interface HelloWorld
POA_HelloWorld::~POA_HelloWorld()
{
}

::HelloWorld_ptr
POA_HelloWorld::_this ()
{
  CORBA::Object_var obj = PortableServer::ServantBase::_this();
  return ::HelloWorld::_narrow (obj);
}

CORBA::Boolean
POA_HelloWorld::_is_a (const char * repoid)
{
  if (strcmp (repoid, "IDL:HelloWorld:1.0") == 0) {
    return TRUE;
  }
  return FALSE;
}

CORBA::InterfaceDef_ptr
POA_HelloWorld::_get_interface ()
{
  CORBA::InterfaceDef_ptr ifd = PortableServer::ServantBase::_get_interface ("IDL:HelloWorld:1.0");

  if (CORBA::is_nil (ifd)) {
    mico_throw (CORBA::OBJ_ADAPTER (0, CORBA::COMPLETED_NO));
  }

  return ifd;
}

CORBA::RepositoryId
POA_HelloWorld::_primary_interface (const PortableServer::ObjectId &, PortableServer::POA_ptr)
{
  return CORBA::string_dup ("IDL:HelloWorld:1.0");
}

CORBA::Object_ptr
POA_HelloWorld::_make_stub (PortableServer::POA_ptr poa, CORBA::Object_ptr obj)
{
  return new ::HelloWorld_stub_clp (poa, obj);
}

bool
POA_HelloWorld::dispatch (CORBA::StaticServerRequest_ptr __req)
{
  #ifdef HAVE_EXCEPTIONS
  try {
  #endif
    if( strcmp( __req->op_name(), "getTemp" ) == 0 ) {
      CORBA::Long _res;
      CORBA::StaticAny __res( CORBA::_stc_long, &_res );
      __req->set_result( &__res );

      if( !__req->read_args() )
        return true;

      _res = getTemp();
      __req->write_results();
      return true;
    }
    if( strcmp( __req->op_name(), "getPressure" ) == 0 ) {
      CORBA::Long _res;
      CORBA::StaticAny __res( CORBA::_stc_long, &_res );
      __req->set_result( &__res );

      if( !__req->read_args() )
        return true;

      _res = getPressure();
      __req->write_results();
      return true;
    }
    if( strcmp( __req->op_name(), "getWind" ) == 0 ) {
      CORBA::Long _res;
      CORBA::StaticAny __res( CORBA::_stc_long, &_res );
      __req->set_result( &__res );

      if( !__req->read_args() )
        return true;

      _res = getWind();
      __req->write_results();
      return true;
    }
  #ifdef HAVE_EXCEPTIONS
  } catch( CORBA::SystemException_catch &_ex ) {
    __req->set_exception( _ex->_clone() );
    __req->write_results();
    return true;
  } catch( ... ) {
    CORBA::UNKNOWN _ex (CORBA::OMGVMCID | 1, CORBA::COMPLETED_MAYBE);
    __req->set_exception (_ex->_clone());
    __req->write_results ();
    return true;
  }
  #endif

  return false;
}

void
POA_HelloWorld::invoke (CORBA::StaticServerRequest_ptr __req)
{
  if (dispatch (__req)) {
      return;
  }

  CORBA::Exception * ex = 
    new CORBA::BAD_OPERATION (0, CORBA::COMPLETED_NO);
  __req->set_exception (ex);
  __req->write_results();
}

