/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_FilterIterator_h189f6b17__
#define __GENERATED_cls_FilterIterator_h189f6b17__

#include <cls/FilterIterator.fw.h>
#include <cls/IteratorIterator.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/iterator.php line 711 */
FORWARD_DECLARE_CLASS(FilterIterator);
extern ObjectStaticCallbacks cw_FilterIterator;
class c_FilterIterator : public c_IteratorIterator {
  public:

  // Properties
  Variant m_it;

  // Class Map
  virtual bool o_instanceof(CStrRef s) const;
  DECLARE_CLASS_COMMON_NO_SWEEP(FilterIterator, FilterIterator)

  // DECLARE_STATIC_PROP_OPS
  public:
  static Variant os_getInit(CStrRef s);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_FilterIterator 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_FilterIterator 1
  #define OMIT_JUMP_TABLE_CLASS_CONSTANT_FilterIterator 1

  // DECLARE_INSTANCE_PROP_OPS
  public:
  virtual const ClassPropTable *o_getClassPropTable() const;
  virtual Variant *o_realProp(CStrRef s, int flags,
                              CStrRef context = null_string) const;
  Variant *o_realPropPrivate(CStrRef s, int flags) const;

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC_FilterIterator 1

  // DECLARE_COMMON_INVOKE
  static const MethodCallInfoTable s_call_info_table[];
  static const int s_call_info_index[];

  public:
  c_FilterIterator(ObjectData* r = NULL) : m_it(Variant::nullInit) {
    setAttribute(HasCall);
  }
  Variant doCall(Variant v_name, Variant v_arguments, bool fatal);
  public: void t___construct(Variant v_it);
  public: c_FilterIterator *create(CVarRef v_it);
  public: void dynConstruct(CArrRef params);
  public: void getConstructor(MethodCallPackage &mcp);
  public: void t_rewind();
  // public: virtual void t_accept() = 0;
  public: void t_fetch();
  public: void t_next();
  public: Variant t_valid();
  public: Variant t_key();
  public: Variant t_current();
  public: Variant t___clone();
  public: Variant t_getinneriterator();
  public: Variant t___call(Variant v_func, Variant v_params);
  DECLARE_METHOD_INVOKE_HELPERS(next);
  DECLARE_METHOD_INVOKE_HELPERS(key);
  DECLARE_METHOD_INVOKE_HELPERS(valid);
  DECLARE_METHOD_INVOKE_HELPERS(getinneriterator);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(__clone);
  DECLARE_METHOD_INVOKE_HELPERS(fetch);
  DECLARE_METHOD_INVOKE_HELPERS(current);
  DECLARE_METHOD_INVOKE_HELPERS(__call);
  DECLARE_METHOD_INVOKE_HELPERS(accept);
  DECLARE_METHOD_INVOKE_HELPERS(rewind);
};
ObjectData *coo_FilterIterator() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_FilterIterator_h189f6b17__
