// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __ImageOrb_hh__
#define __ImageOrb_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_ImageOrb
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_ImageOrb
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_ImageOrb
#endif






#ifdef USE_stub_in_nt_dll
# ifndef USE_core_stub_in_nt_dll
#  define USE_core_stub_in_nt_dll
# endif
# ifndef USE_dyn_stub_in_nt_dll
#  define USE_dyn_stub_in_nt_dll
# endif
#endif

#ifdef _core_attr
# error "A local CPP macro _core_attr has already been defined."
#else
# ifdef  USE_core_stub_in_nt_dll
#  define _core_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _core_attr
# endif
#endif

#ifdef _dyn_attr
# error "A local CPP macro _dyn_attr has already been defined."
#else
# ifdef  USE_dyn_stub_in_nt_dll
#  define _dyn_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _dyn_attr
# endif
#endif





struct ImageOrb {
  typedef _CORBA_ConstrType_Variable_Var<ImageOrb> _var_type;


  CORBA::Short width;

  CORBA::Short height;

  CORBA::Short pix_size;

  typedef _CORBA_Unbounded_Sequence_Octet _data_seq;
  _data_seq data;



  void operator>>= (cdrStream &) const;
  void operator<<= (cdrStream &);
};

typedef ImageOrb::_var_type ImageOrb_var;

typedef _CORBA_ConstrType_Variable_OUT_arg< ImageOrb,ImageOrb_var > ImageOrb_out;

struct Point2DOrb {
  typedef _CORBA_ConstrType_Fix_Var<Point2DOrb> _var_type;


  CORBA::Short i;

  CORBA::Short j;



  void operator>>= (cdrStream &) const;
  void operator<<= (cdrStream &);
};

typedef Point2DOrb::_var_type Point2DOrb_var;

typedef Point2DOrb& Point2DOrb_out;

struct DimsOrb {
  typedef _CORBA_ConstrType_Fix_Var<DimsOrb> _var_type;


  CORBA::Short ww;

  CORBA::Short hh;



  void operator>>= (cdrStream &) const;
  void operator<<= (cdrStream &);
};

typedef DimsOrb::_var_type DimsOrb_var;

typedef DimsOrb& DimsOrb_out;









#undef _core_attr
#undef _dyn_attr





#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_ImageOrb
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_ImageOrb
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_ImageOrb
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_ImageOrb
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_ImageOrb
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_ImageOrb
#endif

#endif  // __ImageOrb_hh__

